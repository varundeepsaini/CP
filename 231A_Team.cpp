#include <iostream>
using namespace std;
     
     
     
int binaryToDecimal(int a, int b, int c){
  int sum = 0;
  sum += a*4+b*2+c;
  return sum;
}
     
int main(){
  int number_of_questions,a,b,c,total_questions_to_be_answered = 0;
  cin >> number_of_questions;
  while(number_of_questions!=0){
    cin >> a;
    cin >> b;
    cin >> c;
    int sum = binaryToDecimal(a,b,c);
    if(sum==3||sum==5||sum==6||sum==7){
      total_questions_to_be_answered++;
    }
    number_of_questions--;
  }
  cout << total_questions_to_be_answered;
}
