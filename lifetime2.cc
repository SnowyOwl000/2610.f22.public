#include <iostream>

using namespace std;

void foo() {
  int
    num;
    
  cout << "Start of foo, num is " << num << endl;
  
  num = 7;
  
  cout << "End of foo, num is " << num << endl;
}

int main() {

  cout << "Start of main" << endl;
  
  foo();
  
  cout << "Zwischenzug" << endl;	// "zwischenzug" = "in-between move", in chess
  
  foo();
  
  cout << "End of main" << endl;
  
  return 0;
}

