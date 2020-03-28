#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--) {
	    int r,c;
	    cin>>r>>c;
	    int arr[r][c];
	    for(int i = 0; i < r; i++) {
	        for(int j = 0; j < c; j++) {
	            int temp;
	            cin>>temp;
	            arr[i][j] = temp;
	        }
	    }
	    int key;
	    cin>>key;
	    int found = 0;
	    for(int i = 0; i < r; i++) {
	        for(int j = 0; j < c; j++) {
	            if(key == arr[i][j]) {
	                found = 1;
	                break;
	            }
	        }
	        if(found == 1) {
	            break;
	        }
	    }
	    if(found == 1) {
	        cout<<"1"<<endl;
	    } else {
	        cout<<"0"<<endl;
	    }
	}
	return 0;
}