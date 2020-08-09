#include<stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=11 lang=cpp
 *
 * [11] 盛最多水的容器
 */

// @lc code=start
class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1;
        int sum=0;
        while(i<j){
            int temp=min(height[i],height[j])*(j-i);
            sum=max(temp,sum);
            if(height[i]<=height[j])    i++;
            else j--;
        }
        return sum;
    }
};
// @lc code=end

/*
双指针  左右 寻找

*/