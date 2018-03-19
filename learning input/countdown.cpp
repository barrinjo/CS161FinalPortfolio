//This is a number survival game made by the supreme wizard himself.  The objective is to survive, but that's not entirely possible, so the player often loses.  There are some special cases like being a five or the enemy using a power move that should be completely functional  

#include <iostream>
#include <string>
#include <sstream>
#include <stdlib.h>
#include <time.h>
#include <limits>

using namespace std;

int main () {

  srand (time(NULL)); //sets up the random timer for the catchphrase generator

        string theChoice; //string for number input
	int lowlyBeginnings; //for remembering your detailed past
	int userPick=0; //integer for remembering number
	string catchPhrase [8] = {"Things are really heating up!", "What will happen next?", "Who could have seen this coming?", "What a mastery of skill!", "Completely incredible!", "So much detail!", "The anticipation is building!", "The enemy is charging a power move!"}; //array of 8 possible catchphrases
	string numberThought [8] = {"intrigues", "confounds", "befuddles", "inspires", "angers", "charges", "blesses", "changes"};
	int phaseCounter=0; //keeps track of what turn it is
	int prevRand=0;
	int RandIndex=0;
	int randThought=0;
	string terribleChoices;

	cout << "\nWelcome to NUMBER SURVIVAL!!!\nPick a number: "; //gets a number from the player
		getline (cin,theChoice);
		terribleChoices=theChoice;
		stringstream(theChoice) >> userPick;//converts the number from a string to a integer
		if (userPick<=0) {
		  cout << "\nOkay how about a number between 1 and 50 since this is too difficult for you?: ";
		  getline (cin,theChoice);
		  stringstream(theChoice) >> userPick;
		  if (userPick>=51 || userPick <=0) {
		    cout << "\nApparently you've been given too much choice.  How about this.  Please make your number 10: ";
		    getline (cin,theChoice);
		    stringstream(theChoice) >> userPick;
		    if (userPick!=10) {
		      cout << "\nSo you're going to be like that? Okay you just put in whatever terrible things you want and I'll override your number to 1.  Easy enough?: ";
		      getline (cin,theChoice);
		      stringstream(theChoice) >> userPick;
		      userPick=1;
		    }
		  }
		}
		else {
		  cout << endl;
		}
		stringstream(theChoice) >> lowlyBeginnings;
		
		
	while(userPick > 0){ //slowly kills the number
	        phaseCounter += 1;
	        cout << "Round " << phaseCounter << "\n\n";
		cout << "	It is now your turn...\n";
		randThought = rand() % 8;
		if (userPick==5) {
		  cout << "		You are a very special 5.  You still didn't do anything though.\n";
		}
		else if (phaseCounter==1) {
		  cout << "                You are just a simple " << userPick << ".  You didn't do anything.\n";
		}
		else { cout << "		You are just a simple " << userPick;
		cout <<".  The newfound power of " << userPick << " " << numberThought[randThought] << " you.\n                You don't do anything.\n";
		}
		prevRand=RandIndex;
		RandIndex = rand() % 8;
		cout << "	It is now the enemies turn...\n";
		if (prevRand!=7) {
		cout << "		" << "You" << " took 1 damage!";
		}
		else {
		cout << "               " << "You took 2 damage from a POWER MOVE!!! HOLY FUCK!!!\n\n";
		}
		if (prevRand==7) {

		  userPick -= 1;

		}
		if (prevRand!=7 && userPick!=1) {
		cout << "  " << catchPhrase[RandIndex] << "\n\n";
		}
		else RandIndex=0; cout << "\n\n";
		userPick = userPick-1;

	}

		if (lowlyBeginnings!=0) { //lets the player know they lost

		  cout << "\nWhen you started this journey, your number was " << lowlyBeginnings << ".  Your number is now 0.\n\nYou only survived for " << phaseCounter-1 << " rounds.  It seems that you aren't very good at this game...\n" << endl;

		}
		else {
		  cout <<"When you started this journey, you made the terrible choice of having '" << terribleChoices << "' as your number.\n\nAfter some disagreement, we were able to resolve the conflict by removing any decision making power that you had.\n\nYour mandatory number was 1.  Your number is now 0.\n\nYou only survived for " <<phaseCounter-1 << " rounds. It seems that not only are you terrible at following directions, you are also bad at this game...\n" << endl;
		}
		//else {

		  //cout << "GODDAMN YOU JUST GOT SUPER DEATH FUCKED BY A POWERMOVE!!! YOUR NUMBER IS SOMEHOW -1!!!\nYOUR SOUL IS ETERNALLY BANISHED FROM BOTH HEAVEN AND HELL!!! YOU WANDER THROUGH LIMBO FOR THE REST OF TIME!!!\n\n";

		  //}


	cout << "Thanks for playing.\n\n-Wizard\n\n";
	return 0;

}
