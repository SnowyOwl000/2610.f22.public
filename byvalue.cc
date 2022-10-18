#include <iostream>

using namespace std;

void foo(int val) {

  cout << "Val starts at " << val << endl;
  
  val = val * 6;
  
  cout << "Val ends at " << val << endl;
  
  cout << "Location of foo's val is " << &val << endl;
}

int main() { 
  int
    num;
    
  num = 32;
  
  cout << "Before foo, num is " << num << endl;
  
  foo(num);
  
  cout << "After foo, num is " << num << endl;
  
  cout << "Location of main's num is " << &num << endl;
  
  return 0;
}

