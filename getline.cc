#include <iostream>
#include <string>

using namespace std;

int main() {
  int
    num;
  string
    name;
    
  cout << "Enter jersey number: ";
  cin >> num;
  
  cin.ignore();
  
  cout << "Enter player name: ";
  getline(cin,name);
  
  cout << "Number: " << num << endl;
  cout << "Name: " << name << endl;
  
  return 0;
}

