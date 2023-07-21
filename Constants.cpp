#include <iostream>
using namespace std;

int main()
{
    const int number = 10;
    cout << "The const value never change " << number << endl;

    const int minutesPerHour = 60;

    const double PI = 3.14;

    cout << "According to time 1 hour equal to 60 minutes " << minutesPerHour << endl;

    cout << " The value of pi is never changed : " << PI << endl;

    return 0;
}