#include <iostream>

using namespace std;

int main()
{

    int n, row = 1;

    cin >> n;
    while (row <= n)
    {
        /* Print column */

        int cols = n - row + 1;
                int count = 1;


        while (cols)
        {
            cout << count;
            count = count+1;
            cols = cols - 1;
        }

        // Print Star

        int star = row-1;
        while(star)
        {
            if(row == 6) {
                return false;
            }
            cout << "*";
            star = star-1;
        }
        

    // Print second triangle Star

        int secondStar = row-1;
        while(secondStar)
        {
            if(row == 6) {
                return false;
            }
            cout << "*";
            secondStar = secondStar-1;
        }


            // Print second triangle Number

       
        int j = n-row+1;
       //int val = row + j -1;5
        while (j)
        {
          cout << j;
          j = j-1;
        }
        
        



        cout << endl;

        row = row + 1;
    }
}