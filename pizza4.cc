#include <iostream>
#include <unistd.h>

using namespace std;

bool
  hasPepperoni = false,
  hasBacon = false,
  hasPineapple = false,
  hasOlives = false,
  hasSausage = false,
  hasBPeppers = false,
  hasMushrooms = false,
  hasXCheese = false;

void showToppings() {

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
}

int main() {
  char
    ch;
    
  do {
    cout << "\033[2J\033[H";
    
    showToppings();
    
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
      hasPepperoni = !hasPepperoni;
      break;
     case 'B':
     case 'b':
      hasBacon = !hasBacon;
      break;
     case 'I':
     case 'i':
      hasPineapple = !hasPineapple;
      break;
     case 'O':
     case 'o':
      hasOlives = !hasOlives;
      break;
     case 'S':
     case 's':
      hasSausage = !hasSausage;
      break;
     case 'N':
     case 'n':
      hasBPeppers = !hasBPeppers;
      break;
     case 'M':
     case 'm':
      hasMushrooms = !hasMushrooms;
      break;
     case 'E':
     case 'e':
      hasXCheese = !hasXCheese;
      break;
     case 'D':
     case 'd':
      break;
     default:
      cout << "Invalid choice [" << ch << ']' << endl;
      sleep(2);
    }
            
  } while (ch != 'D' && ch != 'd');
  
  showToppings();
    
  return 0;
}

