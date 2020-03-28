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
	    int term;
	    cin>>term;
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
	    if(m.count(term)) {
	        cout<<m[term]<<endl;
	    } else {
	        cout<<"-1"<<endl;
	    }
	}
	return 0;
}