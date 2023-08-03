#include <iostream>
#include<math.h>
using namespace std;

int main() {

    //Decimal To binary Representation

    int i=0;
    int n, ans =0;
    

    cout << "Please enter the value n =";
    cin >> n;
     while (n != 0)
     {
        int bit = n &1;
        ans = (bit * pow(10,i)) +ans;
        n = n >> 1;
        i++;
     }
     
     cout << ans;

    return 0;
}