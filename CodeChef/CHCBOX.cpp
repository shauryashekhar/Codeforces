#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    vector<int> v;
	    int highestValue = INT_MIN;
	    for(int i = 0; i < n; i++) {
	        int temp;
	        cin>>temp;
	        if(temp > highestValue) {
	            highestValue = temp;
	        }
	        v.push_back(temp);
	    }
	    vector<int> pos;
	    for(int i = 0; i < n; i++) {
	        if(v[i] == highestValue) {
	            pos.push_back(i);
	        }
	    }
	    int count = 0;
	    for(int k = 1; k < n - 1; k++) {
	        vector<int> tempPos = pos;
	        int add = 1;
	        for(int x : tempPos) {
	            x = (x + k) % n;
	            if(x < n/2) {
	                add = 0;
	                break;
	            }
	        }
	        if(add == 1) {
	           // cout<<"For k "<<k<<endl;
	            count = count + 1;
	        } else {
	            continue;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
