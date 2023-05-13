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
// x used to covert back to int form.
int x;

int main()
{
    //You have $10
    //change the balance to receive diffrent money change
    balance = 10;
    //dollar/coin variables
    dollars = 0;
    quarters = 0;
    dimes = 0;
    nickles = 0;
    pennies = 0;
    
    for (int i = 0; i < 5; i++)
    {
        price[i];
        change = balance - price[i];
        //x = the total change without it being in decimal form(0.00)
        x = change*100;

        cout <<"You bought a: "<< ItemNames[i] << endl;
        cout << "Which costed: " << price[i] << endl;
        cout << "You payed with: " << balance << endl;
        cout << "Your change total is: " << change << endl;
        cout << "----------------------------" << endl;

        //NOTE: Cant use a double, or float variable with the % operator 

        cout << "Here is your change in: " << endl;
        cout << dollars << x/100 << " Dollars" << endl;
        //calculate remiander after dollars
        x = x%100;
        cout << quarters << x/25 << " Quarters" << endl;
        ////calculate remiander after quarters
        x = x%25;
        cout << dimes << x/10 << " Dimes" << endl;
        //calculate remiander after dimes
        x = x%10;
        cout << nickles << x/5 << " Nickles" << endl;
        //calculate remiander after nickles
        x = x%5;
        cout << pennies << x/1 <<" Pennies" << endl;
        cout << "--------------------------" << endl;
        cout << "--------------------------" << endl;
    }
}