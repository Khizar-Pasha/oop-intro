/*

Input: The input is us getting them to enter if they want to play, and also getting them to enter their name if they do want to.
Process: The process is us putting their name in the table and displaying it, and we do this with whiles, fors, ifs, and calling the object
Output: The output is when we display the array. (K.P)
*/



#include "GameTable.h"
using namespace std;

GameTable table = GameTable();
int main()
{
	
	string wantToPlay; //variable that checks if they want to play. I made this a string, because otherwise the user can enter something like "jsdjhsjdhsj", and the validation loop outputs for every single char.
	string name; //variable that stores their name
	



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
		else { //otherwise if they do want to play, we ask for their name here, and use the set function to assign them a random number which we use to assign them a position in the array.
			cout << "Please enter your name." << endl;
			cin >> name;


			table.setNameNum(i, name);

		}//end if else

	}//end for	

	//finally, we display the array using the getrow function.
	for (int i = 0; i < 10; ++i) {
		table.getRow(i);
		


	}//end for


	return 0;
}// end main

