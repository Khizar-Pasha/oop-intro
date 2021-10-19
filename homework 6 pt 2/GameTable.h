#include <string>
#include <time.h>
#include <iostream>
using namespace std;
#pragma once

/// <summary>
/// the class for the multi dim array
/// </summary>
class GameTable 
{
public:
	/// <summary>
	/// This is the default constructor. It initalizes immideiatly after the class is instansiated if I'm not mistaken.
	///  Our input here is nothing, and we arent returning anything either, but I suppose the output is us fulling the array with \t's.
	///Finally, our process is the double for loop filling the array so we can initialize it with \ts. (K.P) 
	/// </summary>
	GameTable(); 
	/// <summary>
	/// Input: Here our inputs are just our parameters of num and name. Although I'm not too sure if name counts, as technically the user doesn't decide it.
	/// Process: Set a randomly chosen column in the row given by the current loop iteration to be equal to the users name using an array assignment.
	/// Output: We do not output anything to the screen, but I guess we do output or rather send "name" to table. (K.P)
	/// </summary>
	/// <param name="num">The row number</param>
	/// <param name="name">users name</param>
	void setNameNum(int num, string name); 
	/// <summary>
	/// Input: our input to the function is just the row number we get from the for loop, although the user doesn't input this, so I'm not sure if it still counts as input.
	/// Process: Our process here is displaying the name table on the screen using the for loop.
	/// Output: Our output is us outputting the the names in their respective columns on the screen. (K.P)
	/// </summary>
	/// <param name="row">row number we want to return</param>
	/// <returns>returns row from table</returns>
	void getRow(int row);

private:
	/// <summary>
	/// The table where we store the names
	/// </summary>
	string table[10][3]; 

};

