#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[]={1,10,11,13,40,40,100};
    int n = sizeof(arr)/sizeof(int);

    int key=100;
    bool present=false;
    present=binary_search(arr,arr+n,key);
    auto it=find(arr,arr+n,key);
    if(!present)
    {
        cout<<"Not present";
    }
    else
    {
    cout<<"Present"<<endl;
    }
    //get the index
    auto lb=lower_bound(arr,arr+n,40);
    cout<<lb-arr<<endl;

    auto up=upper_bound(arr,arr+n,40);
    cout<<up-arr<<endl;

    cout<<"Occurence"<<up-lb;
    return 0;
}