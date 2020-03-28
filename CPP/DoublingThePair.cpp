#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    long long int k;
	    cin>>k;
	    for(int i = 0; i < n; i++) {
	        long long int temp;
	        cin>>temp;
	        if(temp == k) {
	            k = k * 2;
	        }
	    }
	    cout<<k<<endl;
	}
	return 0;
}