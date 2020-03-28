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
	    int result = 0;
	    for(int i = 0; i < n; i++) {
	        for(int j = i + 1; j < n; j++) {
	            int value = abs(v[j]-v[i]);
	            if(value > 1) {
	                result = result + v[j] - v[i];
	            }
	        }
	    }
	    cout<<result<<endl;
	}
	return 0;
}