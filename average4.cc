#include <iostream>

using namespace std;

int main() {
  int
    sum = 0,
    count = 0,
    score;
  double
    average;
    
  while (true) {
    cout << "Enter a score (-1 to quit): ";
    cin >> score;
    
    if (score == -1)
      break;
    
    sum += score;
    count++;
  }
  
  average = (double)sum / count;
  
  cout << "Average is " << average << endl;
  
  return 0;
}

