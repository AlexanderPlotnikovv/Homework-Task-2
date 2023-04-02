#include<iostream>

struct FinancialInformation {
	int num;
	std::string name;
	int sum;
};

void FinancialInf(FinancialInformation& Person) {
	std::cout << "Enter your wallet number: ";
	std::cin >> Person.num;
	std::cout << "Enter your name: ";
	std::cin >> Person.name;
	std::cout << "Enter your amount: ";
	std::cin >> Person.sum;
}

void NewSum(FinancialInformation& Person) {
	std::cout << "Enter your new amount: ";
	std::cin >> Person.sum;
}

int main()
{
	FinancialInformation Person;
	FinancialInf(Person);
	NewSum(Person);
	std::cout << "Your wallet: " << Person.name << ", " << Person.num << ", " << Person.sum;
}