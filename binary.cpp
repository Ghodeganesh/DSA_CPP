#include <iostream>
// #include <cmath>
using namespace std;

int decimalToBinary(int n)
{
  int i = 1;
  int binaryno = 0;
  while (n > 0)
  {
    int bit = n % 2;
    binaryno = bit *i + binaryno;
    n = n / 2;
    i=i*10;
  }
  return binaryno;
}

int main()
{
  cout << "Hello";
  int n;
  cout << "Enter N: ";
  cin >> n;
  int final = decimalToBinary(n);
  cout << final;
}