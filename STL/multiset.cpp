#include <iostream>
#include <set>
using namespace std;
typedef multiset<int>::iterator It;
int main()
{
    int arr[]={10,20,30,20,10,10,30};
    multiset<int> m(arr,arr+7);
    m.erase(20);
    m.insert(80);
    cout<<m.count(10)<<endl;
    for(int x:m)
    {
        cout<<x<<",";
    }
    cout<<endl;
    auto it=m.find(30);
    cout<<(*it)<<endl;
    pair<It,It> range = m.equal_range(30);
    for(auto it= range.first ;it!=range.second;it++)
    {
        cout<<(*it)<<" - ";
    }
    for(auto it=m.lower_bound(10);it!=m.upper_bound(30);it++)
    {
        cout<<(*it)<<"-";
    }
    return 0;
}