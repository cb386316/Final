
#include <iostream>
#include <string>

using namespace std;


int countLine(string text);
int countChar(string text);


/**
 * @function: countLine
 * @param: string text
  * @brief: counts lines in a string
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
 * @function: countChar
  * @brief: counts characters in a string
 * @param: string text
 */
int countChar(string text){
	
		return text.length();
}

/**
 * @function: main
  * @brief: main for the program
 */

int main() {

	string text1 = "Athens";
	string text2 = "Ohio University";

	cout << "char: " << countChar(text1) << endl;
	cout << "lines: " << countLine(text2) << endl;

}
