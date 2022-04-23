//============================================================================
// Name        : CMPE130TeamProject.cpp
// Author      : David Wie
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
//Need Hash table 
//would we be inserting students using a .txt file or maunal input?
#include <cmath>
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include <list>
#include "Student.cpp"
using namespace std;


//Student::Student(char* name1, char*majors1, int year1, int studentId1){
int main() {
	Student David("David","CMPE",2022,123);
	HashTable HT;

	if (HT.isEmpty()){
		cout << "Table is emply to start" << endl;
	} else {
		cout << "Error in code" << endl;
	}

	HT.insertItem(123, "Dave");
	HT.insertItem(531, "King");
	HT.insertItem(785, "Weny");
	HT.insertItem(189, "Mcdonald");
	HT.insertItem(456, "Jill");

	HT.printTable();

	HT.removeItem(456);

	HT.printTable();



	return 0;
}
