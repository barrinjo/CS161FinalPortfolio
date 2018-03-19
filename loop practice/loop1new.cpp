#include<iostream>
using namespace std;

int main() {
	cout << "enter:" << endl;
	string userInput, total;
	int i=0;
	while(getline(cin, userInput)) {
		if(i == 0) {
			total = userInput;
		}
		else if (userInput < total) {
			total = userInput;
		}
		i++;
	}
	cout <<  endl << total << endl;
}