#include<iostream>
#include<set>
#include<vector>
using namespace std;
typedef long long ll;

int main(){
	 ios_base::sync_with_stdio(false);
	 cin.tie(NULL);
	int n,k,j=0;
	cin>>n>>k;
	if(k==1){
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			cout<<x<<" ";
		}
		return 0;
	}
	multiset<int> first_half,secondhalf;
	int mid = (k+1)/2,x;
	int arr[k];
	for(int i=0;i<k;i++){
		cin>>x;
		arr[i] = x;
		first_half.insert(x);
	}
	while(first_half.size()!=mid){
		secondhalf.insert((*(--first_half.end())));
		first_half.erase(--first_half.end());
	}
	for(int i=k+1;i<=n;i++){	
		cout<<(*(--first_half.end()))<<" ";
		auto it = first_half.find(arr[j]);
		cin>>x;
		secondhalf.insert(x);
		if(it!=first_half.end()){
			first_half.erase(it);
			first_half.insert(*secondhalf.begin());
			secondhalf.erase(secondhalf.begin());

		}
		else{
			it = secondhalf.find(arr[j]);
			secondhalf.erase(it);
			int t1 =*secondhalf.begin(),t2 = (*(--first_half.end()));
			if(t1<t2){
				secondhalf.erase(secondhalf.begin());
				first_half.erase(--first_half.end());
				first_half.insert(t1);
				secondhalf.insert(t2);
			}

		}
		arr[j] = x;
		j = (j+1)%(k);

	}

	cout<<(*(--first_half.end()))<<endl;
 	return 0;

}