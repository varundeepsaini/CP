#include "iostream"
using namespace std;
 
void solve(string x, int size){
    int num = 1;
    int index = 1;
 
    if (size == 1) cout << x;
 
    while(index < size){
        index = (num*(num+1))/2;
        cout << x[index - 1];
        num++;
    }
    cout << endl;
}
 
int main(){
    int size;
    cin >> size;
    string x;
    cin >> x;
    solve(x,size);
 
}
