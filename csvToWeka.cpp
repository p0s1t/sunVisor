//program to convert .csv files to .arff files for Weka
//syntax is './csvToWeka csvInputFileName.csv outputName.arff attributesFile.txt nameOfMainRelation
//first line of csv is expected to have attribute names as titles
#include<cstdlib>
#include<csv.h>

int main(argc[]){

string  rel = "@RELATION:";

//attach relation name for .arff via input by user on command line

string rel = rel + argc[3];

ifstream file(argc[2]);

if(file.is_open())

	{


}


