#include <iostream>
using namespace std;

int number = 2;
int divide;
int o = 0;
int main() {
  while (number > 0) {
    divide = 1;
    o = 0;
    number+=2;
    for (divide = 1; divide <= 20; divide++) {
      if (number % divide == 0) {
	o++;
	if ( o == 20 ) {
	  cout << number << endl;
	  return 0;
	}
      }
    }
  }
  return 0;
}
