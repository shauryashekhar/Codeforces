vector<int> Solution::plusOne(vector<int> &A) {
    vector<int> result;
    if(A.size() == 0) {
        return result;
    }
    // for(int j : A) {
    //     if(j == 0) {
    //         A.erase(A.begin());
    //     } else {
    //         break;
    //     }
    // }
    int carry = 0;
    for(int i = A.size() - 1; i >= 0; i--) {
        if(i == A.size() - 1) {
            A[i] = A[i] + 1;
        }
        if(carry) {
            A[i] = A[i] + carry;
            carry = 0;
        }
        if(A[i] >= 10) {
            carry = 1;
            A[i] = A[i] % 10;
        }
    }
    if(carry) {
        A.insert(A.begin(), carry);
        carry = 0;
    }
    while(A[0] == 0) {
        A.erase(A.begin());
    }
    return A;
}
