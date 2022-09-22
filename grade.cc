#include <iostream>

using namespace std;

const int
  MAX_SCORE = 107,
  MIN_SCORE = -2;

int main() {
  int
    score;
  char
    grade;
    
  cout << "Enter score: ";
  cin >> score;

  if (score > MAX_SCORE || score < MIN_SCORE) {
    cout << "Invalid score" << endl;
    return 1;
  }
  
  if (score >= 90)
    grade = 'A';
  else if (score >= 80)
    grade = 'B';
  else if (score >= 70)
    grade = 'C';
  else if (score >= 60)
    grade = 'D';
  else
    grade = 'F';
    
  cout << "Grade is " << grade << endl;
  
  return 0;
}

