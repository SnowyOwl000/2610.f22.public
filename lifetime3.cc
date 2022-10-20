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
  
  for (int i=0;i<3;i++)
    cout << "location of i is " << &i << endl;
  
  for (int j=0;j<3;j++)
    cout << "location of j is " << &j << endl;
  
  return 0;
}

