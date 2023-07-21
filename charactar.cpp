#include <iostream>;
using namespace std;

int main()
{
    char Charater;

    cout << "Please Type character := ";

    cin >> Charater;

    if (Charater >= 97 && Charater <= 122)
    {
        cout << Charater << " Charater is Lower case" << endl;
    }
    else if (Charater >= 65 && Charater <= 90)
    {
        cout << Charater << " Charater is Upper case" << endl;
    }
    else if (Charater >= 48 && Charater <= 57)
    {
        cout << Charater << " Charater is lowe case" << endl;
    }
    else
    {
        cout << Charater << " Charater Special Case" << endl;
    }
}