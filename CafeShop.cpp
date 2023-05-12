#include <iostream>
#include <vector>
#include <string>
using namespace std;

const string ItemNames[5] = {"Expresso", "Mocha", "Americano", "Latte", "Tea" };
float price[5] = {2.45, 5.66, 7.24, 3.99, 4.44};

double change;
int balance;
int dollars;
int quarters;
int dimes;
int nickles;
int pennies;

int main()
{
    //10 bucks 
    balance = 10;
    //coin variables
    dollars = 0;
    quarters = 0;
    dimes = 0;
    nickles = 0;
    pennies = 0;
    //leftover change variable
    change = 0.00;

    for (int i = 0; i < 5; i++)
    {
        price[i];
        change = balance - price[i];
        //form = change;

        double x;
        
        cout <<"You bought a: "<< ItemNames[i] << endl;
        cout << "Which costed: " << price[i] << endl;
        cout << "You payed with: " << balance << endl;
        cout << "Your change total is: " << change << endl;
        cout << "---------------------------" << endl;

        x = change *100 ;

        cout << "Here is your change in: " << endl;
        cout << dollars << " Dollars" << endl;
        cout << quarters << x/25 << " Quarters" << endl;
        cout << dimes << x/10 << " Dimes" << endl;
        cout << nickles << x/5 << " Nickles" << endl;
        cout << pennies << x/1 <<" Pennies" << endl;
        
    }

    //cout << ((double) a / 2); // typecasting
    
    
}