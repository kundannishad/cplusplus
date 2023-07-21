#include <iostream>;
using namespace std;

int main()
{
    int x, y;

    cout << "type a Number: ";
    cin >> x;

    cout << "Type another Number: ";

    cin >> y;

    int add, subtract, multiply;

    add = x + y;
    subtract = x - y;
    multiply = x * y;

    cout << "Addition You Number is :" << add << endl;

    cout << "Subtract of you Number is:" << subtract << endl;

    cout << "Multiply of your number is:=" << multiply << endl;
}