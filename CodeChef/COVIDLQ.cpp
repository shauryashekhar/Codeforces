#include <bits/stdc++.h>
using namespace std;

int main() {
    
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    vector<int> v;
	    vector<int> pos;
	    for(int i = 0; i < n; i++) {
	        int temp;
	        cin>>temp;
	        v.push_back(temp);
	    }
	    for(int i = 0; i < v.size(); i++) {
	        if(v[i] == 1) {
	            pos.push_back(i);
	        }
	    }
	    int isNo = 0;
	    for(int j = 0; j < pos.size() -1; j++) {
	        int diff = abs(pos[j] - pos[j+1]);
	        if(diff <= 5) {
	            isNo = 1;
	            break;
	        }
	    }
	    if(isNo) {
	        cout<<"NO"<<endl;
	    } else {
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}
