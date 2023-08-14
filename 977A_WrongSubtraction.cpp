#include "iostream"
 
using namespace std;
 
int main(){
    int number,numberOfSubtractions;
    cin >> number >> numberOfSubtractions;
 
    while (numberOfSubtractions){
        if (number % 10 == 0){
            number /= 10;
        }else{
            number -= 1;
        }
        numberOfSubtractions--;
    }
    cout << number;
}
