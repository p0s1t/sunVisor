#ifndef ATTRIBUTE_H
#define ATTRIBUTE_H

#include<vector>
#include<string>

using std::vector;
using std::string;

class Attribute{

public: 
Attribute();
~Attribute();
//containers for attribute related data

vector<string> a;//attribute container

vector<string> * p;//pointer to container

//vector<int> i;//indexes to be excluded from master list of attributes

//getters
vector<string> * getAts(vector<int> indexes);
vector<string> * getAllAts();
};


#endif
