#include <iostream>
 
using namespace std;
 
bool searchElement(int arr[], int N) {
  for (int i = 0; i < N; ++i) {
    if (arr[i] == 1) return false;
    return true;
}
 
 
int main() {
  int size;
  cin >> size;
  int arr[100];
  for (int i = 0;i<size;++i){
    cin >> arr[i];
  }if (searchElement(arr,size)) cout << "Easy"; 
  else cout << "Hard";
}
