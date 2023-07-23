#include<iostream>

using namespace std;

int main() {


    /*
        *****
        ****
        ***
        **
        *
    */

/*
    int n,i=1;

    cout << "Please enter the value of n :=";

    cin >> n;
    while (i <= n)
    {
        /* print white space 

        int space = i-1;
           while (space)
           {
              cout << " ";
              space = space-1;
           }

           int j =i;

           while (j <= n)
           {
                cout << "*";

                j = j+1;
           }

           cout << endl;

           i = i+1;
           
           
    }
    */


   int i=1,n;

   cin >> n;

   while (i <= n)
   {
        // Print White space

        int space = i-1;

        while (space)
        {
            cout << " ";
            space = space-1;
        }

        // Print Star

        int j=i;

        while (j <= n)
        {
            cout << i;

            j= j+1;
        }

        cout <<endl;

        i = i+1;
        
        
   }
   
}