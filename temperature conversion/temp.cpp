#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main () {
  float f, c;
  string playerInput;
  cout << "Enter a temperature in celsius: ";
  getline(cin, playerInput);
  stringstream(playerInput) >> c;
  
  f = (1.8)*c + 32;

  cout << c << " celsius is " << f << " fahrenheit." << endl;
  return 0;
}
