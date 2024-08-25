#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;
ll maxi=1000000000000000;
bool cmp(const vector<int>& a,const vector<int>& b){
	if(a[0]<b[0])
		return true;
	else if(a[0]==b[0]){
		if(a[1]>b[1])
			return true;
		else
			return false;
	}
	else
		return false;
}

int main(){
	int n;
	cin>>n;
	vector<vector<int>> ranges;
	int contains[n],containedin[n];

	int x,y;
	for(int i=0;i<n;i++){
		contains[i] = 0;
		containedin[i] = 0;
		cin>>x>>y;
		ranges.push_back({x,y,i});
	}

	sort(ranges.begin(),ranges.end(),cmp);
	int i=0,maxend = -100 ;
	while(i<n){
		if(ranges[i][1]<=maxend)
			containedin[ranges[i][2]] = 1;
		else
			maxend = max(maxend,ranges[i][1]);

		i++;	
		
	}
	
	i=n-1;
	int minend = 1e9+3;
	while(i>=0){
		if(ranges[i][1]>=minend)
			contains[ranges[i][2]] = 1;
		else
			minend = min(minend,ranges[i][1]);
		i--;
	}

	for(int i=0;i<n;i++)
		cout<<contains[i]<<" ";
	cout<<endl;
	for(int i=0;i<n;i++)
		cout<<containedin[i]<<" ";


  return 0;

}