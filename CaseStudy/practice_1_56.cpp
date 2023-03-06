#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int prime = 2;
    int count = 0;
    for (int i = 2; i <= n; i++)
    {
        int check = 0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
                check = 1;
        }
        if (check != 1)
        {
            cout << i << " ";
            count++;
            if (count % 10 == 0)
                cout << endl;
        }
    }
}