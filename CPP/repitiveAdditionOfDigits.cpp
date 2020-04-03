#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    if(n < 10) {
	        cout<<n<<endl;
	    } else {
	        int sum = 0;
	        int temp = n;
	        int result;
	        repeat:
	        while(temp != 0) {
	            int digit = temp % 10;
	            sum = sum + digit;
	            temp = temp / 10;
	        }
	       // cout<<sum<<endl;
	        if(sum < 10) {
	            result = sum;
	        } else {
	            temp = sum;
	            sum = 0;
	            goto repeat;
	        }
	        cout<<result<<endl;
	    }
	}
	return 0;
}