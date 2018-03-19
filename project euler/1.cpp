#include <iostream>
using namespace std;

int main () {

  int i = 1;
  int total = 0;
  for(i = 1; i < 1000; i++) {
    if(i % 3 == 0 || i % 5 == 0) {
      total = total + i;
    }
  }
  cout << total << endl;

}
