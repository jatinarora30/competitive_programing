#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[]={1,10,11,9,100};
    int n = sizeof(arr)/sizeof(int);

    int key=100;
    auto it=find(arr,arr+n,key);
    if((it-arr)==n)
    {
        cout<<"Not present";
    }
    else
    {
    cout<<it-arr<<endl;
    }

    return 0;
}