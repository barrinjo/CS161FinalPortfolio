#include <iostream>
using namespace std;

int power;
unsigned long long val, num, sum = 0;
int main ()
{
  cout << "Pick a number: ";
  cin >> val;
  cout << "to the what?: ";
  cin >> num;
  /*for( unsigned i = 1; i < num; i++)
    {
      val = val * (num - i);
    }*/
  int x = val;
  for( unsigned i = 1; i < num; i++)
    {
      val = val * x;
    }

  num = val;
  while( num != 0 )
    {
      sum = sum + num % 10;
      num = num / 10;
    }
  cout << val << " --> " << sum << endl;
  return 0;
}
