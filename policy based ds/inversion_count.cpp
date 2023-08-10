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
    int n;
    cin>>n;
    int a[n];
    int inversion_count=0;
   for (int i = 0; i < n; i++) {
        cin >> a[i];
        inversion_count += St.size() - St.order_of_key(a[i]);
        St.insert(a[i]);
}
    cout<<inversion_count;
    
    return 0;
}