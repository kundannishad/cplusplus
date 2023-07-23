#include <iostream>

using namespace std;

int main() {

    int totalRowsNo,rows=1;

    cout << "Please enter the total no of rows:=";

    cin >> totalRowsNo;

    while (rows <= totalRowsNo)
    {
        /* Print space */
           int space = totalRowsNo -rows;
           while (space)
           {
                cout << " ";
                space = space-1;
           }

           /* Print Star*/
           int cols = 1;
            while (cols <= rows)
            {
                cout << "*";
                cols = cols+1;
            }
            
            cout <<endl;
            rows =rows+1;
    }
    
}