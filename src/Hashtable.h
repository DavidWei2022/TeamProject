
#ifndef HASHTABLE_H_
#define HASHTABLE_H_
#include <cmath>
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include <list>
using namespace std;
class HashTable{
    private:
        int hashgroup = 10;
        
        //change table into a pointer to an array
        list<pair<int, string>> *table;

    public:
        HashTable();
        HashTable(int b);
        //do we need isEmpty function?
        bool isEmpty();
        int hashFunction(int key);
        void insertItem(int key, string value);
        void removeItem(int key);
        string SearchTable(int key);
        void printTable();
};

#endif