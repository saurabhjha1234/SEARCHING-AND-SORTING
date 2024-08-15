#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;
ll maxi=1000000000000000;
int main(){
  int n;
  cin>>n;
  vector<int> leave_time;
  vector<pair<int,int>> player_time;
  for(int i=0;i<n;i++){
  	int x,y;
  	cin>>x>>y;
  	player_time.push_back({x,y});
  	leave_time.push_back(y);
  }
  sort(player_time.begin(),player_time.end());
  sort(leave_time.begin(),leave_time.end());
  int ans = 0;
  for(int i=0;i<n;i++){
  	int low = lower_bound(leave_time.begin(),leave_time.end(),player_time[i].first)-leave_time.begin();
  	ans = max(ans,i+1-low);
  }
  cout<<ans<<endl;
  return 0;
}