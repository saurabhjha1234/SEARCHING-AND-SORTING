#include<iostream>
using namespace std;
typedef long long ll;

bool fun(ll* arr,int n,ll mid,int m){
	int count=0;
	for(int i=0;i<n;i++){
		count += mid/arr[i];
		if(count>=m)
			return true;
	}
	return false;
}
int main(){
	
	int n,m;
	cin>>n>>m;
	ll times[n];
	ll min = 1e9+2;
	for(int i=0;i<n;i++){
		cin>>times[i];
		if(times[i]<min)
			min = times[i];
	}
	ll low =1,high = min*m;
	while(low<high){
		ll mid = (high+low)/2;
		if(fun(times,n,mid,m))
			high = mid;
		else
			low =  mid+1;
	} 
	cout<<low<<endl;

	
  return 0;

}