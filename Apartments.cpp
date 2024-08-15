#include<queue>
#include<iostream>

using namespace std;
typedef long long ll;
ll maxi=1000000000000000;
int main(){
  int n,m,k;
  cin>>n>>m>>k;
  priority_queue<int,vector<int>,greater<int>> apartment_size,applicant_size;
  for(int i=0;i<n;i++){
  	int x;
  	cin>>x;
  	apartment_size.push(x);
  }
  for(int i=0;i<m;i++){
    int x;
    cin>>x;
    applicant_size.push(x);
  }
  int ans = 0;
  while(!applicant_size.empty() && !apartment_size.empty()){
    int given = applicant_size.top();
    int apart_size = apartment_size.top();
     if(apart_size<(given-k))
        apartment_size.pop();
     else if(apart_size>(given+k))
        applicant_size.pop();
      else{
        applicant_size.pop();
        apartment_size.pop();
        ans++;
    }
    
  }
  cout<<ans<<endl;

  return 0;
}