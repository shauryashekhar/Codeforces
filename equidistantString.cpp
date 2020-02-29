#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	string t;
	cin>>s;
	cin>>t;
	int len = s.size();
	int count = 0;
	for(int i = 0; i < len; i++) {
	    if(s[i] != t[i]) {
	        count++;
	    }
	}
	if(count % 2 != 0) {
	    cout<<"impossible"<<endl;
	} else {
	    int newCount = count / 2;
	    int currentCount = count;
	    int index = 0;
	    while(currentCount != newCount) {
	        if(s[index] != t[index]) {
	            s[index] = t[index];
	            currentCount--;
	        }
	        index++;
	    }
	    cout<<s<<endl;
	}
	return 0;
}