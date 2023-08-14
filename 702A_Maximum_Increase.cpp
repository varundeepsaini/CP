#include "iostream"
#include "bits/stdc++.h"
using namespace std;
 
int maxOfVector(vector<int>& vect){
    int max = vect.at(0);
    for(int i : vect){
        if (i > max){
            max = i;
        }
    }
    return max;
}
 
int solve(vector<int> vect){
    vector<int> vect1;
    int pointer = 1;
    for(int i = 0; i < vect.size()-1; i++){
        if (vect.at(i) < vect.at(i+1)){
            pointer++;
        }else{
            vect1.push_back(pointer);
            pointer = 1;
        }
    }
    vect1.push_back(pointer);
    return maxOfVector(vect1);
}
 
int main(){
    vector<int> vect;
    int t;
    cin >> t;
    while (t--){
        int j;
        cin >> j;
        vect.push_back(j);
    }
    cout << solve(vect);
}
