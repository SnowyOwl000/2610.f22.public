#include <iostream>

using namespace std;

int main() {
  float
    fPi = 3.14159;
  double
    dPi = 3.14159;
    
  if (fPi == dPi)
    cout << "Same" << endl;
  else
    cout << "Different" << endl;
    
  return 0;
}

