#include<iostream>
#include<set>
#include<algorithm>
#include<iterator>
using namespace std;
typedef long long ll;
ll maxi=1000000000000000;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
  int n,m;
  cin>>n>>m;
  multiset<int> distance;
  set<int> light_pos;
  light_pos.insert(0);
  light_pos.insert(n);
  distance.insert(n);
  int pos;
  for(int i=0;i<m;i++){
  	cin>>pos;
  	auto it = light_pos.lower_bound(pos);
  	auto it2 = prev(it);
  	distance.insert((*it)-pos);
  	distance.insert(pos-(*it2));
   	distance.erase(distance.find((*it)-(*it2)));
   	light_pos.insert(pos);
   	cout<<(*(--distance.end()))<<" ";

  }

  return 0;

}