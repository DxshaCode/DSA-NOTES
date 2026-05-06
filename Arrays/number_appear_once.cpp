// problem:Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
// You must implement a solution with a linear runtime complexity and use only constant extra space.

// mera approach:
// 1.kyonki isme pahle hi kah diya ki we have to solve it in linear time complexity toh i know a concept called xor  gate isme dupllicate values ek dusre ko cancel out kr 
// deti hai and end me jo single values rhti hai they stays.
//We use XOR operation:
// 1. a ^ a = 0
// 2. a ^ 0 = a

// time complexity:O(n) only one iteration
// space complexity:O(1) 

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int num=0;
        for(int i=0;i<nums.size();i++)
        {
            num=num^nums[i];
        }
        return num;
    }
};

// mera second approach: agr isme linear time complexity ka option nahi diya gaya hota to we have used hashing and that was my second approach.
//time complexity:O(n) becoz we have used unordered map
//space complexity:O(n)
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
          {
              mp[nums[i]]++;
          }
      for(auto it=mp.begin();it!=mp.end();++it)
        {
          if(it->second==1)
            return it->first;
        }
      return -1;
    }
};

