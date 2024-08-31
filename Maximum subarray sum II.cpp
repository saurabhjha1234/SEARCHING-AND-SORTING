
#include<iostream>
#include<set>
#define INT_MIN -2147483648
#define INT_MAX 2147483647
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,a,b;
	cin>>n>>a>>b;
	ll ans = -1e15;
    ll arr[n+1];
    arr[0]=0;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		arr[i] = arr[i-1]+x*1LL;
	}
	multiset<ll> sums;
	for(int i=a;i<=n;i++){
		if(i>b)
			sums.erase(sums.find(arr[i-b-1]));
		sums.insert(arr[i-a]);
		ans=max(ans,arr[i]-(*sums.begin()));
	}
	
	cout<<ans<<endl;
 	return 0;

}