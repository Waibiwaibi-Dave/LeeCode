#include<stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int> mymap;
       int n=nums.size();
       vector<int> ans;
       for(int i=0;i<n;i++){
           if(mymap[target-nums[i]]&&mymap[target-nums[i]]!=i+1){
               ans.emplace_back(mymap[target-nums[i]]-1);
               ans.emplace_back(i);               
               return ans;
           }

           mymap[nums[i]]=i+1;
       }
       return ans;
    }
};
// @lc code=end
/*
1.排序后双指针,再遍历数组  
 vector<int> temp(nums);
        sort(temp.begin(),temp.end());
        int i=0,j=nums.size()-1;
        vector<int> ans;
        while(i<j){
            if(temp[i]+temp[j]<target)  i++;
            else if(temp[i]+temp[j]>target) j--;
            else    break;           
        }
        for(int k=0;k<nums.size();k++){
            if(i<nums.size()&&nums[k]==temp[i]){
                ans.push_back(k);
                i=nums.size(); 
            }else if(j<nums.size()&&nums[k]==temp[j]){
                ans.push_back(k);
                j=nums.size();
            }
            if(i==nums.size()&&j==nums.size()){
                return ans;
            }
        }
        return ans;

时间复杂度O(nlog2n),主要排序算法

空间复杂度O(n),暂存排序数组

2.map


*/