#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int arr[n][n];
        // set<int> s;
        // for(int i = 1; i <= n; i++) {
        //     s.insert(i);
        // }
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                int temp;
                cin>>temp;
                arr[i][j] = temp;
            }
        }
        int isLatin = 1;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(arr[i][j] >= 1 && arr[i][j] <= n) {
                    continue;
                } else {
                    isLatin = 0;
                    break;
                }
            }
            if(isLatin == 0) {
                break;
            }
        }
        int noOfRows = 0;
        int noOfCols = 0;
        // if(isLatin == 1) {
            for(int i = 0; i < n; i++) {
                // cout<<"For i "<<i<<endl;
                set<int> row;
                for(int j = 0; j < n; j++) {
                    // cout<<i<<" "<<j<<" "<<arr[i][j]<<endl;
                    if(row.count(arr[i][j]) == 0) {
                        // cout<<"Inserted to set"<<endl;
                        row.insert(arr[i][j]);
                    } else {
                        noOfRows++;
                        // cout<<noOfRows<<" updated."<<endl;
                        isLatin = 0;
                        break;
                    }
                }
                set<int> col;
                for(int j = 0; j < n; j++) {
                    if(col.count(arr[j][i]) == 0) {
                        col.insert(arr[j][i]);
                    } else {
                        noOfCols++;
                        isLatin = 0;
                        break;
                    }
                }
            }
        // }
        
        vector<int> result;
        int temp = 0;
        for(int i = 0; i < n; i++) {
            temp = temp + arr[i][i];
        }
        result.push_back(temp);
        if(isLatin) {
            result.push_back(0);
            result.push_back(0);
        } else {
            result.push_back(noOfRows);
            result.push_back(noOfCols);
        }
        
        for(int x : result) {
            cout<<x<<" ";
        }    
        cout<<endl;
        
    }
    return 0;
}