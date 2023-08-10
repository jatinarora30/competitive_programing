#include <iostream>
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
typedef tree<pair<int,int>,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> new_data_set;
int main()
{
    new_data_set St;
    int n;
    cin>>n;
    int a[n],b[n],c[n];
    int inversion_count=0;
   for (int i = 0; i < n; i++) {
        cin >> a[i];
}
      for (int i = 0; i < n; i++) {
        cin >> b[i];
}
    for (int i = 0; i < n; i++) {
       c[i]=a[i]-b[i];
}
       for (int i = 0; i < n; i++) {
        inversion_count += St.size() - St.order_of_key({-c[i],100000});
        St.insert(c[i]);
        }
    cout<<inversion_count;
    
    return 0;
}