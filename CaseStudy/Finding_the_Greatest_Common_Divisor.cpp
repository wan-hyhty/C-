#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    int num1, num2;
    cout << "nhap 2 so: " << endl;
    cin >> num1 >> num2;

    int i = 1, max_i = 0;
    while (i <= num1 || i <= num2)
    {
        if (num1 % i == 0 && num2 % i == 0 && i > max_i)
            max_i = i;
        i++;
    }
    cout << "uoc chung lon nhat cua " << num1 << " va " << num2 << " la: " << max_i;
}