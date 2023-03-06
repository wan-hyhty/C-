#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    double res = 0;
    for (int i = 1; i <= n; i++)
    {
        int multi = 1;
        for (int j = 1; j <= i; j++)
        {
            multi *= j;
        }
        res += 1.00 / multi;
    }
    cout << res + 1;
}