#include <iostream>

using namespace std;

int main() {
  int
    sum = 0,
    count = 0,
    score,
    average;
    
  while (score != -1) {
    cout << "Enter a score (-1 to quit): ";
    cin >> score;
    
    sum += score;
    count++;
  }
  
  average = sum / count;
  
  cout << "Average is " << average << endl;
  
  return 0;
}

