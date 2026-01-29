#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name;
	int health;
	int classChoice;
	string className;

	cout << "Enter character name: ";
	cin >> name;

	cout << "Enter health amount (0-100): ";
	cin >> health;

	cout << "Choose your class:" << endl;
	cout << "1 - Mage" << endl;
	cout << "2 - Warrior" << endl;
	cout << "3 - Archer" << endl;
	cout << "Enter number (1-3): ";
	cin >> classChoice;

	if (classChoice == 1)
	{
		className = "Mage";
	}
	else if (classChoice == 2)
	{
		className = "Warrior";
	}
	else if (classChoice == 3)
	{
		className = "Archer";
	}
	else
	{
		className = "Unknown";
	}

	cout << "\nName:   " << name << endl;
	cout << "Health: " << health << endl;
	cout << "Class:  " << className << endl;

	return 0;
}
