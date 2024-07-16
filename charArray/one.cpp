#include <iostream>
using namespace std;

int getLenght(char arr[], int size)
{
    // int cout = 0;
    // int ind = 0;
    // while (arr[ind] != '\0')
    // {
    //     cout++;
    //     ind++;
    // }
    // return cout;
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == '\0')
        {
            break;
        }
        count++;
    }
    return count;
}

void replaceChar(char arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == '@')
        {
            arr[i] = '_';
        }
    }
}

void convertUpperToLower(char arr[], int size)
{
    int len = getLenght(arr, size);

    for (int i = 0; i < len; i++)
    {
        char ch = arr[i];
        ch = ch - 'A' + 'a';
        arr[i] = ch;
    }
}

void reverseAray(char arr[], int size)
{
    int s = 0;
    int n = getLenght(arr, size);
    int e = n - 1;
    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

int main()
{

    // problem 4
    char arr[100];
    cout << "enter name: ";
    cin >> arr;
    reverseAray(arr, 100);
    cout << "the reverse arr:" << arr << " ";
    // // proble 3 Convert upper to lower case

    // char arr[100];
    // cout << "enter input in uppercase :  ";
    // cin.getline(arr, 100, '\t');
    // convertUpperToLower(arr, 100);
    // cout << arr;

    // char arr[100];
    // cin.getline(arr, 100, '\t');

    // problem 1 find lennght of char array
    //  cout << getLenght(arr, 100) << endl;

    // problem 2 replace character

    // char arr[100];
    // cout << "enter name : ";
    // cin.getline(arr, 100, '\t');
    // replaceChar(arr, 100);
    // cout << arr;
    // char arr[100];

    // cout << "enter your name :";
    // // cin >> arr;
    // cin.getline(arr,100);
    // cout<<arr;

    // char arr[100];

    // cout<<"enter your name: ";
    // cin.getline(arr,100,'h');
    // cout<<arr;

    // int cout=0;
}