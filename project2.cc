#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
  double
    current,previous,
    term,fNum,
    x,
    test;

  // cosine

  cout << "Enter x: ";
  cin >> x;

  // set up first term
  term = 1;
  fNum = 0;

  // set up current val
  current = 0;

  do {
    // copy current val to previous val
    previous = current;

    // update current val
    current = current + term;

    // set up next term
    term = -term * x * x / ((fNum + 1) * (fNum + 2));
    fNum += 2;

  } while (current != previous);

  test = cos(x);

  cout << setprecision(15) << current << endl;
  cout << test << endl;
  cout << (current - test) << endl;

  // sine

  // sqrt

  // approximation

  return 0;
}

