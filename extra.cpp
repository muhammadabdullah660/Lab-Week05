#include <iostream>
using namespace std;
main()
{
    float num1, num2, num3, count;
    cout << "Enter number 1...";
    cin >> num1;
    cout << "Enter number 2...";
    cin >> num2;
    cout << "Enter number 3...";
    cin >> num3;
    if (num1 < num2 && num1 < num3)
    {
        cout << num1 << " is smallest" << endl;
    }
    else if (num1 < num2 || num1 < num3)
    {
        cout << num1 << " is small" << endl;
    }
    if (num2 < num1 && num2 < num3)
    {
        cout << num2 << " is smallest" << endl;
    }
    else if (num2 < num1 || num2 < num3)
    {
        cout << num2 << " is small" << endl;
    }
    if (num3 < num1 && num3 < num2)
    {
        cout << num3 << " is smallest" << endl;
    }
    else if (num3 < num1 || num3 < num2)
    {
        cout << num3 << " is small" << endl;
    }
}
