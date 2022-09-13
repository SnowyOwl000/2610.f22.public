#include <iostream>

using namespace std;

int main() {
  int
    val;

  cout << "pi is approximately " << (22 / 7) << endl;
  cout << "9/10 is " << (9 / 10) << endl;
  cout << "-7/4 is " << (-7/4) << endl;
  cout << "7/-4 is " << (7/-4) << endl;
  
  cout << "pi is approximately " << (22.0 / 7) << endl;
  cout << "9/10 is " << (9.0 / 10) << endl;
  cout << "-7/4 is " << (-7.0/4) << endl;
  cout << "7/-4 is " << (7.0/-4) << endl;
  
  val = 22.0 / 7;
  cout << "pi is approximately " << val << endl;
  val = 9.0 / 10;
  cout << "9/10 is " << val << endl;
  val = -7.0 / 4;
  cout << "-7/4 is " << val << endl;

  cout << "22 % 7 is " << (22 % 7) << endl;
  cout << "9 % 10 is " << (9 % 10) << endl;
  cout << "-7 % 4 is " << (-7 % 4) << endl;
  cout << "7 % -4 is " << (7 % -4) << endl;
  
  cout << "1.0 / 0.0 is " << (1.0 / 0.0) << endl;
  cout << "1 / 0 is " << (1 / 0) << endl;
  
  cout << "This line won't display" << endl;
  
  return 0;
}

