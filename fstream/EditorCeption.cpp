#include<iostream>
#include<fstream>

int main(int argc, char *argv[]) {
using namespace std;

ofstream f;
f.open(argv[1], ios::app);
string user;

while(getline(cin, user)) {
f << user << endl;
}
f.close();
return 0;
}
