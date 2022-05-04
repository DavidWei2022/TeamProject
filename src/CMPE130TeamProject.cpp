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
#include "Hashtable.cpp"
using namespace std;


void greeting(){

	cout<<"Welcome to our school, please pick your role!"<<endl;
	//admin has the power of add student and remove student,
	//student has the power of view course and add/drop course
	cout<<"option 1, Admin\t   option 2, Student"<<endl;
	int choice;
	cin >>choice;
	//check if the user enters valid choice for admin or student
	if(choice ==1||choice ==2){
		//I'm thinking maybe remove the login/signup system, focus more on admin and student?
		cout<<"Welcome! please login or signup!";
		cout<<"option 1, Login\t   option 2, Signup"<<endl;
		int second_choice;
		cin>>second_choice;
		//Admin + login
		if(choice ==1 &&second_choice ==1){
			//upon successful login
			cout<<"Welcome back! Here's a list of options"<<endl;
			cout<<"1:View currnet students"<<endl;
			cout<<"2:Add new students"<<endl;
			cout<<"3:Edit student information (name and id are not editable)"<<endl;
			cout<<"4:Remove certain student"<<endl;
			int Adminchoice;
			cin>>Adminchoice;
			while(Adminchoice ==1||Adminchoice ==2||Adminchoice ==3||Adminchoice ==4){
				if(Adminchoice ==1){
					//hashtable print function
				}
				else if(Adminchoice ==2){
					//hashtable insertHash
				}
				else if(Adminchoice ==3){
					//hashtable search function and remove and add
				}
				else if(Adminchoice ==4){
					//hashtable remove function
				}
			}


		}
		//Admin + sign up
		else if(choice ==1 &&second_choice ==2){

		}
		//Student + login
		else if(choice ==2 &&second_choice ==1){
			//upon successful login
		}
		//Student + signup
		else if(choice ==2 &&second_choice ==2){

		}

	}
	else{
		cout<<"please enter a valid choice!"<<endl;

	}

}


//Student::Student(char* name1, char*majors1, int year1, int studentId1){
int main() {
	greeting();

	Student David("David","CMPE",2022,123);
	HashTable HT();

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
