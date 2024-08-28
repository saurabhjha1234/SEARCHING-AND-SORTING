#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;

int main(){
	 ios_base::sync_with_stdio(false);
	 cin.tie(NULL);
	int n,x;
	cin>>n>>x;
	vector<pair<int,int>> arr;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		arr.push_back({x,i+1});
	}
	sort(arr.begin(),arr.end());
	for(int i=0;i<n-3;i++){
		for(int h=i+1;h<n-2;h++){
		int rem = x-arr[i].first-arr[h].first;
		int j=h+1,k=n-1;
		while(j<k){
			int sum = arr[j].first+arr[k].first;
			if(sum==rem){
				cout<<arr[i].second<<" "<<arr[h].second<<" "<<arr[j].second<<" "<<arr[k].second<<endl;
				return 0;
			}
			else if(sum<rem)
				j++;
			else
				k--;
		}
	}
}
		
	
	cout<<"IMPOSSIBLE\n";
  	return 0;

}