#include<iostream>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;
typedef long long ll;
ll maxi=1000000000000000;

int main(){
	int n,k;
	cin>>n>>k;
	ordered_set st;
	int ind = k%n;

	for(int i=1;i<=n;i++)
		st.insert(i);
	while(n--){
		auto tmp = *(st.find_by_order(ind));
		cout<<tmp<<" ";
		st.erase(tmp);
		int h = st.size();
		if(h>0)
		ind = (ind+k)%h;

	}

  return 0;

}