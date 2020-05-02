#include <iostream>

using namespace std;

int main()
{
	int choice = 0;
	int testScore;
	double GPA;
	
	cout << "1. Enter your test score, I'll tell you the grade.\n "
		<< "(0-59 F, 60-69 D, 70-79 C, 80-89 B, 90-100 A, everything else is invalid)\n"

		<< "\n2. Enter your GPA to see if you made the Dean's List.\n "
		<< "(3.9 - 4 makes the dean's list, 0-3.8 doesn't, everything else is invalid)\n"

		<< "\n3. Exit\n";
	
	do
	{
		cout << "\nPick a choice between 1, 2, or 3: ";
		cin >> choice;
	
	switch (choice)
		{
		case 1:
			cout << "What is your test score? " << endl;
			cin >> testScore;

			if (testScore >= 0 && testScore < 60)
				cout << "You have an F grade." << endl;
			else if (testScore >= 60 && testScore < 70)
				cout << "You have a D grade." << endl;
			else if (testScore >= 70 && testScore < 80)
				cout << "You have a C grade." << endl;
			else if (testScore >= 80 && testScore < 90)
				cout << "You have a B grade." << endl;
			else if (testScore >= 90 && testScore <= 100)
				cout << "You have an A grade." << endl;

			else cout << "Invalid Test Score. " << endl;
			break;

		case 2:
			cout << "What is your GPA?" << endl;
			cin >> GPA;

			if (GPA >= 3.9 && GPA <= 4.0)
				cout << "You made the Dean's List." << endl;
			else if (GPA >= 0 && GPA <= 3.8)
				cout << "You did not make the Dean's List" << endl;
			else cout << "Invalid GPA. " << endl;
			break;

		case 3:
			cout << "Exiting Program... " << endl;
			break;

		default:
			cout << "Invalid Choice.";
		}
	}
	while (choice != 3);

	return 0;
}