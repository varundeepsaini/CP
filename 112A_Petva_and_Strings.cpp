    #include<iostream>
     
    using namespace std;
     
    string toLower(string a){
        int b = a.length();
        for (int i=0; i<b; i++){
            if (a[i] >= 'A' && a[i] <= 'Z'){
                a[i] = a[i] + 32;
            }
        }
        return a;
    }
     
    int main(){
        string a;
        string b;
        cin >> a >> b;
        a = toLower(a);
        b = toLower(b);
        if (a == b){
            cout << 0;
        }
        else if (a > b){
            cout << 1;
        }
        else{
            cout << -1;
        }
     
     
     
        return 0;
    }
