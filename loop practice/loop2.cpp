#include<iostream>
using namespace std;

int c = 0;

void sort(string array[], int size) {
	int startScan, minIndex;
	string minValue;

	for (startScan=0; startScan<(size-1); startScan++) {

		minIndex = startScan;
		minValue = array[startScan];
		for(int index=startScan+1; index<size; index++) {
			if (array[index] < minValue) {
				minValue=array[index];
				minIndex=index;
			}
		}
		array[minIndex] = array[startScan];
		array[startScan] = minValue;
	}
	for( int i = 0; i < c ; i++ ) {
		cout << array[i] << endl;
	}
}

int main( int argc, char *argv[] ) {
	string inputArray[257];
	string userInput;		
	cout << "Enter things to organize them (enter again to stop):" << endl;
	while(getline(cin, userInput)) {
		inputArray[c] = userInput;
		c++;
	}
	if( c == 0 ) {
		cout << "no input." << endl;
	}
	sort(inputArray, c);
	return 0;
}