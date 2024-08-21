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
  	sum += arr[i];
  }
  sort(arr,arr+n);
  ll cost = maxi,cursum = 0;
  for(int i=0;i<n;i++){
  	ll tmpcost = abs(i*1LL*arr[i]-cursum);
  	int j=i;
  	while(j<n && arr[i]==arr[j]){
  		cursum += arr[i];
  		j++;
  	}
  	if(i!=j)
  		i=j-1;
  	tmpcost += abs((n-i-1)*1LL*arr[i]-sum+cursum);
  	cost = min(cost,tmpcost);

  }
  
  cout<<cost<<endl;
  
  return 0;
}