// AIncludeCharsOfB.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include"AIncludeCharsOfB.h"


int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	AIncludeCharsOfB Incl;
	cout << boolalpha << Incl.compareStrings(s1, s2) << '\n';
	exit(0);
    return 0;
}

