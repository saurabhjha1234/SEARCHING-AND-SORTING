
#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,k,ans=0;
	cin>>n>>k;
	vector<pair<int,int>> timings;
	for(int i=0;i<n;i++){
		int x,y;
		cin>>x>>y;
		timings.push_back({y,x});
	}
	sort(timings.begin(),timings.end());
	multiset<int> end_time;
	for(int i=0;i<k;i++)
		end_time.insert(0);

	for(int i=0;i<n;i++){
		auto it = end_time.upper_bound(timings[i].second);
		if(it==end_time.begin())
			continue;


		end_time.erase(--it);
		ans++;
		end_time.insert(timings[i].first);
		//cout<<i<<endl;
	}

	cout<<ans<<endl;
 	return 0;

}