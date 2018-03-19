#include <iostream>
using namespace std;

int main ()
{
  for(int a = 0; a < 1000; a++ )
    {
      for(int b = 0; b < 1000; b++ )
	{
	  for(int c = 0; c < 1000; c++ )
	    {
	      if( a < b < c )
		{
		  int f = a*a + b*b;
		  int l = c*c;
		  if( a*a + b*b  == c*c )
		    {
		      int check = a + b + c;
		      if( a + b + c == 1000 )
			{
			  cout << a << " " << b << " " << c << endl;
			  cout << a*b*c << endl;
			}
		    }
		}
	    }
	}
    }
}
