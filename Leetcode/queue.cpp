#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int> q;
	for(int i = 0; i < n; i++) {
	    int temp;
	    cin>>temp;
	    q.push_back(temp);
	}
	sort(q.begin(), q.end());
	int currentCount = 1;
	int currentSum = 0;
// 	for(int a : q) {
// 	    cout<<a<<" ";
// 	}
	for(int i = 1; i < n; i++) {
	    currentSum = currentSum + q[i-1];
	    if(currentSum <= q[i]) {
	       // cout<<"Adding for "<<i<<endl;
	        currentCount++;
	    }
	}
	cout<<currentCount<<endl;
	return 0;
}