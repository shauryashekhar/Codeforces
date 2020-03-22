#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
	    int a, b;
	    cin>>a;
	    cin>>b;
	    vector<int> result;
	    while(a != 0 && b != 0) {
	        int d1 = a % 10;
	        int d2 = b % 10;
	        int sum = d1 + d2;
	        if(sum > 9) {
	            result.insert(result.begin(), sum % 10);
	        } else {
	            result.insert(result.begin(), sum);
	        }
	        a = a / 10;
	        b = b / 10;
	    }
	    while(a != 0) {
	        result.insert(result.begin(), a % 10);
	        a = a / 10;
	    }
	    while(b != 0) {
	        result.insert(result.begin(), b % 10);
	        b = b / 10;
	    }
	    for(int x : result) {
	        cout<<x;
	    }
	    cout<<endl;
	}
	return 0;
}
