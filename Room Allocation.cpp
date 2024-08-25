#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
//ll maxi=1000000000000000;
// bool cmp(const vector<int>& a,const vector<int>& b){
// 	if(a[0]<b[0])
// 		return true;
// 	else if(a[0]==b[0]){
// 		if(a[1]>b[1])
// 			return true;
// 		else
// 			return false;
// 	}
// 	else
// 		return false;
// }

int main(){
	int n;
	cin>>n;
	vector<vector<int>> ranges;
	int alloted_rom[n];
	for(int i=0;i<n;i++){
		int x,y;
		cin>>x>>y;
		ranges.push_back({x,y,i});
	}
	sort(ranges.begin(),ranges.end());
	int x,y,room=1;
	
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
	for(int i=0;i<n;i++){
		x = ranges[i][0],y = ranges[i][1];
		if(pq.size()==0){
			pq.push({y,room});
			alloted_rom[ranges[i][2]] = room;
			room++;
		}
		else{
			if(x<=(pq.top()).first){
				pq.push({y,room});
				alloted_rom[ranges[i][2]] = room;
				room++;
			}
			else{
				alloted_rom[ranges[i][2]] = pq.top().second;
				pq.pop();
				pq.push({y,alloted_rom[ranges[i][2]]});
			}
		}

	}
	cout<<(*max_element(alloted_rom,alloted_rom+n))<<endl;
	for(int i=0;i<n;i++)
		cout<<alloted_rom[i]<<" ";


	
  return 0;

}