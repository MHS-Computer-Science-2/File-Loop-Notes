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
	fin.open("mileage.txt");

	//Make sure it opened (it won't tell you otherwise)
	if (!fin.is_open()) {
		cout << "file did not open" << endl;
	}

	//Loop until end of file
	while (!fin.eof()) {

		//Compute MPG for first line
		int numTrips = 0;
		fin >> numTrips;

		//Use a for loop to read and add the miles on the line
		double totalMiles = 0, miles = 0;

		for (int i = 0; i < numTrips; i++) {
			fin >> miles; //Input trip miles
			totalMiles = totalMiles + miles; //Add to total
		}

		//Input gallons
		double gallons = 0;
		fin >> gallons;

		//Compute MPG
		double mpg = totalMiles / gallons;

		//Output results
		cout << "MPG = " << mpg << endl;
	}

	system("Pause");
}
