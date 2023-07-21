#include <iostream>
using namespace std;

int main()
{
    int wholeNumbers = 10; // int - stores integers (whole numbers), without decimals, such as 123 or -123

    double floatingPointNumbers = 1023.23; // double - stores floating point numbers, with decimals, such as 19.99 or -19.99

    char singleCharacterString = 'a'; // char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes

    string storeSomeText = "Hello Friends how are you";

    bool boolDatatype = false; // stores values with two states: true or false

    cout << "The Whole no is := " << wholeNumbers << endl;

    cout << "The double data type variable is :=" << floatingPointNumbers << endl;

    cout << "The single character data type is := " << singleCharacterString << endl;

    cout << "String values are surrounded by double quotes \n"
         << storeSomeText << endl;

    cout << "this data type store boolean value :  " << boolDatatype << endl;
}