/*
 * @lc app=leetcode.cn id=70 lang=cpp
 *
 * [70] 爬楼梯
 */

// @lc code=start
class Solution {
public:
    int climbStairs(int n) {
        if(n==1) return 1;
        if(n==2) return 2;
        int ans,pre=1,next=2;
        for(int i=2;i<n;i++){
            ans=pre+next;
            pre=next;
            next=ans;
        }
        return ans;
    }
};
// @lc code=end

/*
动态规划 dp[1]=1 dp[2]=2 dp[3]=dp[1]+dp[2] d[i]=d[i-1]+dp[i-2]

时间复杂度O(n)

空间复杂度O(1)

*/

