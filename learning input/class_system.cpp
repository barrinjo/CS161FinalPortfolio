#include <iostream>
#include <string>
#include <sstream>
#include <time.h>
#include <stdlib.h>
#include <limits>
using namespace std;

//database that tracks the name, age, and class for the player and computer
struct userClass {
  string playerName;
  int playerAge;
  int classNum;
} mine, yours;

//defining functions for printing the player's information and the computer's information
void printCompInfo (userClass player);
void printPlayerInfo (userClass player);

int main () {
  
//sets up computer clock for random class choice
  srand (time(NULL));

//strings for the user inputs for name age and class
  string nameIn;
  string ageIn;
  string classIn;

//defaulting the class as NULL so that the loop for picking a class will start
  yours.classNum = 0;

//asks the player his name using nameIn and puts the inputted string into the database under yours.playerName
  cout << "\nWHAT'S YOUR NAME, TRAVELER?: ";
  getline (cin, nameIn);
  yours.playerName = nameIn;
//asks the player their age
  cout << "HOW OLD ARE YOU, " << nameIn << "?: ";
//loop in case they dont put a real number in
  while (yours.playerAge==0) {
//converts the input string into an integer and stores it in the database as yours.playerAge (anything other than numerics are stored as '0')
    getline (cin, ageIn);
    stringstream(ageIn) >> yours.playerAge;
//if the player doesn't put their age in right, it restarts the loop so they can correctly enter their age
    if (yours.playerAge==0) {
      cout << "I DIDN'T UNDERSTAND YOUR ANSWER.  TRY AGAIN: ";
    }
  }
//asks the player to input a class
  cout << "PICK YOUR CLASS (TYPE MAGE, WARRIOR, ROGUE, WARLOCK, OR RANDOM): ";
//this loop checks that they inputted one of the four class options, converts the selected class into an integer (1-4) that is stored in the database unter classNum.  If they input anything other than the class then the loop will reset and allow them to correctly pick a class
  while (yours.classNum==0){
    getline (cin, classIn);
    stringstream(classIn) >> yours.classNum;
    if (classIn=="MAGE") {
      yours.classNum = 1;
    }
    else if (classIn=="WARRIOR") {
      yours.classNum = 2;
    }
    else if (classIn=="ROGUE") {
      yours.classNum = 3;
    }
    else if (classIn=="WARLOCK") {
      yours.classNum = 4;
    }
    else if (classIn=="RANDOM") {
      yours.classNum = (rand() % 4) + 1;
    }
    if (yours.classNum==0) {
      cout << "I DIDN'T UNDERSTAND YOUR ANSWER. TRY AGAIN: ";
    }
  }
//test database values for an imaginary computer player
  mine.playerName = "JOSHUA, THE MAGESTIC";
  mine.playerAge = 18;
  mine.classNum = rand() % 4;
//printing the information about the computer player using function printCompInfo and the database userClass with the 'mine' parameters
  cout << "\nI'LL LET YOU KNOW A LITTLE ABOUT MYSELF:\n";
  printCompInfo (mine);
  cout << endl;
//printing the information about the human player using function printPlayerInfo and the database userClass with the 'yours'  parameters
  cout << "HERE'S WHAT I CAN TELL YOU ABOUT YOURSELF, TRAVELER:";
  printPlayerInfo (yours);
  return 0;

}
//function for outputting the computers player information
void printCompInfo (userClass player) {

  string classPick [4] = {"MAGE", "WARRIOR", "ROGUE", "WARLOCK"};

  cout << "MY NAME IS " << player.playerName << ".\n";
  cout << "I AM " << player.playerAge << " YEARS OF AGE.\n";
  cout << "I AM A " << classPick[player.classNum] << ".\n";
}
//function for outputting the humans player information
void printPlayerInfo (userClass player) {

  string classPick [5] = {"nullClass", "MAGE", "WARRIOR", "ROGUE", "WARLOCK"};

  cout << "\nYOUR NAME IS " << player.playerName << ".\n";
  cout << "YOU ARE " << player.playerAge << " YEARS OF AGE.\n";
  cout << "YOU ARE A " << classPick[player.classNum] << ".\n";

}
