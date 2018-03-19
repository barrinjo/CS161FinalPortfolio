#include <iostream>
using namespace std;

int main ()
{
  unsigned long int divide;
  unsigned long int sum = 7;
   for( unsigned long int i = 0; i < 2000000; i++)
     {
       if( i % 2 != 0 && i % 5 != 0 )
	 {
	   divide=i;
	   int count = 0;
	   for(divide = i; divide > 0; divide--)
	     {
	       if( i % divide == 0 )
		 {
		   count++;
		 }
	     }
	   if(count == 2)
	     {
	       sum = sum + i;
	     }
	 }
     }
   cout << sum << endl;
   return 0;
}
