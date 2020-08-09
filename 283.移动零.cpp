#include<stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        for(int i=0,j=0;i<n;i++){
           if(nums[i]!=0){
               swap(nums[i],nums[j]);
               j++;
           }
        }
    }
};
// @lc code=end
/*
快慢指针 一个指向0，一个指向非零

转换思维方式  我之前一般考虑将i作为慢指针，结果过程复杂且判断增多，反过来看发现当用j作为
慢指针处理也变得简单起来。与两数之和中用map后，选择traget-nums[i]来作为判断标志相似，同
样将思维方式进行了翻转（感觉这种方式也类似两个指针，知识map用了key来进行标志）

时间复杂度：O(n)
空间复杂度：O(1)
*/

