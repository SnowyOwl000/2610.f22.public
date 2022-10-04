#include <iostream>
#include <unistd.h>

using namespace std;

int main() {
  char
    ch;
  bool
    hasPepperoni = false,
    hasBacon = false,
    hasPineapple = false,
    hasOlives = false,
    hasSausage = false,
    hasBPeppers = false,
    hasMushrooms = false,
    hasXCheese = false;
    
  do {
    cout << "\033[2J\033[H";
    
    cout << "Options:\n\n"
            "(P)epperoni\n"
            "(B)acon\n"
            "p(I)neapple\n"
            "(O)lives\n"
            "(S)ausage\n"
            "ba(N)ana peppers\n"
            "(M)ushrooms\n"
            "(E)xtra cheese\n"
            
            "\n(D)one\n"
            "\nEnter your choice: ";
            
    cin >> ch;
    
    switch (ch) {
     case 'P':
     case 'p':
      hasPepperoni = true;
      break;
     case 'B':
     case 'b':
      hasBacon = true;
      break;
     case 'I':
     case 'i':
      hasPineapple = true;
      break;
     case 'O':
     case 'o':
      hasOlives = true;
      break;
     case 'S':
     case 's':
      hasSausage = true;
      break;
     case 'N':
     case 'n':
      hasBPeppers = true;
      break;
     case 'M':
     case 'm':
      hasMushrooms = true;
      break;
     case 'E':
     case 'e':
      hasXCheese = true;
      break;
     case 'D':
     case 'd':
      break;
     default:
      cout << "Invalid choice [" << ch << ']' << endl;
      sleep(2);
    }
            
  } while (ch != 'D' && ch != 'd');
  
  cout << "Toppings:";
  
  if (hasPepperoni)
    cout << " pepperoni";
    
  if (hasBacon)
    cout << " bacon";
    
  if (hasPineapple)
    cout << " pineapple";
    
  if (hasOlives)
    cout << " olives";
    
  if (hasSausage)
    cout << " sausage";
    
  if (hasBPeppers)
    cout << " banana-peppers";
    
  if (hasMushrooms)
    cout << " mushrooms";
    
  if (hasXCheese)
    cout << " extra-cheese";
    
  cout << endl;
  
  return 0;
}

