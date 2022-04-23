
#ifndef STUDENT_H_
#define STUDENT_H_
#include <cmath>
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include <list>
using namespace std;
class Student {
    public:
    Student();
    Student(string name, string majors, int year, int studentId);
    int averageGpa;
    int semesterGpa;
    int studentId;
    string name;
    string majors;
    int year;
    int totalCredits;
};

class HashTable{
    private:
        static const int hashgroup = 10;
        list<pair<int, string>> table[hashgroup];

    public:
        bool isEmpty();
        int hashFunction(int key);
        void insertItem(int key, string value);
        void removeItem(int key);
        string SearchTable(int key);
        void printTable();
};
#endif
