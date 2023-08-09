#include <iostream>
#include <map>
#include<cstring>
using namespace std;
int main()
{
    multimap<char,string> m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        char ch;
        string s;
        cin>>ch>>s;
        m.insert(make_pair(ch,s));
    }
    auto it2=m.lower_bound('b');
    auto it3=m.upper_bound('d');
    for(auto it4=it2;it4!=it3;it4++)
    {
        cout<<it4->first<<"->"<<it4->second<<endl;
    }
    for(auto it:m)
    {
        cout<<it.first<<"->"<<it.second<<endl;
    }
    return 0;   
}