#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

void rules()
{
    system("cls");
    cout << "\n\t==========CASINO NUMBER GUESSING RULES==========";
    cout << "\n\t1. Chose a number between 1 to 10.";
    cout << "\n\t2. Winner gets 10 times of the money bet.";
    cout << "\n\t3. Wrong bet and you lose the amount you bet.";
}

int main()
{
    string playerName;
    int balance;
    int bettingAmount;
    int guess;
    int dice;
    char choice;
    srand(time(0));

    cout << "\n\n\t==========WELCOME TO CASINO WORLD==========";
    cout << "\n\nEnter your name: ";
    getline(cin, playerName);
    cout << "Enter the starting balance to play game: ";
    cin >> balance;
    do
    {
        system("cls");
        rules();
        cout << "\n\nYour current balance is $" << balance << "\n";
        do
        {
            cout << "Hey, " << playerName << " enter the amount to bet: $ ";
            cin >> bettingAmount;
            if (bettingAmount > balance)
            {
                cout << "\nBetting amount can't be more than current balance!"
                     << "\nRe-enter balance\n";
            }
        } while (bettingAmount > balance);
        do
        {
            cout << "\nGuess any number between 1 to 10 : ";
            cin >> guess;
            if (guess <= 0 || guess > 10)
            {
                cout << "\nNumber should be in between 1 to 10!"
                     << "\nRe-enter number.";
            }
        } while (guess <= 0 || guess > 10);
        dice = rand() % 10 + 1;
        if (dice == guess)
        {
            cout << "\n\tYou are in luck! You won $ " << bettingAmount * 10;
            balance = balance + (bettingAmount * 10);
        }
        else
        {
            cout << "\n\tOops! Better luck next time! You lost $ " << bettingAmount;
            balance = balance - bettingAmount;
        }
        cout << "\nThe winning number was: " << dice << "\n";
        cout << "\n"
             << playerName << ", You have remaining balance of $ " << balance << "\n";
        if (balance == 0)
        {
            cout << "\nYou have no money to play.";
            break;
        }
        cout << "\nDo you want to play again? Enter choice 'y' or 'Y'";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "Thanks for playing the game. Your balance is $ " << balance;
    return 0;
}
