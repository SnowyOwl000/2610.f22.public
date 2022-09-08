#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int
    val = 2147483647;
  float
    fVal = 16777214;
    
  cout << "Before adding: " << val << endl;
  
  val = val + 1;
  
  cout << "After adding: " << val << endl;
  
  cout << "Floating-point overflowing... part 1" << endl;
  cout << setprecision(8);
  
  cout << "First: " << fVal << endl;
  
  fVal = fVal + 1;
  
  cout << "Second: " << fVal << endl;
  
  fVal = fVal + 1;
  
  cout << "Third: " << fVal << endl;
  
  fVal = fVal + 1;
  
  cout << "Fourth: " << fVal << endl;
  
  cout << "Floating-point overflowing... part 2" << endl;
  fVal = 1e38;
  
  cout << "fVal = " << fVal << endl;
  
  fVal = fVal * 2;
  
  cout << "fVal = " << fVal << endl;
  
  fVal = fVal * 2;
  
  cout << "fVal = " << fVal << endl;
  
  fVal = fVal * 2;
  
  cout << "fVal = " << fVal << endl;
  
  fVal = fVal * 2;
    
  return 0;
}

