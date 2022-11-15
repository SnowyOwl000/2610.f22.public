#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char
    str1[80],
    str2[80];
  int
    n;
  double
    x;
    
  cout << "Enter a string: ";
  cin >> str1;
  //cin.getline(str1,80);
  
  cout << "String has length " << strlen(str1) << endl;
  
  // this is illegal
  //str2 = str1;
  strcpy(str2,str1);
  
  cout << "Second string is now [" << str2 << ']' << endl;
  
  cout << "Enter second string: ";
  cin >> str2;
  
  strcat(str1,str2);
  
  cout << "Concatenation is [" << str1 << ']' << endl;
  
  cout << "Enter two strings: ";
  cin >> str1 >> str2;
  
  // comparison doesn't work the way you expect!
  if (str1 < str2)
    cout << "First string comes first" << endl;
  if (str1 > str2)
    cout << "Second string comes first" << endl;
  if (str1 == str2)
    cout << "Strings are equal" << endl;
    
  // need the strcmp function to do comparisons
  if (strcmp(str1,str2) < 0)
    cout << "First string comes first" << endl;
  if (strcmp(str1,str2) > 0)
    cout << "Second string comes first" << endl;
  if (strcmp(str1,str2) == 0)
    cout << "Strings are equal" << endl;

  if (strcasecmp(str1,str2) == 0)
    cout << "Strings are equal, ignoring case" << endl;
    
  cout << "Enter an integer number: ";
  cin >> str1;
  
  // better conversion function
  n = strtol(str1,nullptr,10);
  
  cout << "Number is " << n << endl;
  
  cout << "Enter a floating-point number: ";
  cin >> str1;
  
  // better conversion function
  x = strtod(str1,nullptr);
  
  cout << "Number is " << x << endl;
  
  return 0;
}

