//3-3 FILE NOTES
//  - I CAN open and read data from a text file
//	- I CAN use loops to process an entire text file

// To add a new file:
//   Right-click on source folder, choose 'Add New Item'
//   Under 'Utility', choose 'Text File'

#include <iostream>
#include <fstream> //Adds File input/output
using namespace std;

int main() {

	//Make an input file variable
	ifstream fin;
	//Open the file
	fin.open("grades.txt");

	//Make sure it opened (it won't tell you otherwise)
	if (!fin.is_open()) {
		cout << "file did not open" << endl;
	}

	//Loop until end of file
	while (!fin.eof()) {

		//Input name
		string name;
		fin >> name;

		//Input score
		double score;
		fin >> score;

		//Determine pass/fail
		if (score >= 60) {
			cout << name << "\t" << score << "\t" << "PASS" << endl;
		}
		else {
			cout << name << "\t" << score << "\t" << "FAIL" << endl;
		}
	}

	system("pause");
}
