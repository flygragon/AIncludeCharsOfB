#pragma once
#include<string>
#include<algorithm>
using namespace std;
class AIncludeCharsOfB {
public:
	/**
	* @param A: A string includes Upper Case letters
	* @param B: A string includes Upper Case letter
	* @return:  if string A contains all of the characters in B return true
	*           else return false
	*/
	bool compareStrings(string &A, string &B) {
		// write your code here
		sort(A.begin(), A.end());
		sort(B.begin(), B.end());
		string::iterator itA, itB;
		for (itA = A.begin(), itB = B.begin(); itA != A.end() && itB != B.end();) {
			if (*itA >*itB) return false;
			else while (itA != A.end() && *itA <*itB)
				itA++;
			while (itA != A.end() && itB != B.end() && *itA == *itB)
				itA++, itB++;
		}
		return itB == B.end();
	}
};
