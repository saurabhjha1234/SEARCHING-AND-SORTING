#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
typedef long long ll;
ll maxi=1000000000000000;

int main(){
  int n;
  cin>>n;
  int arr[n+1]={0};
  int vis[n+1]={0};
  for(int i=1;i<=n;i++){
  	int x;
  	cin>>x;
  	arr[x] = i;
  }
  int pass = 0;

  for(int i=1;i<=n;i++){
  	if(vis[i]==1)
  		continue;
  	else{
  		pass++;
  		int tmp = i;
  		int ind = arr[tmp];
  		while(tmp<=n && vis[tmp]==0 && arr[tmp]>=ind){
  			vis[tmp]=1;
  			ind = arr[tmp];
  			tmp++;
  			
  		}
  	}
  }
  cout<<pass<<endl;
  return 0;
}