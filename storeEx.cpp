#include <iostream>
using namespace std;
main()
{
    float pAmt;
    string day;
    cout << "Enter name of the day...";
    cin >> day;

    cout << "Enter total purchase amount...";
    cin >> pAmt;

    if (day == "Sunday" && pAmt >= 5000)
    {
        float payAmt;
        payAmt = pAmt - (pAmt * 0.1);
        cout << "Total Payable Amount is :- " << payAmt;
    }
    else if (day != "Sunday" && pAmt >= 5000)
    {
        float payAmt;
        payAmt = pAmt - (pAmt * 0.05);
        cout << "Total Payable Amount is :- " << payAmt;
    }
}