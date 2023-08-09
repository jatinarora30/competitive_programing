#include <iostream>
#include <set>
using namespace std;
int main()
{
    int arr[]={10,20,11,9,8,11,10};
    int n=sizeof(arr)/sizeof(int);

    set<int> s;
    for(int i=0;i<n;i++)
    {
        s.insert(arr[i]);
    }
    s.erase(10);
    for(auto it : s)
    {
        cout<<it<<endl;
    }

    return 0;
}