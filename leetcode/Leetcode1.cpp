#include <iostream>

using namespace std;

int main() {

    // Some Of digit and multiply of digit output product-some


    // int sum =0;
    // int product =1;
    // int n;

    // cout << "Please enter the value n:=";
    // cin >> n;

    // while (n != 0)
    // {
    //      int digit = n%10;
    //      product = product *digit;

    //      sum = sum +digit;

    //      n = n/10;
    // }

    // int answer = product - sum;

    // cout << answer;
    

//     int n;

// int product =1;
// int sum =0;
//     cout << "Please Enter the value n =";

//     cin >> n;

//     for(int i=0; i<3; i++) {

//         int digit = n%10;
//         product = product * digit;
//         sum = sum +digit;
//     }

//     int result = product -sum;

//     cout << result <<endl;

        int product=1,sum =0,number;

        cout << "Please Enter the value of n";

        cin >> number;

        while (number !=0)
        {
            int digit = number%10;
            product = product * digit;
            sum = sum+digit;
            number = number/10;
        }
        
    int result = product -sum;


    cout << result ;


}