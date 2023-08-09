#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int,vector<int>,greater<int>> q;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        q.push(a);
    }
    while(!q.empty())
    {
        cout<<q.top()<<",";
        q.pop();
    }
    return 0;

}