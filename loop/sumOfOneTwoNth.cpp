#include<iostream>
using namespace std;


int main() {

    int i =1;
    int sum =0;

    int n;

    cout << "Please entre nth term :=" ;

    cin >> n;

    while (i<=n)
    {
        sum = sum+i;
        i = i+1;
    }

    cout << "Sum of nth number =" << sum << endl;
    
}