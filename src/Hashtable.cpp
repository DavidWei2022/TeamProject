#include <cmath>
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include <list>

#include "Hashtable.h"
using namespace std;


HashTable::HashTable()
{
    // this->hashgroup = b;
    //make
    // table = new list<pair<int, string>>[hashgroup];
}

HashTable::HashTable(int b)
{
    // this->hashgroup = b;
    //make
    // table = new list<pair<int, string>>[hashgroup];
}
//do we need isEmpty function?
bool HashTable::isEmpty(){
    //return true for now, will edit later
    return true;
}
int HashTable::hashFunction(int key){
    //for now the hash function would just be the key divided by the total hash size
    return (key % hashgroup);
}
void HashTable::insertItem(int key, string value){
     int index = hashFunction(key);
    //  table[index].push_back(key);
}
void HashTable::removeItem(int key){



}