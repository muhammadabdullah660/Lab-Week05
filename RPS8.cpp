#include <iostream>
using namespace std;
main()
{
    string p1, p2;
    cout << "Enter input of player 1...";
    cin >> p1;
    cout << "Enter input of player 2...";
    cin >> p2;

    if (p1 == p2)
    {
        cout << "Its a draw";
    }
    else if (p1 == "Rock" && p2 == "Scissors")
    {
        cout << "Player 1 wins";
    }
    else if (p1 == "Scissors" && p2 == "Rock")
    {
        cout << "Player 2 wins";
    }
    else if (p1 == "Scissors" && p2 == "Paper")
    {
        cout << "Player 1 wins";
    }
    else if (p1 == "Paper" && p2 == "Scissors")
    {
        cout << "Player 2 wins";
    }
    else if (p1 == "Paper" && p2 == "Rock")
    {
        cout << "Player 1 wins";
    }
    else if (p1 == "Rock" && p2 == "Paper")
    {
        cout << "Player 2 wins";
    }
}
