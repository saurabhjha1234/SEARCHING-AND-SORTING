#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
ll maxi=1000000000000000;
int main(){
  int n,x;
  cin>>n>>x;
  int weigh[n];
  for(int i=0;i<n;i++)
    cin>>weigh[i];
  sort(weigh,weigh+n);
  int i=0,j=n-1,ans=0;
  while(i<=j){
    if(i==j){
      ans++;
      break;
    }
    if(weigh[i]+weigh[j]<=x){
      ans++;
      i++;
      j--;
    }
    else{
      ans++;
      j--;
    }

  }
  
  cout<<ans<<endl;
  return 0;
}