#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

bool IsVowel(string strIn)
{
	if (strIn.length() > 0)
	{
		char c;
		c = toupper(strIn[0]);
		if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
			return true;
	}
	return false;
}

string PigVowel(string strIn)
{
	string strOut;

	return strOut;
}

string PigConsonant(string strIn)
{
	string strOut;

	return strOut;
}

int _tmain(int argc, _TCHAR* argv[])
{

	string strInput = "";
	int iPosition = 0;
	string strOutput = "";
	
	cout << "Pig Latin Interpreter" << endl << endl;
	cout << "Enter a word in English: ";
	cin >> strInput;

	cout << endl;
	cout << "Pig Latin: " << strOutput << endl << endl;

	system("Pause");
	return 0;
}

