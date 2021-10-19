#include "GameTable.h"

GameTable::GameTable() { //Constructor initalizes table 
	for (int i = 0; i < 10; ++i) {
		for (int j = 0; j < 3; ++j) {
		 	table[i][j] = "\t";
		}//end inner for
	}//end outer for
}//end constructor

void GameTable::setNameNum(int num, string name) {
	int randNum;
	srand(time(NULL));
	randNum = rand() % 3;

	table[num][randNum] = name;
}//end setNameNum

string* GameTable::getRow(int row)
{	
	return table[row];
}//end getRow


