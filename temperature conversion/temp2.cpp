#include <iostream>
using namespace std;

const float con = 1.8;

float convert(float c)
{
  return c * con + 32;
}

int main ()
{
  for (int c=-100; c<110; c+=10)
    {

      int f = convert(c);
      cout << c << " celsius is " << f << " fahrenheit.";
      if (f==c)
	{
	  cout << "  <-- They are equal here";
	}
      cout << endl;
    }
  return 0;
}
