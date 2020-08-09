#include<stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=18 lang=cpp
 *
 * [18] 四数之和
 */
//-2,-1,0,0,1,2
// @lc code=start
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int> >ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int a=0;a<n-3;a++){

            if(a>0&&nums[a]==nums[a-1]) continue;   //避免a的重复

            for(int b=a+1;b<n-2;b++){

                if(b>a+1&&nums[b]==nums[b-1])   continue;   //避免b的重复

                int d=n-1;

                for(int c=b+1;c<n-1;c++){

                    if(c>b+1&&nums[c]==nums[c-1]) continue;     //避免c的重复

                    int sum=nums[a]+nums[b]+nums[c]+nums[d];

                    while(c<d&&sum>target){
                        d--;
                        sum=nums[a]+nums[b]+nums[c]+nums[d];    //--后需更新sum的值
                    } 

                    

                    if(c==d) break;

                    if(sum==target){
                        ans.push_back({nums[a],nums[b],nums[c],nums[d]});
                    }

                }
            }

        }
        return ans;
    }
};
// @lc code=end
/*
两（两个数）个数之和

以零为界限


*/
