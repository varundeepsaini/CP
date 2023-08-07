#include<bits/stdc++.h>
using namespace std;
 
 
void solve() {
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    bool isSorted = true;
    int ans = 0;
    for(int i = n - 2; i >= 0; --i) {
        if(arr[i] > arr[i + 1]) {
            isSorted = false;
        }
        if(!isSorted) {
            ans = max(ans, arr[i]);
        }
    }
 
    cout << ans << endl;
}
 
 
int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
}
