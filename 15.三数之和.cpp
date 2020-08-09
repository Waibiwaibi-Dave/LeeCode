#include<stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=15 lang=cpp
 *
 * [15] 三数之和
 */
//-4,-1,-1,0,1,2
// @lc code=start
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int> > ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i>0&&nums[i]==nums[i-1]) continue;   //避免前面重复
            int k=n-1;
            for(int j=i+1;j<n;j++){
                if(j>i+1&&nums[j]==nums[j-1]) continue;     //避免前面重复

                while(j<k&&nums[j]+nums[k]>-nums[i])    k--;    //保证j<k

                if(j==k) break;

                if(nums[j]+nums[k]==-nums[i]){
                    ans.push_back({nums[i],nums[j],nums[k]});
                }   
            }

        }
        return ans;  
    }
};
// @lc code=end
/*
先排序 再求两数之和

时间复杂度：O(n^2)

空间复复杂度：O(logn)或者O(n)

*/

