//============================================================================
// Name        : stringComparison.cpp
// Author      : Justin Hurley
// Version     :
// Description : Compares two strings and determines equality
//============================================================================

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;


string removeSpaces(string input);
string findMistake(string fixedFirst, string fixedSecond);
int main() {


	string firstString;
	string secondString;
	string fixedFirst;
	string fixedSecond;

	cout << "Welcome to the string comparison, User!" << endl;
	

	cout << "Please Enter the first string to be compared" << endl;
	while(getline(cin, firstString) && !firstString.empty()){
		fixedFirst += firstString;
	}
	fixedFirst = removeSpaces(fixedFirst);
	cout << endl;
	cout << fixedFirst;
	cout << endl;




	cout << "Please enter the second string" << endl;
	while(getline(cin, secondString) && !secondString.empty()){
			fixedSecond += secondString;
		}
	fixedSecond = removeSpaces(fixedSecond);
	cout << endl;
	cout << secondString;


	if(fixedFirst!= fixedSecond){


		cout << "The strings do not Match!";
		findMistake(fixedFirst, fixedSecond);
	}
	else{
		cout << "The Strings Match!";
	}



}


string removeSpaces(string input)
{
  input.erase(std::remove(input.begin(),input.end(),' '),input.end());
  input.erase(std::remove(input.begin(),input.end(),'\n'),input.end());
  return input;
}
string findMistake(string fixedFirst, string fixedSecond)
{
	int mistake;

	if(fixedFirst.length() > fixedSecond.length()) {
		cout << "The first string is too long!";
	}
	else if(fixedFirst.length() < fixedSecond.length()) {
		cout << "The second string is too long!";
	}

	else{
	for(int i = 0; i < fixedFirst.length(); i ++){



			if (fixedFirst[i] != fixedSecond[i]) {

				 mistake = i +1;
				 break;



			} // end if

	   } //end for
	 cout << " The first mistake is at the " << mistake << " position";
	} //end else


}
