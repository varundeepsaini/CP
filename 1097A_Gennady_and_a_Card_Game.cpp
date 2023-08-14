#include "iostream"
#include "bits/stdc++.h"
using namespace std;
 
bool isElementPresent(const vector<char>& vect,char a){
    for (char i : vect){
        if (i == a){
            return true;
        }
    }
    return false;
}
 
int main(){
    string key;
    cin >> key;
    int a = 5;
    vector<char> vect1;
    vector<char> vect2;
    while(a--){
        string str;
        cin >> str ;
        vect1.push_back(str[0]);
        vect2.push_back(str[1]);
    }
    if (isElementPresent(vect1, key[0]) || isElementPresent(vect2, key[1])){
        cout << "YES";
    }else cout << "NO";
}
