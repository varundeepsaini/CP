#include "iostream"
#include "vector"
using namespace std;
 
int maxOfVector(vector<int> arr){
    int max = arr[0];
    for(int i : arr) {
        if(i > max) {
            max = i;
        }
    }
    return max;
}
 
void printVector(vector<int> arr) {
    for(int i : arr) {
        cout << i << " ";
    }
    cout << endl;
}
 
int main() {
    int size;
    cin >> size;
    vector<int> a;
    int temp1 ,temp2;
    a.push_back(0);
    for(int i = 1; i < size; i++) {
        cin >> temp1 >> temp2;
        a.push_back(a.at(i-1) + temp2 - temp1) ;
    }
    cout << maxOfVector(a) << endl;
 
 
}
