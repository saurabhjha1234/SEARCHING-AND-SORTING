#include<iostream>
#include<map>
#include<climits>
using namespace std;
typedef long long ll;
ll maxi=1000000000000000;

int main(){
  int n;
  cin>>n;
  int ans = 1;
  int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  map<int,int> freq;
  int i=1,j=0;
  freq[arr[0]]++;
  while(i<n){

    while(freq.find(arr[i])!=freq.end()){
      freq.erase(arr[j]);
      j++;
    }
    freq[arr[i]]++;
    ans = max(ans,(int)freq.size());
    i++;

  }
  cout<<ans<<endl;

  return 0;
}