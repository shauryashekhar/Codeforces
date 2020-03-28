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
	    while(v.size() != 1) {
	        int lastIndex = v.size() - 1;
	        if(v[lastIndex] > v[0]) {
	            v.pop_back();
	        } else {
	            v.erase(v.begin());
	        }
	    }
	    cout<<v[0]<<endl;
	}
	return 0;
}