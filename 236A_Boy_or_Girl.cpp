#include "iostream"
#include "vector"
#include "bits/stdc++.h"
using namespace std;
 
int main(){
    vector<char> vect;
    string s;
    int c = 0;
    cin >> s;
 
    for (char i : s) {
        if (count(vect.begin(),vect.end(),i)==0){
            vect.push_back(i);
            c++;
        }
    }
    if(c%2==0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";
}
