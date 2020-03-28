#include <bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--) {
	    int s, t;
	    cin>>s;
	    cin>>t;
	    string s1, s2;
	    cin>>s1;
	    cin>>s2;
	    int arr[s+1][t+1];
	    memset(arr, 0, sizeof(arr));
	    for(int i = 0; i < s + 1; i++) {
	        for(int j = 0; j < t + 1; j++) {
	            if(i == 0 || j == 0) {
	                arr[i][j] = 0;
	            } else if(s1[i-1] == s2[j-1]) {
	                arr[i][j] = arr[i-1][j-1] + 1;
	            } else {
	                arr[i][j] = max(arr[i-1][j], arr[i][j-1]);
	            }
	           // cout<<arr[i][j]<<" ";
	        }
	       // cout<<endl;
	    }
	    cout<<arr[s][t]<<endl;
	}
	return 0;
}