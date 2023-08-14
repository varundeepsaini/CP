#include "iostream"
#include "bits/stdc++.h"
using namespace std;
 
 
void printVector(vector <int> vect){
    for (int i : vect){
        cout << i << " ";
    }
    cout << endl;
}
 
int minOfVector(vector <int> vect){
    int min = vect.at(0);
    for (int i : vect){
        if(i < min){
            min = i;
        }
    }
    return min;
}
 
bool onlyOneIntInWholeVector(vector <int> vect){
    int count = 0;
    int var = vect.at(0);
    for (int i : vect){
        if(i == var){
            count++;
        }
    }
    if(count == vect.size()){
        return true;
    }
    else{
        return false;
    }
}
 
 
int solve(vector <int> vect){
    vector <int> b;
    vector <int> c;
 
    long long cc;
    cc = count(vect.begin(), vect.end(), 1);
 
    if(onlyOneIntInWholeVector(vect)){
        cout << -1 << endl;
        return 0;
    }else{
        for(int i : vect){
            if(i == minOfVector(vect)){
                b.push_back(i);
            }
            else{
                c.push_back(i);
            }
        }
    }
 
    cout << b.size() << " " << c.size() << endl;
    printVector(b);
    printVector(c);
    return 0;
}
 
 
int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int size;
        vector <int> vect;
        cin >> size;
 
        for(int i = size;i >0 ;i--){
            int temp;
            cin >> temp;
            vect.push_back(temp);
        }
        solve(vect);
    }
}
