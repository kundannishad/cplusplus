#include <iostream>

#include<math.h>
using namespace std;

int main() {

int number;

int ans = 0;
int i =0;

cin >> number;

    while(number != 0) {

        int digit = number % 10;

        if (digit == 1) {
            ans = ans + pow(2,i);
        }

        number = number/ 10;

        i++;
    }

    cout << ans <<endl;

}