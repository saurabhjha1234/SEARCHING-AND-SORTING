#include<iostream>
#include<map>

using namespace std;
typedef long long ll;
ll maxi=1000000000000000;

struct result {
	int pi,pj;
};

int main(){
  int n,x;
  cin>>n>>x;
  result ans={-1,-1};
  map<int,int> element_to_ind;
  for(int i=1;i<=n;i++){
   	int ele;
   	cin>>ele;
   	if(element_to_ind.find(x-ele)!=element_to_ind.end()){
   		ans.pi= element_to_ind[x-ele];
   		ans.pj = i; 
   	}
   	element_to_ind[ele] = i;  

   }
   if(ans.pi!=-1)
   	cout<<ans.pi<<" "<<ans.pj<<endl;
   else
   	cout<<"IMPOSSIBLE\n";
  
  

  return 0;
}