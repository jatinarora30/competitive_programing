#include <iostream>
#include <vector>

using namespace std;
int main()
{   
    vector<int> a;
    vector<int> b(5,10); // 5 elements , 0 value
    vector<int> c(b.begin(),b.end());
    vector<int> d{1,2,3,4,10,14};

    for(int i=0;i<c.size();i++)
    {
        cout<<c[i]<<" ";
    }
    cout<<endl;

    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        v.push_back(k);
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<v.max_size()<<endl;

      cout<<d.size()<<endl;
    cout<<d.capacity()<<endl;
    cout<<d.max_size()<<endl;
    return 0;
}