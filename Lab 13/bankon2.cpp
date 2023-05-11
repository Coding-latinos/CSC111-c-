#include <iostream>

class SavingsAccount
{
public:
    void openAccount(int initialDollars, int initialCents);
    void makeDeposit(int depositDollars, int depositCents);
    void makeWithdrawal(int withdrawalDollars, int withdrawalCents);
    void showCurrentBalance();

private:
    int dollars;
    int cents;

    void normalizeBalance();
};

void SavingsAccount::openAccount(int initialDollars, int initialCents)
{
    dollars = initialDollars;
    cents = initialCents;
    normalizeBalance();
}

void SavingsAccount::makeDeposit(int depositDollars, int depositCents)
{
    dollars += depositDollars;
    cents += depositCents;
    normalizeBalance();
}

void SavingsAccount::makeWithdrawal(int withdrawalDollars, int withdrawalCents)
{
    dollars -= withdrawalDollars;
    cents -= withdrawalCents;
    normalizeBalance();
}

void SavingsAccount::showCurrentBalance()
{
    std::cout << "Current balance: $" << dollars << ".";
    if (cents < 10)
        std::cout << "0"; // Add leading zero for cents < 10
    std::cout << cents << std::endl;
}

void SavingsAccount::normalizeBalance()
{
    if (cents < 0)
    {
        dollars -= 1;
        cents += 100;
    }

    dollars += cents / 100;
    cents %= 100;
}

int main()
{
    int initialDollars, initialCents;
    std::cout << "Enter initial dollars: ";
    std::cin >> initialDollars;
    std::cout << "Enter initial cents: ";
    std::cin >> initialCents;

    SavingsAccount bank1;
    bank1.openAccount(initialDollars, initialCents);

    char depositChoice;
    do
    {
        std::cout << "Make a deposit? (y/n): ";
        std::cin >> depositChoice;

        if (depositChoice == 'y' || depositChoice == 'Y')
        {
            int depositDollars, depositCents;
            std::cout << "Enter deposit dollars: ";
            std::cin >> depositDollars;
            std::cout << "Enter deposit cents: ";
            std::cin >> depositCents;
            bank1.makeDeposit(depositDollars, depositCents);
        }
    } while (depositChoice != 'n' && depositChoice != 'N');

    char withdrawalChoice;
    do
    {
        std::cout << "Make a withdrawal? (y/n): ";
        std::cin >> withdrawalChoice;

        if (withdrawalChoice == 'y' || withdrawalChoice == 'Y')
        {
            int withdrawalDollars, withdrawalCents;
            std::cout << "Enter withdrawal dollars: ";
            std::cin >> withdrawalDollars;
            std::cout << "Enter withdrawal cents: ";
            std::cin >> withdrawalCents;
            bank1.makeWithdrawal(withdrawalDollars, withdrawalCents);
        }
    } while (withdrawalChoice != 'n' && withdrawalChoice != 'N');

    bank1.showCurrentBalance();

    return 0;
}
