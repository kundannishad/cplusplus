#include <iostream>
using namespace std;

int main()
{

    // int n;
    // int i = 1;
    // int sum =0;

    // cout << "Please enter the value of n" << endl;

    // cin >> n;

    /*
    Print N Integer numbers
     while(i <= n) {

         cout << i << endl;
         i = i+1;
     }

    */
    /*
     ==> Sum of n integer numbers

    while (i <= n)
    {
      sum = sum+i;
      i = i+1;
    }

    cout << "sum of n number is : = " << sum << endl;

     */

    //   int n;
    //   int i =2;
    //   int sum = 0;

    /*
      int n, i=2, sum =0;

      cout << "Please Enter the value of n: " << endl;

      cin >> n;

      while (i <= n)
      {
        sum = sum +i;
        i = i+2;
      }
      cout << sum; */

    // Fahrenheit to celsius

    //   double fahrenheit, celsius;
    //   cout << "Please enter fahrenheit number := " << endl;
    //   cin >> fahrenheit;
    //   celsius = (fahrenheit - 32) * 5.0 / 9.0;
    //   cout << celsius ;

    // Given number is prime or not prime

    int i = 2, n;
    cout << "Please Enter a number" << endl;

    cin >> n;

    while (i < n)
    {
        if (i %n == 0)
        {
            cout << "This number is prime " << i << endl;
        }
        else
        {
            cout << "This number is prime " << i << endl;
        }

        i = i+1;
    }
}