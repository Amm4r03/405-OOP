#include <iostream>
#include <cstring>

using namespace std;

class account
{
    int balance;
    public:
    string name;
    int acc;
    char type;

    void getData(int amt, const string& acname, char aType, int accNum)
    {
        balance = amt;
        name = acname;
        acc = accNum;
        type = aType;
    }

    void deposit(int amt)
    {
        balance += amt;
        printf("\ndeposited %d INR successfully\nCurrent balance : %d\n", amt, balance);
    }

    void withdraw(int request)
    {
        if (balance + 500 <= request)
        {
            cout << "\ninvalid request, please try again\n";
        }
        else{
            balance -= request;
            cout << "\nwithdrawn " << request << "INR\ncurrent balance : " << balance << "INR\n";
        }
    }

    void display(void)
    {
        cout << "\nYOUR DETAILS\n";
        cout << "NAME : " << name << '\n';
        cout << "ACC NUMBER : " << acc << '\n';
        cout << "ACCOUNT TYPE : " << type << '\n';
        cout << "CURRENT BALANCE : " << balance << '\n';
    }
};

int main()
{
    account a1;
    a1.getData(4000, "Ammar Ahmad Kidwai", 'S', 102911);
    a1.deposit(200);
    a1.display();

    a1.withdraw(5000);

    a1.withdraw(2500);

    a1.display();
    return 0;
}