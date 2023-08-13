#include<iostream>
#include<queue>
#define ll long long
using namespace std;
int main() {
	ll n,k;
	cin>>n>>k;
	priority_queue<ll>q;
	while(n--){
		ll t;
		cin>>t;
		if(t==1){
			ll x,y;
			cin>>x>>y;
			ll dist=(x*x)+(y*y);
			if(q.size()<k){
				q.push(dist);
			}
			else if(q.top()>dist){
				q.pop();
				q.push(dist);
			}
		}
		else{
			cout<<q.top()<<endl;
		}
	}
	return 0;
}