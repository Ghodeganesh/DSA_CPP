// #include<iostream>
// using namespace std;

// int main(){
//     // string name;
//     // cout<<"enter the name: ";
//     // cin>>name;
//     // cout<<"the name is : "<<name;

//     string sentance;
//     cout<<"enter data: ";
//    getline(cin,sentance,'\n');
//    cout<<sentance;
// }

#include <iostream>
using namespace std;

// int factorial(int n)
// {

//     if (n == 0 || n == 1)
//         return 1;

//     return n * factorial(n - 1);
// }
// int fibo(int n)
// {
//     if (n <= 1)
//     {
//         return n;
//     }

//     return fibo(n - 1) + fibo(n - 2);
// }
int gcd(int n1, int n2)
{
    if (n2 == 0)
    {
        return n1;
    }
    return gcd(n2, n1 % n2);
}
int main()
{
    // cout << "hello world!" << endl;
    int num1, num2, ans;
    // numbers from 1 to n;
    cout << "enter number1: " << endl;
    cin >> num1;
    cout << "enter number2: " << endl;
    cin >> num2;
    // ans = factorial(num);
    // cout << "The factorial of " << num << " is: " << ans;

    //    ans = fibo(num);
    //     cout << "The ans:" << " " << ans << endl;

    ans = gcd(num1, num2);

    cout << "the Gcd is : " << ans << endl;
}