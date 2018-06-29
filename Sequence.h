#ifndef SEQUENCE_H
#define SEQUENCE_H
#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<vector>
using namespace std;

class Sequence
{
public:
	Sequence(string filename);
	int length();
	int numberOf(char base);
	string longestConsecutive();
	string longestRepeated();
private:
	string nameoffile;
	string dna;
	int number;
	char ch;
	int i = 0;
};
#endif
