#include <iostream>
#include <ctime>
using namespace std;

//prototype functions that will be used
bool PlayGame(int x);
void Introduction(int y);


int main() {
	
	int Level = 1;
	int Difficulty = 1;
	while (Level <= 10) {
//make the numbers truly random generate seed based on time
srand(time(NULL));

		Introduction(Level);
		 

		if (PlayGame(Difficulty)) {
			cout << endl;
			cout << "That is the correct code!" << endl;
			cout << endl;
			++Difficulty;
			++Level;
		}
		else {
			cout << endl;
			cout << "That is not the correct code!" << endl;
		}
		if (Level > 10) {
			cout << "You have successfully cracked all the codes! \n You win!!!!" << endl;
		}

	}

	return 0;
}



bool PlayGame(int Difficulty) {


    int CodeA = rand() % Difficulty + Difficulty;
	int CodeB = rand() % Difficulty + Difficulty;
	int CodeC = rand() % Difficulty + Difficulty;

	int CodeGuessA, CodeGuessB, CodeGuessC;
	int CodeSum = CodeA + CodeB + CodeC;
	int CodeProduct = CodeA * CodeB * CodeC;
	int CodeGuessSum, CodeGuessProduct;
cout << "Hints..." << endl;
	cout << "The code contains 3 digits" << endl;
	cout << "The sum of the 3 digit code is " << CodeSum << endl;
	cout << "The product of the 3 digit code is " << CodeProduct << endl;

	cout << "Enter the code: "; cin >> CodeGuessA >> CodeGuessB >> CodeGuessC;




	CodeGuessSum = CodeGuessA + CodeGuessB + CodeGuessC;
	CodeGuessProduct = CodeGuessA * CodeGuessB * CodeGuessC;

	if (CodeGuessSum==CodeSum&&CodeGuessProduct==CodeProduct) {
		
		return true;
	}
	else {

		
		return false;
	}
};


void Introduction(int Level) {

	

	cout << "You are a secret agent breaking into a level " << Level << " server room..." << endl;
	cout << "Enter the correct code to advance to the next room..." << endl;
	cout << endl;
	

}