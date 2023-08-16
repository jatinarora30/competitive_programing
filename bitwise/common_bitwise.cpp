#include <iostream>
using namespace std;
int getBit(int n,int i)
{
    int mask=1<<i;
    int bit= (n & mask)>0 ? 1:0;
    return bit;
}
void setBit(int &n,int i)
{
    int mask=1<<i;
    n=n| mask;
}
int main()
{
    int n;
    cin>>n;
    cout<<getBit(n,1);
    return 0;
}