#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    int result = INT_MAX;
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
	        if(itr->second == 1) {
	            result = itr->first;
	            break;
	        }
	    }
	    if(result == INT_MAX) {
	        cout<<"-1"<<endl;
	    } else {
	        cout<<result<<endl;
	    }
	}
	return 0;
}