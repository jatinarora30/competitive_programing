#include <iostream>
#include <set>
using namespace std;
int main()
{
    int n,k;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        int n;
        cin>>arr[i];
    }
    set<int> s;
    int j=0, ans=0;
    for(int i=0;i<n;i++) {  
    
        while(j<n and s.find(arr[j])==s.end()) { 
            s.insert(arr[j]);
        
            j++;
        }
        ans+= ((j-i)*(j-i+1))/2;
      
        s.erase(arr[i]);
    }
    cout<<ans;

    return 0;
}