#include<iostream>
#include<vector>
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
	    int size = v.size();
	   // cout<<size<<endl;
	    while(v.size() > 1) {
	        size = v.size();
	        if(v[0] > v[size-1]) {
	            v.erase(v.begin());
	        } else {
	            v.erase(v.end()-1);
	        }
	    }
	    cout<<v[0]<<endl;
	}
	return 0;
}