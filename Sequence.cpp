#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<vector>
#include"Sequence.h"
using namespace std;

Sequence::Sequence(std::string filename)
	:nameoffile(filename)
{
	ifstream dna01(nameoffile, ios::in);
	getline(dna01, dna);
}

int Sequence::length()
{
	number = dna.size();
	return number;
}

int Sequence::numberOf(char base)
{
	ifstream  dna02(nameoffile, ios::in);
	while (dna02.get(ch))
	{
		if (ch = base)
			i++;
	}
	return i;
}

string Sequence::longestConsecutive()
{
	const char*strSource = dna.c_str;
	char*GetSubstring(char*strSource);
	char*strSubstring;
	int nlen;
	int nCurPos;
	int nCurCount;
	int nPos;
	int nCount;
	nlen = strlen(strSource);
	nCount = 1;
	nPos = 0;
	nCurCount = 1;
	nCurPos = 0;
	for (int p= 1; p< nlen; p++)
	{
		if (strSource[p] == strSource[nCurPos])
			nCurCount++;
		else 
		{
			if (nCurCount > nCount)
			{
				nCount = nCurCount;
				nPos = nCurPos;
			}
			
			nCurCount = 1;
			nCurPos = p;
		}
	}

	strSubstring = (char*)malloc(nCount + 1);
	
	for (int u = 0; u < nCount; u++)
		strSubstring[u] = strSource[nPos + u];
	strSubstring[nCount] = '\0';
	string dnas = strSubstring;

	return dnas;
}

string Sequence::longestRepeated()
{
	string maxrepeated;
	for (int x = 0; x < dna.size();x++)
		for (int j = 0; j < x; j++)
		{
			string temp;
			int k = j;
			int m = x;
			while (dna[m] == dna[k] && x < dna.size() && k < dna.size())
			{
				m++;
				k++;
			}
			temp = dna.substr(j, k - j);
			if (temp.size() > maxrepeated.size())
				maxrepeated = temp;
	   }
	return maxrepeated;
}
