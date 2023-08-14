#include "iostream"
using namespace std;
 
int32_t main(){
    int numOfCubes;
    cin>>numOfCubes;
 
    int count = 0;
    int sum = 0;
 
    while(sum < numOfCubes){
        count++;
        sum += (count*(count+1)) / 2;
    }
 
    if (sum != numOfCubes) count--;
 
    cout << count;
}
