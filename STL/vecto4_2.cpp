#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> d{1,2,3,10,14};
    d.push_back(16);
    for(auto i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    d.pop_back();
    d.insert(d.begin()+3,4);
    d.erase(d.begin()+3,d.begin()+5);
    d.clear();
    d.reserve(1000);
    cout<<d.capacity()<<endl;
    for(auto i:d)
    {
        cout<<i<<" ";
    }
    if(d.empty())
    {
        cout<<"empty vector"<<endl;
    }
    cout<<endl;
    return 0;
}