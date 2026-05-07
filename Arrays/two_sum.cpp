// problem:Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// pahli approach:do loop lgao or check karo if target found return indices else return empty set of indices
// time complexity:becoz of two loops O(n^2);
// space complexity:O(1)

for(int i=0;i<nums.size();i++)
        {
           for(int j=i+1;j<nums.size();j++)
             {
               if(nums[i]+nums[j]==target)
                 return {i,j};
             }
        }
        return {};

// second approach:hashing use kro 
// 1.array ko iterate kro or a[i]-target=number jo hume find krna hai
// 2.loop lgao array ke hr ek element ke pas jkr apply same operation if found return indices else store that value into your map.
// 3.-----important point-----jabb map use kiya to time complexity O(nlogn) ayegi or agr unordered map use kiya to O(n).
// space commplexity:O(n).

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
           int more=target-nums[i];
           if(mp.find(more)!=mp.end()) return {mp[more],i};
           mp[nums[i]]=i;
        }
        return {};

    }
};

