#include <iostream>
using namespace std;
main()
{
    int tax, weight, amt, diff;
    string ticket;
    cout << "Enter ticket class...";
    cin >> ticket;
    cout << "Enter weight of luggage...";
    cin >> weight;

    if (weight <= 40 && ticket == "Business")
    {
        amt = 15000;
        cout << "Total Amount is :- " << amt;
    }
    else if (weight >= 40 && ticket == "Business")
    {
        diff = weight - 40;
        amt = (diff * 1000) + 15000;
        cout << "Total Amount is :- " << amt;
    }

    if (weight <= 25 && ticket == "Economy")
    {
        amt = 8000;
        cout << "Total Amount is :- " << amt;
    }
    else if (weight >= 25 && ticket == "Economy")
    {
        diff = weight - 25;
        amt = (diff * 500) + 8000;
        cout << "Total Amount is :- " << amt;
    }
}