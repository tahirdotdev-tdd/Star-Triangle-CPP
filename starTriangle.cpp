#include <iostream>

using namespace std;

int main()
{

    int n; // number of cols
    cout << "Enter the side of square : ";
    cin >> n;

    for (int i = 1; i <= n; i++) // for number of rows
    {
        for (int j = 1; j <= i; j++) // for number of columns
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}