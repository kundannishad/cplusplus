#include <iostream>
using namespace std;

int main()
{

    int n, i = 1;

    cout << "Please enter the value of n =";

    cin >> n;

    while (i <= n)
    {
        // print space

        int space = n - i;

        while (space)
        {
            cout << " ";
            space = space - 1;
        }

        // Print first triangle

         int j =1;
         while (j <= i)
         {
            cout << j;
            j=j+1;
         }

         int start = i-1;

         while (start)
         {
            cout << start;
            start = start-1;
         }
         
         

        cout << endl;
        i = i + 1;
    }
}