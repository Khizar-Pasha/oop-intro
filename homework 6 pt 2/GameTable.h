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
	/// Override constructor
	/// </summary>
	GameTable(); 
	/// <summary>
	/// Sets a randomly chosen column in the row to be equal to the users name.
	/// </summary>
	/// <param name="num">The row number</param>
	/// <param name="name">users name</param>
	void setNameNum(int num, string name); 
	/// <summary>
	/// Gets the row from the table
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

