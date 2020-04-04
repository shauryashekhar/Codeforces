#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    priority_queue<int> pq;
	    for(int i = 0; i < n; i++) {
	        int temp;
	        cin>>temp;
	        pq.push(temp);
	    }
	    long long int yearNo = 0;
	    long long int result = 0;
	    while(!pq.empty()) {
	        int max = pq.top();
	        pq.pop();
	        if(max - yearNo > 0) {
	            result = result + max - yearNo;
	        }
	        yearNo++;
	    }
	    cout<<result % 1000000007<<endl;
	}
	return 0;
}
