class Solution {
public:
    int fib(int N) {
        if(N == 0) {
            return 0;
        }
        if(N == 1) {
            return 1;
        }
        int first = 0;
        int second = 1;
        int sum = 0;
        for(int i = 2; i <= N; i++) {
            sum = first + second;
            first = second;
            second = sum;
        }
        return sum;
    }
}