#include <iostream>
using namespace std;

int main() {
    int i =1;
    int n;

    cout << "Please Enter the number n" << endl;
    cin >> n;
    // while(i <= n) {

    //     int j =1;
    //       while (j<=n)
    //       {
    //             cout << "*";
    //             j = j+1;
    //       }
          
    //     cout << endl;

    //     i = i+1;
    // }

    // while (i <=n)
    // {
    //     int j =1;
    //         while (j <= n)
    //         {
    //            cout << i ;
    //            j= j+1;
    //         }
            
    //     cout << endl;
    //     i=i+1;
    // }

    // while (i <= n)
    // {
    //     int j =1;
    //     while(j <= n)
    //     {
    //         cout << j;
    //         j= j+1;
    //     }

    //     cout << endl;

    //     i = i+1;
        
    // }


    while (i <= n)
    {
        int j=1;
        while (j <= n)
        {
            cout << (n+1)-j;

            j= j+1;
        }
        
        cout << endl;

        i = i+1;

    }
    
    
    
}