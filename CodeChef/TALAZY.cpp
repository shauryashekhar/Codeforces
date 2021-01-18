#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
	    long long n, b, m;
	    cin>>n;
	    cin>>b;
	    cin>>m;
	    long long timeSolve = 0;
	   // long long breakNumber = 0;
	    while(n != 0) {
	        if (n % 2 == 0) {
	           // cout<<"Solving "<<n/2<<" problems."<<endl;
	           // cout<<"Time taken is "<<(m) * (n/2)<<endl;
	            timeSolve = timeSolve + (m) * (n/2);
	            n = n - (n/2);
	           // cout<<"Problems left "<<n<<endl;
	        } else {
	           // cout<<"Solving "<<(n+1)/2<<" problems."<<endl;
	           // cout<<"Time taken is "<<(m) * ((n+1)/2)<<endl;
	            timeSolve = timeSolve + (m) * ((n+1)/2);
	            n = n - ((n+1)/2);
	           // cout<<"Problems left "<<n<<endl;
	        }
	        if (n != 0) {
	           // cout<<"Break Taken"<<endl;
	           // breakNumber++;
	            m = m * 2;
	            timeSolve = timeSolve + b;
	        }
	    }
	    cout<<timeSolve<<endl;
	}
	return 0;
}
