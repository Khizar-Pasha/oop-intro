/*

Input: The input is us getting them to enter if they want to play, and also getting them to enter their name if they do want to.
Process: The process is the for loop, while loop, the switch, and the if else statement
Output: The output is when we display the array, or ask them to play.
*/


#include <iostream>
#include <string>
#include "GameTable.h"
using namespace std;

GameTable table = GameTable();
int main()
{
	
	string wantToPlay; //variable that checks if they want to play. I made this a string, because otherwise the user can enter something like "jsdjhsjdhsj", and the validation loop outputs for every single char.
	string name; //variable that stores their name
	int randomNumber; //variable that stores a random number



	for (int i = 0; i < 10; i++) { //this for loop is what lets us run the program 10 times.
		cout << "Do you want to play?" << endl; //I get them to input if they wanna play.
		cin >> wantToPlay;

		while (wantToPlay != "y" && wantToPlay != "n") { //this while ensures they want to play by relooping if wantToPlay doesnt equal y or n.
			cout << "You must enter \"y\", or \"n\". " << endl;
			cin >> wantToPlay;
		} //end while


		if (wantToPlay == "n") { //if they don't want to play we continue to the next iteration
			continue;
		}
		else { //otherwise if they do want to play, we ask for their name here, generate a number between 0 and 2, and store it in the array
			cout << "Please enter your name." << endl;
			cin >> name;


			table.setNameNum(i, name);

		}//end if else

	}//end for	

	//finally, we display the array.
	for (int i = 0; i < 10; ++i) {
		string* row= table.getRow(i);
		cout << row[0] << "\t" << row[1] << "\t" << row[2] << endl;


	}//end for

	return 0;
}// end main

