    #include <iostream>
    #include <unordered_map>
    using namespace std;
     
    unsigned long long numberOfFaces(char a) {
        static unordered_map<char, unsigned long long> faceMap = {
                {'T', 4},
                {'C', 6},
                {'O', 8},
                {'D', 12},
                {'I', 20}
        };
        return faceMap[a];
    }
     
    int main() {
        int t;
        cin >> t;
        unsigned long long totalFaces = 0;
        while (t--) {
            string N;
            cin >> N;
            totalFaces += numberOfFaces(N[0]);
        }
        cout << totalFaces;
    }
