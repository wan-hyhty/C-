//requirement: A year is a leap year if it is divisible by 4 but not by 100, or if it is divisible by 400
#include <iostream>

using namespace std;

int main(){
    int year;
    cout << "Nhap vao nam ma ban muon kiem tra: " << endl;
    cin >> year ;
    if(year % 400 == 0)
        cout << year << " la nam nhuan" << endl;
    else
        cout << year << " khong phai la nam nhuan" << endl;
}
