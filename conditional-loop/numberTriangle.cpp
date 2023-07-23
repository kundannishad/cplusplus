#include <iostream>

using namespace std;

int main()
{

    /*
        1
        22
        333
        4444
        55555
    */
    /*
     int n,row=1;
     cin >> n;

     while (row <= n)
     {
         int column=1;
         while (column <= row)
         {
             cout << row ;
             column = column+1;
         }
         cout  << endl;
         row = row+1;
     }
     */

    /*
        1
        2 3
        4 5 6
        7 8 9 10
        11 12 13 14 15
    */

    /*
      int totalRows, row = 1;
     int count = 1;

     cout << "Enter total no of rows = ";

     cin >> totalRows;

     while (row <= totalRows)
     {
         int column = 1;

         while (column <= row)
         {
             cout << count << " ";
             count = count+1;
             column = column + 1;
         }

         cout << endl;
         row = row + 1;
     }
    */

    /*
      1
      23
      345
      4567
      56789
    */

    /*
     int totalRows, row = 1;

     cout << "Please enter the total rows := ";
     cin >> totalRows;
     while (row <= totalRows)
     {
         int column = 1;
         int countable = row;

         while (column <= row)
         {
             cout << countable;
             countable = countable + 1;
             column = column + 1;
         }

         cout << endl;

         row = row + 1;
     }

     */

    // Numbers Pyramid Pattern without Reassigning

    /*
     1
     23
     345
     4567
     56789
    */

    /*
        int rows=1,totalRows;


        cout << "Please Enter the total no Of rows := ";

        cin >> totalRows;

        while (rows <=  totalRows)
        {
            int cols = 0;

             while (cols < rows)
             {
                cout << rows +cols;

                cols = cols+1;

             }

             cout << endl;

             rows = rows+1;

        }
        */


/*

    1
    21
    321
    4321
    54321
*/
       int rows=1,totalRows;

       cout << "Please enter the total rows := ";

       cin >> totalRows;

       while (rows <= totalRows) 
       {
            int column =1;
             while (column <= rows)
             {
                cout << rows - column +1 << " "  ;
                column = column + 1;
             }

             cout <<endl;

             rows = rows+1;
             
            
       }
       
}