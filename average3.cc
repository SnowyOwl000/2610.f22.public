#include <iostream>

using namespace std;

int main() {
  int
    sum = 0,
    count = 0,
    score;
  double
    average;

  // loop priming
  cout << "Enter a score (-1 to quit): ";
  cin >> score;
    
  while (score != -1) {
    sum += score;
    count++;

    cout << "Enter a score (-1 to quit): ";
    cin >> score;
  }
  
  average = (double)sum / count;
  
  cout << "Average is " << average << endl;
  
  return 0;
}

