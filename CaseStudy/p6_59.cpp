#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double n;
    double mean_tu = 0;
    double dev_tu_a = 0;
    double dev_tu_b = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> n;
        mean_tu += n;
        dev_tu_a += n * n;
        dev_tu_b += n;
    }
    dev_tu_b *= dev_tu_b;
    double mean = 1.00 * mean_tu / 10;
    cout << mean << endl;
    double deviation = sqrt((dev_tu_a - dev_tu_b / 10) / (n - 1));
    cout << deviation;
}