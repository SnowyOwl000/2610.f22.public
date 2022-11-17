#include <iostream>

using namespace std;

struct Point {
  int32_t
    x,y;
};

int main() {
  Point
    current,previous,first;
  double
    area = 0;
    
  cout << "Enter first point: ";
  cin >> first.x >> first.y;
  
  current = first;
  
  do {
    previous = current;
    
    cout << "Enter next point: ";
    cin >> current.x >> current.y;
    
    area += current.y * previous.x - current.x * previous.y;
  } while (current.x != first.x || current.y != first.y);
  
  area /= 2.0;
  
  cout << "Polygon area: " << area << endl;
  
  return 0;
}

