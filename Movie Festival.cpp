#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;
ll maxi=1000000000000000;

int main(){
  int n;
  cin>>n;
  
  vector<pair<int,int>> movie_time;
  for(int i=0;i<n;i++){
  	int x,y;
  	cin>>x>>y;
  	movie_time.push_back({y,x});

  }
  sort(movie_time.begin(),movie_time.end());
  int i=1,ans=1,curtime = movie_time[0].first;
  while(i<n){
  	while(i<n && movie_time[i].second<curtime)
  		i++;
  	if(i<n){
  		ans++;
  		curtime = movie_time[i].first;

  	}
  }
    cout<<ans<<endl;
  return 0;
}