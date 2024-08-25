#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;

int main(){
	
	int n;
	cin>>n;
	vector<pair<int,int>> tasks;
	for(int i=0;i<n;i++){
		int x,y;
		cin>>x>>y;
		tasks.push_back({x,y});
	}
	sort(tasks.begin(),tasks.end());
	ll reward = tasks[0].second-tasks[0].first,curtime = tasks[0].first;
	for(int i=1;i<n;i++){
		curtime  += tasks[i].first;
		reward += 1LL*(tasks[i].second-curtime); 
	}
	cout<<reward<<endl;


	
  return 0;

}