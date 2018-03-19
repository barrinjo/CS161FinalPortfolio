#include <iostream>
using namespace std;

int main() {
  int f = 1;
  int p = 1;
  int o = 1;
  int t = 0;

  while(o < 4000001) {
    if( o % 2 == 0) {
      t = t + o;
      cout << t << endl;
      o = f + p;
      p = f;
      f = o;
    }
    else {
      o = f + p;
      p = f;
      f = o;
    }
  }
  return 0;
}
