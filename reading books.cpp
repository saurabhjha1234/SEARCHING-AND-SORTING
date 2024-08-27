#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;

int main(){
	
	int n;
	cin>>n;
	ll sum = 0,maxi = -1;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		sum += 1LL*arr[i];
		maxi = max(arr[i]*1LL,maxi);
	}
	if(sum-maxi<=maxi)
		cout<<2LL*maxi<<endl;
	else
		cout<<sum<<endl;
	
  return 0;

}