#include "iostream"
 
using namespace std;
 
int main(){
    int weightOfLimak, weightOfBob, years = 0;
    cin >> weightOfLimak >> weightOfBob;
    while (weightOfBob >= weightOfLimak){
        weightOfBob *= 2;
        weightOfLimak *= 3;
        years++;
    }cout << years;
}
