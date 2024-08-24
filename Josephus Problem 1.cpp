#include<iostream>
#include<queue>
using namespace std;
typedef long long ll;
ll maxi=1000000000000000;

int main(){
	int n;
	cin>>n;
	queue<int> q;
	for(int i=1;i<=n;i++)
		q.push(i);
	while(q.size()>1){
		q.push(q.front());
		q.pop();
		cout<<q.front()<<" ";
		q.pop();
	}
	cout<<q.front()<<endl;

  return 0;

}