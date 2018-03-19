#include <iostream>
using namespace std;

int main () {
  int divide;
  int prime = 0;
  int i = 1;
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
      prime++;
    }
    if( prime == 10001) {
      cout << prime << ": " << i << endl;
    }
  }
}
