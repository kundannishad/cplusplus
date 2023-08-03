#include <iostream>

using namespace std;

int main()
{

    // Prime Or not

    int n;

    cout << "Please give no =";

    cin >> n;

    bool isPrime = true;
    for (int i = 2; i < n; i++)
    {

        if (n%i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime == true)
    {

        cout << "Given No is prime";
    }
    else
    {

        cout << "given no is not a prime";
    }
}