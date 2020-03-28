#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    vector<int> v;
	    for(int i = 0; i < n; i++) {
	        int temp;
	        cin>>temp;
	        v.push_back(temp);
	    }
	    int result = 0;
	    for(int i = 0; i < n; i++) {
	        for(int j = 0; j < n; j++) {
	            if(i != j) {
	                if(v[i] < v[j]) {
	                    result++;
	                }
	            }
	        }
	    }
	    cout<<result<<endl;
	}
	return 0;
}