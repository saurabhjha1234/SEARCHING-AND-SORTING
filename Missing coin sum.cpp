#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
typedef long long ll;
ll maxi=1000000000000000;

int main(){
  int n;
  cin>>n;
  ll sum = 0;
  int arr[n];
  for(int i=0;i<n;i++){
  	cin>>arr[i];
  }
  sort(arr,arr+n);
  
  for(int i=0;i<n;i++){
  	if(sum+1<arr[i])
  		break;
  	sum+=arr[i]*1LL;
  }  
  cout<<sum+1<<endl;
  return 0;
}