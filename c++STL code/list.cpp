#include <iostream>
#include <list>
using namespace std;

int main()
{

    list<int> myList;

    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);
    myList.push_back(40);

    for (int it : myList)
    {
        cout << it << " ";
    }
    myList.push_front(100);
    myList.pop_back();
    cout << endl;
    cout <<"the size: "<< myList.size();
    cout << endl;

    for (int it : myList)
    {
        cout << it << " ";
    }
    cout << endl;

    cout << "front element: " << myList.front() << endl;
    cout << "back element: " << myList.back() << endl;

    //    myList.clear();
    // if (myList.empty() == true)
    // {
    //     cout << "list is Empty";
    // }else{
    // cout << "list is not Empty";}

    // return 0;
}