/*
Christian Fitzgerald
Program 41 - Squirrel Party
4/12/2017
Description: When squirrels get together for a party, they like to
have acorns. A squirrel party is successful when the number of acorns
is between 40 and 60, inclusive. Unless it is a weekend, in which case
there is no upper limit on the number of acorns.

Write a function which Returns "Successful Party" if the party was a
success, or "No Luck" otherwise.

squirrelParty(30, false) → returns "No Luck"
squirrelParty(50, false) → returns "Successful Party"
squirrelParty(70, true) → returns "Successful Party"

Sample Run:
No Luck
Successful Party
Successful Party
*/

#include <iostream>
using namespace std;

string squirrelParty (int acorns, bool isWeekend);

int main
{
   cout << squirrelParty(30, false) << endl;
   string storeString; 
   storeString = squirrelParty(50, false); // great() returns its string to the variable storeString
   cout << storeString << endl;
   cout << squirrelParty(70, true) << endl;
}

string squirrelParty (int acorns, bool isWeekend)
{
    do{
        if ((acorns < 40) && (acorns > 60))
            cout << "No luck";
        if ((acorns >= 40) && (acorns <= 60))
            cout << "Successful Party!";
    }while (isWeekend == false)
    do{
        if (acorns < 40)
            cout << "No luck";
        if (acorns > 40)
            cout << "Successful Party!";
    }while (isWeekend == true)
}

/*

*/
