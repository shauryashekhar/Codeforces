#include<bits/stdc++.h>
using namespace std;
int main()
 {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    int limit = n/2;
	    int done = 0;
	    map<int, int> m;
	    for(int i = 0; i < n; i++) {
	        int temp;
	        cin>>temp;
	        if(m.count(temp)) {
	            m[temp] = m[temp] + 1;
	        } else {
	            m[temp] = 1;
	        }
	    }
	    for(auto itr = m.begin(); itr != m.end(); itr++) {
	        if(itr->second > limit) {
	            cout<<itr->first<<endl;
	            done = 1;
	            break;
	        }
	    }
	    if(done == 0) {
	        cout<<"-1"<<endl;
	    }
	}
	return 0;
}