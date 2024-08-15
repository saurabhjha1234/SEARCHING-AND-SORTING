#include<iostream>
#include<set>
using namespace std;
typedef long long ll;
ll maxi=1000000000000000;
int main(){
  int n,m;
  cin>>n>>m;
  multiset<int> ticket_price;
  for(int i=0;i<n;i++){
  	int x;
  	cin>>x;
  	ticket_price.insert(x);
  }
  while(m--){
  	int max_price;
  	cin>>max_price;
  	if(!ticket_price.empty()){
  		auto it = ticket_price.lower_bound(max_price);
  		if(it==ticket_price.end()){
  			cout<<(*(--it))<<endl;
  			ticket_price.erase(it);
  		}
  		else if((*it)==max_price){
  			cout<<max_price<<endl;
  			ticket_price.erase(it);
  		}
  		else{
  			if(it==ticket_price.begin())
  				cout<<-1<<endl;
  			else{
  				--it;
  				cout<<(*it)<<endl;
  				ticket_price.erase(it);
  			}
  		}
  	}
  	else
  		cout<<-1<<endl;
  }
  
  return 0;
}