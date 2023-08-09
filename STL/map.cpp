#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{

    map<string,int> m;
    m.insert(make_pair("Mango",100));

    pair<string,int> p;
    p.first="Apple";
    p.second=20;
    m.insert(p);
    m["Banana"]=30;

    //search

    string fruit="Banana";

    auto it =m.find(fruit);
  //  m.erase(fruit);
    if(it!=m.end())
    {
        cout<<"Price of fruit "<<fruit<<" is "<<m[fruit]<<endl;
    }
    else
    {
        cout<<"not found"<<endl;
    }
    m["Litchi"]=40;
    m["Pineapple"]=80;

    for(auto it : m)
    {
        cout<<it.first<<" "<<it.second;
        cout<<endl;
    }
    return 0;
}