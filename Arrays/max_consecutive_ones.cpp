// problem:find the maximum consecutive ones in an array.
// ## mera approach:
// 1.me 1's count krungi unless mujhe break nahi mil jata
// 2.break mil jane pr me us count ko map me insert krdungi
// 3.and this loop continues till n
// 4.after loop we will check ki count 0 hai ya nahi agr hai to use bhi insert kra denge.

// time complexity:nlogn
// space complexity:n
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                count++;
            }
            else{
                mp[count]=count;
                count=0;
            }
        }
        if(count!=0) mp[count]=count;
        auto it =  mp.rbegin();
        int res=it->second;

        

        return res;
    }
};

// ## better approaach:

// hume maximum count chiye to ek variable bnake max count usi me store kra lo no extra space and time.
//time complexity:O(n)
//space complexity:O(1)

  class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maxi=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
        {count++;
        maxi=max(count,maxi);}
        else count=0;
        }

        return maxi;

        
    }
};
  
