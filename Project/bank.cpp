#include <iostream>
using namespace std;
#define e endl
#define c cout
int choicee, i, wd;
int amount = 100, cash;
class Bank
{
private:
    int total;
    string id;
    struct person
    {
        string name, ID, card;
        int cash, contact;
    } person[100];

public:
    Bank()
    {
        total = 0;
    }
    void choice();
    void create_acc();
    void display_info();
    void view_acc();
    void update_acc();
    void delete_acc();
    void transaction();
};
int main()
{
    system("cls");
    Bank b;
    b.choice();
    return 0;
}
void Bank::choice()
{
    // while(1){
    c << "\t\t---------------------Welcome to M1 Bank---------------------" << e;
    c << "\t\tPlease Choose you desire choice" << e;
    c << "1. Create an Account" << e;
    c << "2. View your account" << e;
    c << "3. Update your existing account" << e;
    c << "4. View transaction" << e;
    c << "5. Delete your account" << e;
    c << "6. Exit" << e;
    cin >> choicee;
    switch (choicee)
    {
    case '1':
        Bank::create_acc();
        Bank::display_info();
        break;
    case '2':
        c << "Please enter your account's ID: " << e;
        cin >> id;
        if (total == 0)
        {
            c << "No record" << e;
        }
        else
        {
            Bank::view_acc();
        }
        break;
    case '3':
        if (total == 0)
        {
            c << "No record" << e;
        }
        else
        {
            Bank::update_acc();
        }
        break;
    case '4':
        if (total == 0)
        {
            c << "No record" << e;
        }
        else
        {
            Bank::transaction();
        }
        break;
    case '5':
        if (total == 0)
        {
            c << "No record" << e;
        }
        else
        {
            Bank::delete_acc();
        }
        break;
    case '6':
        if (total == 0)
        {
            c << "No record" << e;
        }
        else
        {
            exit(0);
        }
        break;
    }
    //}
}
void Bank::create_acc()
{
    c << "\t\tSign Up" << e;
    c << "Please enter your fullname: " << e;
    cin >> person[total].name;
    c << "Please enter your contact: " << e;
    cin >> person[total].contact;
    c << "Please enter your ID: " << e;
    cin >> person[total].ID;
    c << "Please enter your prefered card type: " << e;
    cin >> person[total].card;
    total++;
}
void Bank::display_info()
{
    for (int i = 0; i < total; i++)
    {
        c << "Your name is : " << person[i].name << e;
        c << "Your contact is : " << person[i].contact << e;
        c << "Your ID id : " << person[i].ID << e;
        c << "Your card type : " << person[i].card;
        c << "Your current cash : " << amount << e;
    }
}
void Bank::update_acc()
{
    c << "Please enter your ID : " << e;
    cin >> id;
    if (id == person[i].ID)
    {
        c << "Your previous Information :" << e;
        c << "Your name is : " << person[i].name << e;
        c << "Your contact is : " << person[i].contact << e;
        c << "Your ID id : " << person[i].ID << e;
        c << "Your card type : " << person[i].card;
        c << "Please enter your new Information : " << e;
        c << "Please enter your new name: " << e;
        cin >> person[total].name;
        c << "Please enter your new contact: " << e;
        cin >> person[total].contact;
        c << "Please enter your new ID: " << e;
        cin >> person[total].ID;
        c << "Please enter your prefered card type: " << e;
        cin >> person[total].card;
    }
    else
    {
        c << "No record" << e;
    }
}
void Bank::transaction()
{
    for (int i = 0; i < total; i++)
    {
        c << "Please enter your ID" << e;
        cin >> id;
        if (id == person[i].ID)
        {
            c << "Your name is : " << person[i].name << e;
            c << "Your contact is : " << person[i].contact << e;
            c << "Your ID id : " << person[i].ID << e;
            c << "Your card type : " << person[i].card;
            c << "Your current cash : " << amount << e;
            c << "Please choose your option : " << e;
            c << "1. Deposit" << e;
            c << "2. Withdraw" << e;
            cin >> wd;
            switch (wd)
            {
            case '1':
                c << "Please enter amount you want to deposit : $";
                cin >> cash;
                person[i].cash = amount + cash;
                c << "Your name is : " << person[i].name << e;
                c << "Your contact is : " << person[i].contact << e;
                c << "Your ID id : " << person[i].ID << e;
                c << "Your card type : " << person[i].card;
                c << "Your new cash : $ " << person[i].cash;
                break;
            case '2':
            again:
                c << "Please enter amount you want to withdraw : $";
                cin >> cash;
                if (cash > person[i].cash)
                {
                    c << "You don't have enough cash to do this transaction!\n Please try again:" << e;
                    goto again;
                }
                else
                {
                    person[i].cash = amount - cash;
                    c << "Your name is : " << person[i].name << e;
                    c << "Your contact is : " << person[i].contact << e;
                    c << "Your ID id : " << person[i].ID << e;
                    c << "Your card type : " << person[i].card;
                    c << "Your new cash : $ " << person[i].cash << e;
                }
                break;
            }
        }
    }
}
void Bank::delete_acc()
{
    total = 0;
    c << "All your record have been deleted" << e;
}
