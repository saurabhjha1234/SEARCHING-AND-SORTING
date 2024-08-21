#include<iostream>
using namespace std;
typedef long long ll;
ll mini=-1000000000000000;

int main(){
  int n;
  cin>>n;
  ll sum = 0,ans = mini;
  for(int i=0;i<n;i++){
  	ll x;
  	cin>>x;
  	sum += x;
  	ans = max(ans,sum);
  	if(sum<0)
  		sum = 0;
  }
  cout<<ans<<endl;
  
  return 0;
}