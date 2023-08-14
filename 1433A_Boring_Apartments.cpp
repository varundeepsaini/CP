#include "iostream"
using namespace std;
 
int log(int x){
    int answer = 0;
    while (x > 0){
        x /= 10;
        answer++;
    }
    return answer;
}
 
int solve(int x){
    int answer = 0;
    int numOfDigits = log(x);
    if(x%10 == 1){
        answer += (numOfDigits*(numOfDigits+1))/2;
    }else{
        answer += (10 * ((x%10)-1));
        answer += (numOfDigits*(numOfDigits+1))/2;
    }
    return answer;
}
 
int main(){
    int t;
    cin >> t;
    while (t--){
        int x;
        cin >> x;
        cout << solve(x) << endl;
    }
}
