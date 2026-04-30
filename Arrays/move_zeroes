//problem: move all the zeroes at the end of array
//concept: two pointer
//approach: ##fisrt approach##
//             1.ek nya vector  bnao or non zero elements ko push kro or zero count kro fr un zero ko bhi insert krdo nye vector me 
//             2.the given vector = new vector (new vector ki values copy hogyi wps given vector me )
//             3.disadvantage is that is approach me O(n) space complexity lgri hai jiski wjs s ye zyada optimal nhi hai

// ##better approch:
        // 1. ek pointer liya i, ise 0 index pr rkha
        // 2.dusra pointer liya j jisko loop me dala till array size
        // 3.agar j zero nahi hai to arr[i] pr arr[j] ko swap kraya or i++ kiya 
        // 4.isse ye hua ki agar jab jth index pr zero aya to i me increament nahi hua and j ki movement hui tb tk jb tk use non zero element nahi mila jab use non zero element mila to i or jth index ke element swap hogye
// time complexity: O(n)
// space complexity:O(1)

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        for(int j=0;j<nums.size();j++)
        {
            if(nums[j]!=0)
            {
                swap(nums[i],nums[j]);
                i++;
            }
        }
    }
};
