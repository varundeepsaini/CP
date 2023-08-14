#include "iostream"
using namespace std;
 
int Search(const string& x){
    for (int i = 0; i< x.length(); i++) {
        if (x[i] == '1') {
            return i;
        }
    }return -1;
}
int BackSearch(const string& x){
    for (int i = x.length()-1; i > -1; i--) {
        if (x[i] == '1') {
            return i;
        }
    }return -1;
}
 
int solve(string x){
    int count = 0;
    int start_index = Search(x);
    int end_index = BackSearch(x);
    if(start_index == -1 || end_index == -1){
        return 0;
    }
    for(int i = start_index; i < end_index; i++){
        if(x[i] == '0'){
            count++;
        }
    }
    return count;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        string x;
        cin >> x;
        cout << solve(x) << endl;
    }
}
