// Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.
//  mera approach: 1.mene array sort kiya taki traversing ke time gap detect hone pr turant pta lag jaye 
// 2.pahla edge case question me kaha hai ki  array me alement 0 to n hone chiye where n is size of array to agr phla element hi zero nahi hua to wo missing hai
// 3.loop me hum adjascent elements ko compare krre hai if something is missing 
// 4.agr upr wali sari condition pass hai to definitely last yani n missing hai.

// time complexity:O(nlogn)
// space complexity:O(1)

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums[0]!=0) return 0;
        
        for(int i=0;i<nums.size()-1;i++) 
        {
          if(nums[i+1]!=nums[i]+1)
          return nums[i]+1;
        }

        return nums.back()+1;
    }
};


// ##optimal approach
// approach: use natural number's sum formula

//time complexity:O(n) becoz we traverse only one time
//space complexity:O(1)
class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int n=nums.size();
       int sum=n*(n+1)/2;
       int s=0;
       for(int i=0;i<n;i++)
       {
        s=s+nums[i];
       }
       int m =  sum -s;
       return m;
    }
};




