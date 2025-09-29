#include <iostream>
using namespace std;

void invertedM(int n)
{
    for (int i = 0; i <= n; i++)
    {
        // Left stars
        for (int j = n; j > i; j--)
            cout << "*";

        // ❌ removed spaces in middle

        // Right stars
        for (int j = n; j > i; j--)
            cout << "*";

        cout << endl;
    }
}

void M(int n)
{
    for (int i = 0; i < n; i++)
    {
        // Left stars
        for (int j = 0; j <= i; j++)
            cout << "*";

        // ❌ removed spaces in middle

        // Right stars
        for (int j = i; j >= 0; j--)
            cout << "*";

        cout << endl;
    }
}

void filledDiamond(int n)
{
    invertedM(n);
    M(n);
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    filledDiamond(n);
    return 0;
}
