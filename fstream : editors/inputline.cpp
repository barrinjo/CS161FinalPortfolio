#include<iostream>
#include<fstream>

int main(int argc, char *argv[]) {
	using std::cin;
	using std::ofstream;
	using std::cout;
	using std::endl;
	using std::string;
	using std::ios;

	ofstream f;
	f.open(argv[1], ios::app);
	string user;

	while(getline(cin, user)) {
		f << user << endl;
	}
	f.close();
	return 0;
}