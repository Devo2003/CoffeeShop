#include <iostream>
#include <vector>
#include <string>
using namespace std;



const string ItemNames[5] = {"Expresso", "Mocha", "Americano", "Latte", "Tea" };
double prices[5] = {2.45, 5.66, 7.24, 3.99, 4.44};

int balance;
int dollars;
int quarters;
int dimes;
int nickles;
int pennies;

int main()
{
    

    cout << ItemNames[1] << std::endl;


    //10 bucks 
    balance = 10;
    //coin variables
    dollars = 0;
    quarters = 0;
    dimes = 0;
    nickles = 0;
    pennies = 0;

    



    cout << balance - prices[1] << endl;

    

    cout << "Here is your change in: " << endl;
    //cout << dollars << " Dollars" << endl;
    //cout << quarters << " Quarters" << endl;
    //cout << dimes << " Dimes" << endl;
    //cout << nickles << " Nickles" << endl;
    //cout << pennies << " Pennies" << endl;
    




}