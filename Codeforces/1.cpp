// Example program
#include <iostream>
#include <string>

using namespace std;

int main()
{
  int n;
  cin>>n;
  for(int i = 1; i < n; i++) {
        int s1 = i;
        int s2 = n-i;
        if (s1 % 2 == 0 && s2 %2 == 0) {
            cout<<"YES"<<endl;
            return 0;
        }
  }
  cout<<"NO"<<endl;
  return 0;
}
