#define N 10

class Solution {
public:
    
     bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int arr[numCourses][numCourses];
        memset(arr, 0, sizeof(arr));
         set<int> done;
        for(vector<int> link : prerequisites) {
            int c1 = link[0];
            int c2 = link[1];
            arr[c2][c1] = 1;
        }
        // SHOW ARRAY
        //  cout<<"BEGIN"<<endl;
        // for(int i = 0; i < numCourses; i++) {
        //     for(int j = 0; j < numCourses; j++) {
        //         cout<<arr[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        
        // SHOW ARRAY
        int coursesTaken = 0;
        while(coursesTaken != numCourses) {
            int currentCourse = INT_MIN;
            for(int i = 0; i < numCourses; i++) {
                if(done.count(i) == 0) {
                    int validCourse = 1;
                    for(int j = 0; j < numCourses; j++) {
                        if(arr[j][i] == 0) {
                            continue;
                        } else {
                            validCourse = 0;
                            break;
                        }
                    }
                    if(validCourse == 1) {
                        currentCourse = i;
                        break;
                    }
                }
            }
            if(currentCourse == INT_MIN) {
                return false;
            } else {
                done.insert(currentCourse);
                for(int k = 0; k < numCourses; k++) {
                    arr[currentCourse][k] = 0;
                }
//                 cout<<"After choosing "<<currentCourse<<endl;
//                 // SHOW ARRAY
//                 for(int i = 0; i < numCourses; i++) {
//                     for(int j = 0; j < numCourses; j++) {
//                         cout<<arr[i][j]<<" ";
//                     }
//                     cout<<endl;
//                 }

//                 // SHOW ARRAY
            }
            coursesTaken++;
        }
        return true;
    }
};