class Solution {
public:
int helper (int n){
    if(n<=2){
        return n;
    }
    return helper(n-1)+helper(n-2);
}
    int climbStairs(int n) {
        return helper(n);
    }
};
