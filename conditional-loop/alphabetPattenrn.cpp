#include <iostream>

using namespace std;

int main()
{

    /*
        AAAA
        BBBB
        CCCC
        DDDD
    */

    /*
     int i=1,n;

     cout << "Enter the value of n";

     cin >> n;

     while (i <= n)
     {
         int j = 1;

         while (j <= n)
         {
             char ch = 'A' + (i -1);
             cout << ch;
             j= j+1;
         }

         cout <<endl;

         i =i+1;

     }

    */

    /*
    A
    B B
    C C C
    D D D D
    E E E E E
    */

    /*

     int row=1, totalRows;
     cout << "Please enter the rows:";

     cin >> totalRows;
     while (row <= totalRows)
     {
             int col =1;
             while (col <= row)
             {
                 char ch = 'A' + row -1;
                 cout << ch << " ";
                 col = col+1;
             }
             cout <<endl;

         row = row+1;
     }
    */

    /*
      ABC
      ABC
      ABC
    */

    /*
    int totalRows,rows=1;

    cout << "Please Enter the value of total rows:=";

    cin >> totalRows;

    while (rows <= totalRows)
    {
         int columns =1;
          while(columns <= totalRows) {
            char ch = 'A' + columns -1;
            cout << ch ;

            columns = columns+1;

          }

          cout <<endl;
          rows = rows+1;
    }
    */

    /*
 A B C
 D E F
 G H I */

    /*
        int totalRows, rows = 1;

        cout << "Please enter total rows =";

        cin >> totalRows;
        char start = 1;

        while (rows <= totalRows)
        {
            int cols = 1;
            while (cols <= totalRows)
            {
                char letter = 'A' + (start - 1);
                cout << letter << " ";
                start = start + 1;
                cols = cols + 1;
            }

            cout << endl;

            rows = rows + 1;
        }

        */

    // int totalRows, rows = 1;

    // cout << "Please Enter Rows := ";

    // cin >> totalRows;
    // while (rows <= totalRows)
    // {
    //     int cols = 1;

    //     while (cols <= totalRows)
    //     {
    //         char ch = 'A' + rows + (cols - 2);
    //         cout << ch;
    //         cols = cols + 1;
    //     }

    //     cout << endl;

    //     rows = rows + 1;
    // }


   /*
    A
    BB
    CCC
    DDDD
   */

   /*
   
    int n, i=1;

    cout << "Please enter the value of n";

    cin >> n;

    while(i <= n) {

         int j =1;
         while (j <= i)
         {
            char ch = 'A' + i-1;
            cout << ch;
            j =j+1;
         }

         cout << endl;
         i = i+1;
         
    }
   */


/*
A
BC
CDE
DEFG
*/

/*



  int i=1,n;

  cout << "Please enter the value of n" ;

  cin >> n;

  int start = 1;

    while (i <= n)
    {
        int j =1;

        while (j <= i)
        {
            char ch = 'A' +i+j-2;

            cout << ch;

            start = start +1;
            j = j+1;
        }

        cout << endl;

        i =i+1;
        
    }
    */

   
   int n;

   cout << "Please enter the value of n";

   cin >> n;

    int row = 1;

    while (row <= n) 
    {
         int column = 1;

         char start = 'A' +n -row;

         while (column <= row)
         {
            cout << start;

            start = start +1;
            column=column+1;
         }

         cout << endl;

         row = row +1;
         
    }
    


    
}