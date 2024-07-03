#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<int, int> table;

    table[0] = 10;
    table[1] = 11;
    table[2] = 12;
    table[3] = 13;
    table[4] = 14;
    table[2] = 20;

    unordered_map<int, int>::iterator it;

    for (it = table.begin(); it != table.end(); it++)
    {
        int key = it->first;
        int value = it->second;

        cout << "the key : " << key << " " << "the value: " << value << " " << endl;
    }
    cout << "before : " << endl;
    if (table.find(3) != table.end())
    {
        int val = table[3];
        cout << "the value: " << val << endl;
    }
    else
    {
        cout << "value not found";
    }

    // cout << endl;
    cout << "after: ";
    table.erase(3);
    for (it = table.begin(); it != table.end(); it++)
    {
        int key = it->first;
        int value = it->second;

        cout << "the key  : " << key << " " << "the value: " << value << " " << endl;
    }
    if (table.find(3) != table.end())
    {
        int val = table[3];
        cout << "the value at:git3 " << val << endl;
    }
    else
    {
        cout << "value not found";
    }
}