#include<iostream>
using namespace std;

float total = 0;
int tval, ttot;
int tot;
float quo;

int main ()
{
  unsigned val;
  cout << "pick a number: ";
  cin >> val;
  for( int i = 0; i < val; i++)
    {
      signed count = 1;
      int divide = i;
      for( divide = i; divide > 0; divide-- )
	{
	  if( i % divide != 0 )
	    {
	      count++;
	    }
	}
      tot = val - count;
      quo = val / tot;
      if( quo > total )
	{
	  total = quo;
	  tval = val;
	  ttot = ttot;
	}
    }
  cout << "n = " << val << "|tot = " << ttot << "|quo = " << total << "|" << endl;
  return 0;
}
