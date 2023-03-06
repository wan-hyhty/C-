#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int j = i;
        while (j >= 1)
            cout << j-- << ' ';
        j = 2;
        while (j <= i)
            cout
                << j++ << ' ';
        cout << endl;
    }
}