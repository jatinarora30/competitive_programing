#include <iostream>
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> new_data_set;
int main()
{
    new_data_set St;
    St.insert(10);
    St.insert(4);
    St.insert(3);
    St.insert(15);
    St.insert(11);
    for(int i=0;i<St.size();i++)
    {
        cout<<i<<" "<<*St.find_by_order(i)<<endl;
    }
    cout<<St.order_of_key(5);
    return 0;
}