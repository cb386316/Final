
//@author: Connor Barber 

#include <iostream>

using namespace std;


int countLine(string text);
int countChar(string text);


/**
 * @brief: counts lines in a string
 * @function: countLine
 * @param: string text
 */
int countLine(string text){
	int counter = 0;
	if (text == "") {
		return 0;
	}
	else {
		counter++;
	}
	return counter;
}

/**
 * @brief: counts characters in a string
 * @function: countChar
 * @param: string text
 */
int countChar(string text){
	char conversion[100];
	int i;
	int counter= 0;
	for (i = 0; conversion[i] != '\0'; i++) {
		if (conversion[i] != ' ')// this condition is used to avoid counting space
		{
					++counter;
		}
	}

		return counter;
}

/**
 * @brief: main for the program
 * @function: main
 */

int main() {

	string text1 = "Athens";
	string text2 = "Ohio University";

	cout << "char: " << countChar(text1) << endl;
	cout << "lines: " << countLine(text2) << endl;

}
