#include<iostream>
using namespace std;

int main() {
	cout << "Give me words and I'll sort them alphabetically:" << endl;
	string userInput, first, last;
	int i=0;
	while(getline(cin, userInput)) {
		if(i == 0) {
			first = userInput;
		}
		else if (userInput < first) {
			first = userInput;
		}
		else if (userInput > last) {
			last = userInput;
		}
		i++;
	}
	if( i == 0 ){
		cout << "No inputs were given." << endl;
	}
	else if (i == 1 ){
		cout << endl << "The only word is: " << first << endl;
	}
	else {
		cout <<  endl << "The first word is: " << first << endl << "The last word is: " << last << endl;
	}
}