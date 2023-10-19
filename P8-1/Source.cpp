# include <iostream>
#include <string>

using namespace std;

// Function prototype
int countVowel(string str);

// Main function.

int main() {
	string input;
	
	while (true) {
		cout << "Enter a string or Q to quit: ";
		getline(cin, input);
		
		if (input == "Q" || input == "q") break;
		cout << "Vowel count: " << countVowel(input) << endl;
	}
	return 0;
}

// Function Defintion
// * countVowel - counts the vowels in a word.
// * Parameters - string str.
// * Returns - count when there are string vowels in a word.
int countVowel(string str) {
	
	int i;
	int count = 0;

	for (i = 0; i < str.size(); i++)
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
			count++;

	return count++;
}