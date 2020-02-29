#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a[101][101];
	vector<int> count;
	for(int i = 0; i < n; i++) {
	    count.push_back(0);
	    for(int j = 0; j < n; j++) {
	        cin>>a[i][j];
	    }
	}
	for(int i = 0; i < n; i++) {
	    for(int j = i+1; j < n; j++) {
	        if(a[i][j] == 1) {
	            count[i]++;
	        }
	        if(a[i][j] == 2) {
	            count[j]++;
	        }
	        if(a[i][j] == 3) {
	            count[i]++;
	            count[j]++;
	        }
	    }
	}
	set<int> answer;
	int resultCount = 0;
	int index = 0;
	for(auto itr = count.begin(); itr != count.end(); itr++) {
	    if(*itr == 0) {
	        resultCount++;
	        answer.insert(index+1);
	    }
	    index++;
	}
	cout<<resultCount<<endl;
	for(auto itr = answer.begin(); itr != answer.end(); itr++) {
	    cout<<*itr<<" ";
	}
	return 0;
}