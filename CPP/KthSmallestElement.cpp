#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    priority_queue<int, vector<int>, greater<int>> pq;
	    for(int i = 0; i < n; i++) {
	        int temp;
	        cin>>temp;
	        pq.push(temp);
	    }
	    int k;
	    cin>>k;
	    for(int j = 0; j < k - 1; j++) {
	        pq.pop();
	    }
	    cout<<pq.top()<<endl;
	}
	return 0;
}