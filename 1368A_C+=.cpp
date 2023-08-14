#include "iostream"
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        long long count = 0;
        long long a,b,n;
        cin >> a >> b >> n;
        while (a<=n || b <= n){
            if(a>b){
                b+=a;
            }else{
                a+=b;
            }count++;
        }cout << count-1 << endl;
    }
}
