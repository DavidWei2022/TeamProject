#include <cmath>
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include <list>

#include "Student.h"
using namespace std;
Student::Student(){
   
    year = 2022;
    
}


Student::Student(string name1,string majors1, int year1, int studentId1){
  name = name1;
  majors = majors1;
  year = year1;
  studentId = studentId1;
}
