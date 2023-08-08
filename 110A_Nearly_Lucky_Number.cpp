#include <iostream>
 
using namespace std;
 
bool isLucky(string a){
    int b = a.length();
    for(int i = 0; i < b; i++){
        if (a[i]!='7' && a[i]!='4'){
            return false;
        }
    }return true;
}
 
int main(){
    string a;
    cin >> a;
    int b = a.length();
    int count =0;
    for(int i = 0; i < b; i++){
        if (a[i]=='7' || a[i]=='4'){
            count++;
        }
    }
    if (isLucky(to_string(count))){
        cout << "YES";
    } else{
        cout << "NO";
    }
}
