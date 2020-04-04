#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
	    string s1, s2;
	    cin>>s1;
	    cin>>s2;
	    map<char, int> m1;
	    for(char c : s1) {
	        if(m1.count(c)) {
	            m1[c] = m1[c] + 1;
	        } else {
	            m1[c] = 1;
	        }
	    }
	    int notAnagram = 0;
	    for(char c : s2) {
	        if(m1.count(c)) {
	            if(m1[c] > 0) {
	                m1[c] = m1[c] - 1;
	            } else {
	                notAnagram = 1;
	                break;
	            }
	        } else {
	            notAnagram = 1;
	            break;
	        }
	    }
	    if(notAnagram == 0) {
	        for(auto itr = m1.begin(); itr != m1.end(); itr++) {
	            if(itr->second != 0) {
	                notAnagram = 1;
	                break;
	            }
	        }
	    }
	    if(notAnagram) {
	        cout<<"NO"<<endl;
	    } else {
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}
