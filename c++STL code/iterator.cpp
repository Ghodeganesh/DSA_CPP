#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main()
{

    // vector<int> arr;

    // arr.push_back(12);
    // arr.push_back(13);
    // arr.push_back(14);
    // arr.push_back(15);
    // arr.push_back(17);

    // vector<int>::iterator it = arr.begin();

    // while (it != arr.end())
    // {
    //     cout << *it << " ";
    //     it++;
    // }
    // for(int it:arr){
    //     cout<<it<<" ";
    // }

    // list<int> myList;

    // myList.push_front(10);
    // myList.push_front(1023);
    // myList.push_front(130);
    // myList.push_front(140);

    // list<int>::iterator it = myList.begin();
    // while (it != myList.end())
    // {
    //     /* code */
    //     (*it) = (*it) + 2;
    //     cout << *it << " ";
    //     it++;
    // }

    // list<int> myList;

    // myList.push_front(1);
    // myList.push_front(2);
    // myList.push_front(3);
    // myList.push_front(4);

    // list<int>::iterator it = myList.end();
    // while (it != myList.begin())
    // {
    //     /* code */
    //     // (*it) = (*it) + 2;
    //     cout << *it << " ";
    //     it--;
    // }

    vector<int> arr;

    arr.push_back(12);
    arr.push_back(13);
    arr.push_back(14);
    arr.push_back(15);
    arr.push_back(17);
    cout << "forward : ";
    for (int it : arr)
    {
        cout << it << " ";
    }
    cout<<endl;

    vector<int>::iterator it = arr.end();
    cout << "forward : ";

    while (it != arr.begin())
    {
        cout << *it << " ";
        it--;
    }
}