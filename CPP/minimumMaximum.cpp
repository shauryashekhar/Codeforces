#include<iostream>
#include<limits.h>
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
	    int mini = INT_MAX;
	    int maxi = INT_MIN;
	    for(int j = 0; j < n; j++) {
	        if(v[j] < mini) {
	            mini = v[j];
	        }
	        if(v[j] > maxi) {
	            maxi = v[j];
	        }
	    }
	    cout<<mini<<" "<<maxi<<endl;
	}
	return 0;
}