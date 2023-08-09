#include <iostream>
#include <unordered_map>
#include<string>
using namespace std;
int main()
{
    unordered_map<string,int> m;
    m.insert(make_pair("Apple",30));
    m.insert(make_pair("Banana",40));
    pair<string,int> p;

    p.first="Litchi";
    p.second=120;
    m.insert(p);

    for(auto it: m)
    {
        cout<<it.first<<it.second<<endl;
    }
    return 0;
}