    #include<iostream>;
     
    using namespace std;
     
    int main (){
     
        string s; cin >> s;
     
        int n = s.length();
        for(int i = 0; i < n; ++i) {
            if(s[i] >= '5') {
                if(i == 0 && s[i] == '9') {
                    continue;
                }
                int cur = s[i] - '0';
                cur = 9 - cur;
                s[i] = cur + '0';
            }
        }
     
        cout << s << endl;
    }