#include<iostream>
#include<map>
using namespace std;

int main()
 {
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    int k;
	    cin>>k;
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
	            cout<<itr->first<<endl;
	            break;
	        }
	    }
	}
	return 0;
}