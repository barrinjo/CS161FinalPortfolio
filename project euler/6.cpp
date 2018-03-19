#include <iostream>
using namespace std;

int main () {

  int i = 1;
  int square;
  int sum = 0;
  int squareSum = 0;
  int total;
  for(i = 1; i <= 100; i++) {
    square = i * i;
    squareSum = squareSum + square;
    sum = sum + i;
  }
  sum = sum * sum;
  total = sum - squareSum;
  cout << total << endl;

}
