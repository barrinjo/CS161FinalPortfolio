#include<iostream>
#include<fstream>
using namespace std;

string user;

int main ()
{
  ifstream f("userInput");

  while(getline(f, user))
    {
      cout << user << endl;
    }
  f.close();

  return 0;
}
