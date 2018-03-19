#include <iostream>
using namespace std;

int main ()
{
  char a[3];
  char b[3];
  int total;
  int pal;
  int mul = 0;
  for( int i = 1; i < 1000; i++)
    {
      for( int j = 1; j < 1000; j++)
	{
	  total = j * i;
	  a[1] = (total / 100000) % 10;
	  a[2] = (total / 10000) % 10;
	  a[3] = (total / 1000) % 10;
	  b[3] = (total / 100) % 10;
	  b[2] = (total / 10) % 10;
	  b[1] = total % 10;
	  if( a[1] == b[1] )
	    {
	      if( a[2] == b[2] )
		{
		  if( a[3] == b[3] )
		    {
		      pal = total;
		    }
		}
	    }
	  if( pal > mul )
	    {
	      mul = pal;
	    }
	}
    }
  cout << mul << endl;
}
