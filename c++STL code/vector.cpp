#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "Stl In C++" << endl;

    vector<int> first;
    vector<int> second;

    first.push_back(10);
    first.push_back(11);
    first.push_back(12);
    first.push_back(13);
    first.pop_back();

    for (int it : first)
    {
        cout << it << " ";
    }
    cout << endl;

    second.push_back(100);
    second.push_back(110);
    second.push_back(120);
    second.push_back(130);
    second.push_back(140);
    second.push_back(150);

    second.pop_back();
    second.pop_back();

    for (int it : second)
    {
        cout << it << " ";
    }
    cout << endl;

    //   cout<< "size of first:"<<first.size()<<endl;
    //   cout<< "size of first:"<<second.size()<<endl;
    //   cout<< "capacity of first:"<<first.size()<<endl;
    //   cout<< "capacity of second:"<<second.size()<<endl;
    //   cout<< "value at 2 of first:"<<first.at(2)<<endl;
    //   cout<< "value at front first:"<<first.end()<<endl;
    //   cout<< "value at front second:"<<second.front()<<endl;

    vector<int>::iterator it = second.begin();
    while (it != second.end())
    {

        cout << *it << " ";
        it++;
    }
    //   cout<< "value at end first:"<<first.end()<<endl;

    // first.swap(second);

    // cout<< first[2]<<endl;
    // cout<< first[3]<<endl;

    // vector<int> arr(5);

    // cout<<"size: "<< arr.size()<<endl;

    // cout<< arr.begin<<endl;

    // arr.push_back(1);
    // arr.push_back(10);
    // cout << arr[0] << " ";
    // cout << arr[1]<<endl;
    // cout << arr[3]<<endl;

    // cout<<arr.end();

    // cout<<arr.front()<<" ";
    // cout<<arr.back()<<" ";
    // cout<<arr.pop_back();
    // cout<<arr.size();
    // arr.insert(arr.begin(),100);
    // cout<<endl;
    // cout<<arr[0];
    // cout<<arr.begin();
}