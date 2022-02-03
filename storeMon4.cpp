#include <iostream>
using namespace std;
main()
{
    float pAmt;
    string day, month;
    cout << "Enter name of the day...";
    cin >> day;
    cout << "Enter name of the month...";
    cin >> month;
    cout << "Enter total purchase amount...";
    cin >> pAmt;

    if (day == "Sunday" && (month == "October" || month == "March" || month == "August"))
    {
        float payAmt;
        payAmt = pAmt - (pAmt * 0.1);
        cout << "Total Payable Amount is :- " << payAmt;
    }
    else if (day == "Monday" && (month == "November" || month == "December"))
    {
        float payAmt;
        payAmt = pAmt - (pAmt * 0.05);
        cout << "Total Payable Amount is :- " << payAmt;
    }
}