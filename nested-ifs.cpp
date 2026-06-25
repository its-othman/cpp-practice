/*A program to accept players on specific conditions:
1. Legenardy or Higher
2. Above 80k trophies
3. Has a strong internet connection*/

#include <iostream>

int trophies;
std::string rank;
int ping;

void intro() {
	std::cout << "Welcome to clan invitation forums!\n";
	std::cout << "You'll be asked some questions to know if we could accept you in our clan.\n";
	std::cout << "Enter your trophies count: ";
	std::cin >> trophies;;
	std::cout << "What's your average ping per game?: ";
	std::cin >> ping;
}

int main() {
	intro();
	if (trophies >= 80000) {
		if (ping <= 100) {
			std::cout << "You've been accepted!";
		}
		else {
			std::cout << "Sorry, but you need a better ping.";
		}
	}
	else {
		std::cout << "Sorry, but you need more trophies.";
	}

}