    #include <iostream>
     
    using namespace std;
     
    int main(){
        int a;
        int ans = 0;
        string b;
        cin >> a;
        while (a>0){
            cin >> b;
            if (b == "x++" || b == "++x" || b == "X++" || b == "++X"){
                ans++;
                a--;
            }else if (b == "x--" || b == "--x" || b == "X--" || b == "--X"){
                ans--;
                a--;
     
            }
        }
        cout << ans;
     
     
        return 0;
     
    }