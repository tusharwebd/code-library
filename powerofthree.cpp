class Solution {
public:
    bool isPowerOfThree(int n) {
        int const power32 = pow(3,19);
        return n>0 && power32%n==0;
    }
};
