#include <iostream>
using namespace std;

int main()
{

    /*
    1234554321
    1234**4321
    123****321
    12******21
    1********1
    */
    int n;
    int i = 1;

    cout << "Please enter value of n =";

    cin >> n;

    while (i <= n)
    {
        int firstTriangle = n - i + 1;
        int count = 1;

        // Print First Triangle

        while (firstTriangle)
        {
            cout << count;
            count = count + 1;
            firstTriangle = firstTriangle - 1;
        }

        // Print Space

        // int j = n-i;
        //  while (j)
        //  {
        //    cout << " ";
        //    j = j-1;
        //  }

        // Print Star

        int k = 1;
        while (k < i)
        {
            cout << "*";
            k = k + 1;
        }

        int l = 1;

        while (l < i)
        {
            cout << "*";
            l = l + 1;
        }

        int thirdTriangle = n - i + 1;
        while (thirdTriangle)
        {
            cout << thirdTriangle;
            thirdTriangle = thirdTriangle - 1;
        }

        cout << endl;

        i = i + 1;
    }
}