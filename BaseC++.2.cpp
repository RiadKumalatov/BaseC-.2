#include <iostream>

struct BankAccount
{
	int accountNumber = 0;
	std::string ownersName;
	double amountOfMoney = 0;
};

void �hangeAmount(BankAccount& bankAccount, int newAmount)
{
	bankAccount.amountOfMoney = newAmount;
}

int main() 
{
	setlocale(LC_ALL, "Russian");

	BankAccount bank;

	std::cout << "������� ����� �����: ";
	std::cin >> bank.accountNumber;

	std::cout << "\n������� ��� ���������: ";
	std::cin >> bank.ownersName;

	std::cout << "\n������� ������: ";
	std::cin >> bank.amountOfMoney;

	std::cout << "\n������� ����� ������: ";
	double newAmount = 0;
	std::cin >> newAmount;
	�hangeAmount(bank, newAmount);

	std::cout << "��� ����: " << bank.ownersName << "," << bank.accountNumber << "," << bank.amountOfMoney << std::endl;
}