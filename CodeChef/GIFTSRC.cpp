#include <iostream>
#include <map>
using namespace std;

int main() {
	int t;
	cin>>t;
	map<char, int> m;
	m.insert({'L',1});
	m.insert({'R',1});
	m.insert({'U',2});
	m.insert({'D',2});
	while(t--) {
	    int n;
	    cin>>n;
	    int x = 0;
	    int y = 0;
        char prevLetter = 'a';
	    for(int i = 0; i < n; i++) {
	        char s;
	        cin>>s;
	        if(prevLetter == 'a' || m[s] != m[prevLetter]) {
	           // cout<<"Move "<<s<<" at pos "<<i<<endl;  
    	        if(s == 'L') {
    	            x = x-1;
    	        } else if(s == 'R') {
    	            x = x+1;
    	        }  else if(s == 'U') {
    	            y = y+1;
    	        } else if(s == 'D') {
    	            y = y-1;
    	        }
    	       // cout<<x<<" "<<y<<endl;
	        }
	        prevLetter = s;
	    }
	    cout<<x<<" "<<y<<endl;
	}
	return 0;
}
