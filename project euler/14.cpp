#include <iostream>
using namespace std;

int total = 0;
int finalInt = 0;
unsigned input;
int main ()
{
  cout << "Pick a number: ";
  cin >> input;
  for( unsigned i = 1; i <= input; i++ )
    {
      int count = 0;
      unsigned j = i;
      //cout << j << "  ";
      while( j != 1 )
	{
	  if( j % 2 == 0 )
	    {
	      j = j / 2;
	      count++;
	    }
	  else if ( j % 2 != 0 )
	    {
	      j = ( 3 * j ) + 1;
	      count++;
	    }
	}
      if( count > total )
	{
	  total = count;
	  finalInt = i;
	}
    }
  cout << endl << endl << "The answer is " << finalInt << " with " << total << " changes." << endl;
  return 0;
}
