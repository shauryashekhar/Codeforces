#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stdlib.h>
using namespace std;

string getBinary(int x) {
    string resultString = "";
    while(x != 0) {
        int digit = x % 2;
        char number = digit + '0';
        resultString.insert(resultString.begin(), number);
        x = x/2;
    }
    return resultString;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
	    int result = 1;
	    int n;
	    cin>>n;
	    vector<int> v;
	    for(int i = 0; i < n; i++) {
	        int temp;
	        cin>>temp;
	        v.push_back(temp);
	    }
	    for(int j = 0; j < n - 1; j++) {
	        int n1 = v[j];
	        int n2 = v[j+1];
	        string s1 = getBinary(n1);
	        string s2 = getBinary(n2);
	        int tempResult = 1;
	        // cout<<"For j "<<j<<endl;
	        // cout<<s1<<" "<<s2<<endl;
	        int len1 = s1.size();
	        int len2 = s2.size();
	        int diff = len2 - len1;
	        for(int i = 0; i < diff; i++) {
	            s1.insert(s1.begin(), '0');
	        }
	       // cout<<s1<<" "<<s2<<endl;
	       // cout<<s1.size()<<" "<<s2.size()<<endl;
	        for(int k = 0; k < s1.size(); k++) {
	           // cout<<"For k value "<<k<<endl;
	           // cout<<s1[k]<<" "<<s2[k]<<endl;
	            if(s2[k] == '1' && s1[k] == '1') {
	                tempResult = tempResult * 2;
	            } else if(s2[k] == '0' && s1[k] == '0') {
	                tempResult = tempResult * 1;
	            } else if(s1[k] == '0' && s2[k] == '1') {
	                tempResult = tempResult * 1;
	            }
	           // cout<<"TempValue is now "<<tempResult<<endl;
	        }
	        
	       // cout<<tempResult<<endl;
	        result = result * tempResult;
	    }
	    cout<<result<<endl;
	}
	return 0;
}
