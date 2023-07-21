#include <iostream>;
using namespace std;

//Arithmetic operators are used to perform common mathematical operations.


int main() {

int x,y,z;
  x = 340;
  x+= 50;

  y= 234;

  int Addition = x+y;

  int Subtraction = x - y;

  int Multiplication = x * y;

  float Division = x/y;

  int Modulus = x%y;

  ++ y;

  --x;


  cout << "Addition of two no is:" << Addition << endl;

  cout << "Subtraction of two no is :" << Subtraction << endl;

  cout << "Multiplication of two no is:" << Multiplication << endl;

  cout << "Division of two no is :" << Division << endl;

  cout << "Returns the division remainder	" << Modulus << endl;

  cout << "Increases the value of a variable by 1	" <<  y << endl;

  cout << "Decreases the value of a variable by 1	" << x << endl;





    
}