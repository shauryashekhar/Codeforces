#include <iostream>
#include <string>
#include <map>
#include <set>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
	    string s;
	    cin>>s;
	    int len = s.size();
	    if(len < 4) {
	        cout<<"normal"<<endl;
	        continue;
	    }
	    map<char, int> m;
	    m.insert({'c',0});
	    m.insert({'h',0});
	    m.insert({'e',0});
	    m.insert({'f',0});
	    set<char> charSet;
	    charSet.insert('c');charSet.insert('h');charSet.insert('e');charSet.insert('f');
	    int count = 0;
	    for(int i = 0; i < 4; i++) {
	        if(charSet.count(s[i])) {
	            m[s[i]] = m[s[i]] + 1;
	        }
	    }
	    if(m['c'] == 1 && m['h'] == 1 && m['e'] == 1 && m['f'] == 1) {
	        count++;
	    }
	    for(int i = 1; i < len - 3; i++) {
	        if(charSet.count(s[i-1])) {
	            m[s[i-1]] = m[s[i-1]] - 1;
	        }
	        if(charSet.count(s[i+3])) {
	           // cout<<"Last charachter "<<s[i+3]<<endl;
	            m[s[i+3]] = m[s[i+3]] + 1;
	        }
	        if(m['c'] == 1 && m['h'] == 1 && m['e'] == 1 && m['f'] == 1) {
	            count++;
	        }
	    }
	    if(count == 0) {
	        cout<<"normal"<<endl;
	    } else {
	        cout<<"lovely "<<count<<endl;
	    }
	}
	return 0;
}
