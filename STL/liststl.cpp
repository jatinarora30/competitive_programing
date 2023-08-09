#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l;

    list<int> l1{11,200,32,41,5};
    list<string> l2{"apple","banana"};
    l2.push_back("pineapple");
    l2.push_front("kiwi");
    l1.sort();
    l1.reverse();
    for(auto it:l2)
    {
        cout<<it<<"->";
    }
    cout<<endl;
    cout<<l2.front()<<endl;

    l2.push_back("carrot");
    l2.push_back("lemon");
    l2.remove("apple");
    for(auto it:l2)
    {
        cout<<it<<"->";
    }
    //erase at particular index
    auto it=l2.begin();
    it++;
    it++;
    l2.erase(it);
    cout<<endl;
    for(auto it:l2)
    {
        cout<<it<<"->";
    }



}