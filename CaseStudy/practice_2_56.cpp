#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 2; i <= n; i++)
    {
        int check = 0;
        for (int j = 2; j < i; j++)
            if (i % j == 0)
                check = 1;

        if (check == 0)
            while (n % i == 0)
            {
                n /= i;
                cout << i << " ";
            }
    }
}