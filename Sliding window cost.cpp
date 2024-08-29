#include<iostream>
#include<set>
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
			cout<<0<<" ";
		}
		return 0;
	}
	multiset<int> first_half,secondhalf;
	int mid = (k+1)/2,x;
	int arr[k];
	ll sum1=0,sum2=0;
	for(int i=0;i<k;i++){
		cin>>x;
		arr[i] = x;
		first_half.insert(x);
		sum1 +=1LL*x;
	}
	while(first_half.size()!=mid){
		sum1 -=(*(--first_half.end()));
		sum2 += (*(--first_half.end()));
		secondhalf.insert((*(--first_half.end())));
		first_half.erase(--first_half.end());
	}
	for(int i=k+1;i<=n;i++){	
		int y = (*(--first_half.end()));
		cout<<(mid*1LL*y-sum1+sum2-(k-mid)*1LL*y)<<" ";
		auto it = first_half.find(arr[j]);
		cin>>x;
		secondhalf.insert(x);
		sum2+=x;
		if(it!=first_half.end()){
			first_half.erase(it);
			sum1-=arr[j]*1LL;
			sum1 += (*secondhalf.begin())*1LL;
			sum2 -=(*secondhalf.begin())*1LL;
			first_half.insert(*secondhalf.begin());
			secondhalf.erase(secondhalf.begin());

		}
		else{
			it = secondhalf.find(arr[j]);
			secondhalf.erase(it);
			sum2-=arr[j];
			int t1 =*secondhalf.begin(),t2 = (*(--first_half.end()));
			if(t1<t2){
				sum2-= (*secondhalf.begin())*1LL;
				sum1-= (*(--first_half.end()))*1LL;
 				secondhalf.erase(secondhalf.begin());
				first_half.erase(--first_half.end());
				sum1 +=t1*1LL;
				sum2+= t2*1LL;
				first_half.insert(t1);
				secondhalf.insert(t2);
			}

		}
		arr[j] = x;
		j = (j+1)%(k);

	}
	int y = (*(--first_half.end()));
	cout<<(mid*1LL*y-sum1+sum2-(k-mid)*1LL*y)<<" ";
	//cout<<(*(--first_half.end()))<<endl;
 	return 0;

}