#include <iostream>
#include <cmath>

using namespace std;

int main() {
  // step 0: variables
  double
    a,b,c,	// coefficients
    d,		// discriminant
    x1,x2;	// roots

  // step 1: get a, b and c
  cout << "Enter values for a, b and c separated by spaces: ";
  cin >> a >> b >> c;

  // step 1.5: calculate d
  d = b * b - 4 * a * c;

  // step 2a: if a == 0, linear equation {
  if (a == 0) {

    // step 2a(1): if b == 0, that's an error
    if (b == 0) {
      cout << "a and b cannot both be 0" << endl;
    // step 2a(2): else, it's a linear equation, x = -c / b
    } else {
      x1 = -c / b;
      cout << "Linear equation, solution is x = " << x1 << endl;
    }

  // step 2b(1): } else if d < 0, complex roots {
  } else if (d < 0) {
    // two vars just for the complex case
    double
      re,im;

    re = -b / (2 * a);
    im = sqrt(-d) / (2 * a);

    cout << "Complex roots:" << endl;
    cout << re << " + " << im << 'i' << endl;
    cout << re << " - " << im << 'i' << endl;

  // step 2b(2): } else if d == 0, same root twice {
  } else if (d == 0) {
    x1 = -b / (2 * a);
    
    cout << "Repeated root x = " << x1 << endl;

  // step 2b(c): } else d > 0, two real roots ("normal" case) {
  } else {
    x1 = (-b + sqrt(d)) / (2 * a);
    x2 = (-b - sqrt(d)) / (2 * a);
    
    cout << "First x value: " << x1 << endl;
    cout << "Second x value: " << x2 << endl;

  // }
  }

  // step 3: all done

  return 0;
}

