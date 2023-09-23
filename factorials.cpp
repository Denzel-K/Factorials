#include <iostream>
using namespace std;

int iter_Approach(int num);
int rec_approach(int num);

int main(){
  int num;
  int answer;
  
  cout << "_*_*_*_ FACTORIAL PROGRAM_*_*_*_" << '\n';
  
  do {
    cout << "Enter a number between (1-100)" << '\n';
    cin >> num;
    
    if (num <= 50){
      answer = iter_Approach(num);
      cout << num <<" ! " << "is " << answer << '\n';
      cout << "Done iteratively." << '\n';
      break;
    }
    else if(num > 50){
      answer = rec_approach(num);
      cout << num <<" ! " << "is " << answer << '\n';
      cout << "Done Recursively." << '\n';
      break;
    }
  }while(!(num < 1) || !(num > 100));
  
  return 0;
}

int iter_Approach(int num){
  int result = 1;
  
  for (int i = 1; i <= num; i++){
    result = result * i;
  }
  return result;
}

int rec_approach(int num){
  if (num > 1){
    return num * rec_approach(num - 1);
  }
  else {
    return 1;
  }
}