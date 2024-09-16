#include <iostream>
using namespace std;

void CheckNumber(const int&  number){
  if(number < 0){
    cout << "Number is negative" << ' ';
  }else if(number > 0){
    cout << "Number is positive" << ' ';
  }else{
    cout << "Number is 0 " << ' ';
  }
}

int main(){
  int number;
  cout << "Enter a number: " << endl;
  cin >> number;

  CheckNumber(number);

  return 0;
}

