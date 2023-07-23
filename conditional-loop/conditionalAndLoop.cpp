#include <iostream>
using namespace std;

int main()
{
    /*
      int a = 10;
     if(a == 10) {
         cout << "Nine" <<endl;
     }

     if(a > 0) {
         cout << "A is positive" << endl;
     }
     else {
                 cout << "A is negative" << endl;

     }
    */

    //   int a =12;
    //   int b = a+1;

    //   if((a==13) == b) {
    //     cout << a << endl;
    //   } else {
    //     cout <<  a+1 << endl;
    //   }

    char ch;

    cout << "Please enter the keyword" << endl;

    cin >> ch;
    cout << "Entered Keyword is" << ch << endl;

    if (ch >= 65 && ch <= 90)
    {

        cout << ch << " Is Upper Case " << endl;
    }
    else if (ch >= 97 && ch <= 122)
    {
        cout << ch << "  Is Lower Case" << endl;
    }
    else
    {
        cout << "This Is number case" << ch << endl;
    }
}