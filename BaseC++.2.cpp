#include <iostream>

struct BankAccount
{
	int accountNumber = 0;
	std::string ownersName;
	double amountOfMoney = 0;
};

void ñhangeAmount(BankAccount& bankAccount, int newAmount)
{
	bankAccount.amountOfMoney = newAmount;
}

int main() 
{
	setlocale(LC_ALL, "Russian");

	BankAccount bank;

	std::cout << "Ââåäèòå íîìåð ñ÷¸òà: ";
	std::cin >> bank.accountNumber;

	std::cout << "\nÂâåäèòå èìÿ âëàäåëüöà: ";
	std::cin >> bank.ownersName;

	std::cout << "\nÂâåäèòå áàëàíñ: ";
	std::cin >> bank.amountOfMoney;

	std::cout << "\nÂâåäèòå íîâûé áàëàíñ: ";
	double newAmount = 0;
	std::cin >> newAmount;
	ñhangeAmount(bank, newAmount);

	std::cout << "Âàø ñ÷¸ò: " << bank.ownersName << "," << bank.accountNumber << "," << bank.amountOfMoney << std::endl;
}