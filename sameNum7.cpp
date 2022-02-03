#include <iostream>
using namespace std;
main()
{
    int num1, num2, num3, count;
    cout << "Enter integer 1...";
    cin >> num1;
    cout << "Enter integer 2...";
    cin >> num2;
    cout << "Enter integer 3...";
    cin >> num3;
    if (num1 == num2 && num1 == num3)
    {
        count = 3;
    }
    else if (num1 == num2 || num1 == num3 || num2 == num3)
    {
        count = 2;
    }
    else
    {
        count = 0;
    }

    cout << count;
}