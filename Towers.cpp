#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;
ll maxi=1000000000000000;

int main(){
  int n;
  cin>>n;
  //int ans = 1;
  vector<int> cur_tower;
  int x;
  cin>>x;
  cur_tower.push_back(x);
  for(int i=1;i<n;i++){
  	cin>>x;
  	if(x>=cur_tower.back())
  		cur_tower.push_back(x);
  	else{
  		int j = upper_bound(cur_tower.begin(),cur_tower.end(),x)-cur_tower.begin();
  		cur_tower[j] = x;
  	}
  }
  cout<<cur_tower.size()<<endl;
  

  return 0;
}