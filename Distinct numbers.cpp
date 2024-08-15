#include<set>
#include<iostream>

using namespace std;
typedef long long ll;
ll maxi=1000000000000000;
int main(){
  int n;
  cin>>n;
  set<int> st;
  for(int i=0;i<n;i++){
  	int x;
  	cin>>x;
  	st.insert(x);
  }
  cout<<st.size()<<endl;
  return 0;
}