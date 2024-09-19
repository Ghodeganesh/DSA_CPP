#include <iostream>
#include <math.h>
using namespace std;

// bool checkPal(string str, int start, int end)
// {
//     if (str[start] > str[end])
//     {
//         return 1;
//     }
//     if (str[start] != str[end])
//     {
//         return 0;
//     }
//     else
//         return checkPal(str, start + 1, end - 1);
// }

// int count(string str, int index)
// {
//     if (index == -1)
//     {
//         return 0;
//     }
//     if (str[index] == 'a' || str[index] == 'e' || str[index] == 'i' || str[index] == 'o' || str[index] == 'u')
//     {
//         return 1 + count(str, index - 1);
//     }
//     else
//     {
//         return count(str, index - 1);
//     }
// }

// void rev(string &str, int start, int end)
// {
//     if (start >= end)
//     {
//         return;
//     }
//     char c = str[start];
//     str[start] = str[end];
//     str[end] = c;

//     rev(str,start+1,end-1);
// }
void lowToUpperCase(string &str, int index)
{
    if (index == -1)
        return;
    str[index] = 'A' + str[index] - 'a';
    lowToUpperCase(str, index - 1);
}

int main()
{
    string name;
    cout << "enter a number: " << endl;
    cin >> name;

    // cout << checkPal(name, 0, 4);
    //  cout << count(name,4);

    // rev(name, 0, 5);
    // cout << name;

    lowToUpperCase(name, 5);
    cout << name;
}