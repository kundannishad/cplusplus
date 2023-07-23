#include <iostream>

using namespace std;

int main() {

    int totalNoOfRows,row=1;

    cout << "Please enter the value of n := ";

    cin >> totalNoOfRows;

    while (row <= totalNoOfRows)
    {
            int cols = row;

           while (cols <= totalNoOfRows)
           {
                cout << "*";

                cols = cols+1;
           }

           cout <<endl;

           row = row+1;
           
    }
    
}