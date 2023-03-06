#include <iostream>

using namespace std;

int main()
{
    double res;
    int count = 1;
    while (count <= 99)
    {
        res += double(count) / (count + 2);
        count += 2;
    }
    cout << res;
}