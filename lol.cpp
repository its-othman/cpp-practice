#include <iostream>

double num1, num2;
int choice;

int WelcomeText() {
	std::cout << "Welcome to the Calculator!\n";
	std::cout << "Please choose what calculation you wish to make:\n";
	std::cout << "Addition is option 1.\n" << "Subtraction is option 2.\n";
	std::cout << "Multiplication is option 3.\n" << "Divison is option 4.\n";
	std::cout << "Your Option: " << choice;
	std::cin >> choice;
	return choice;
}

int Instructions() {
	std::cout << "Please enter a value for your numbers.\n";
	std::cout << "First number value:";
	std::cin >> num1;
	std::cout << "Second number value:";
	std::cin >> num2;
	return num1, num2;
}

void Addition() {
	Instructions();
	double isAdd= num1 + num2;
	std::cout << "Your Final Number Is:" << isAdd;
}

void Subtraction() {
	Instructions();
	double isSub = num1 - num2;
	std::cout << "Your Final Number Is:" << isSub;
}

void Multiplication() {
	Instructions();
	double isMul = num1 * num2;
	std::cout << "Your Final Number Is:" << isMul;
}

void Divison() {
	Instructions();
	double isDiv = num1 / num2;
	std::cout << "Your Final Number Is:" << isDiv;
}

int main() {
	WelcomeText();
	switch (choice) {
	case 1:
		Addition();
			break;
	case 2:
		Subtraction();
		break;
	case 3:
		Multiplication();
		break;
	case 4:
		Divison();
		break;
	default:
		std::cout << "Invalid Choice. Restarting...";
		int main();
		break;
	}
}