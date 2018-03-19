#include <iostream>
using namespace std;

int main () {
  int divide;
  int i = 1;
  unsigned long int factor = 600851475143;
  while( i > 0) {
    i++;
    divide=i;
    int count = 0;
    for(divide = i; divide > 0; divide--) {
      if( i % divide == 0 ) {
        count++;
      }
    }
    if(count == 2) {
      if (factor % i == 0) {
	cout << i << endl;
      }
    }
  }
}
