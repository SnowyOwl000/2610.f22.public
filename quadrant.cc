#include <iostream>

using namespace std;

int main() {
  int
    x,y;
    
  cout << "Enter x and y coordinates: ";
  cin >> x >> y;
  
  if (x > 0) {
  
    // quadrants I or IV
    if (y > 0)
      cout << "quadrant I" << endl;
    else
      cout << "quadrant IV" << endl;
      
  } else {
  
    // quadrants II or III
    if (y > 0)
      cout << "quadrant II" << endl;
    else
      cout << "quadrant III" << endl;
      
  }
  
  return 0;
}

