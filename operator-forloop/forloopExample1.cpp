#include <iostream>

using namespace std;

int main() {

    //Fabanicciseries print

    int a =0;
    int b =1;

    int n=10;

    cout << a << endl << b  <<endl;

    for(int i =0; i<= n; i++) {

        int nextNumber = a+b;

        cout << nextNumber << "=" << i <<endl;

        a = b;

        b = nextNumber;
    }
}