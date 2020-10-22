#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include <string>
using namespace std;

 
class Character{
    
    public:
    string name;
    string getName() {return name;}
    void setName(string name) {this->name = name;}
    int hp;
    int progress;
};
#endif
