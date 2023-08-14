#include "iostream"
 
using namespace std;
 
int main(){
    long pricePerBanana,currentMoney,bananasToBuy,totalMoneyNeeded = 0;
    cin >> pricePerBanana >> currentMoney >> bananasToBuy;
    for (long i = 1; i<= bananasToBuy; i++) {
        totalMoneyNeeded += i*pricePerBanana;
    }
    if (totalMoneyNeeded > currentMoney){
        cout << totalMoneyNeeded - currentMoney;
    } else cout << 0;
}
