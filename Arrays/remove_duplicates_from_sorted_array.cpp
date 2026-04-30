//problem:remove duplicate from sorted array
//concept: two pointer approach
//approach:
// 1.humne yha ek pointer liya i jo fisrt index ko point kr rha hai 
// 2.then hummne ek loop lgaya 1 index s
// 3.agr a[j] not equal to a[i] hai to i++ kro or a[i] me a[j] dalo
// 4.wrna agr equal hue to unko skip krao j++
//5.return i+1;


// time complexity: O(n)
// space complexity:O(1)

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       if(nums.size() == 0) return 0;

        int i = 0;

        for(int j = 1; j < nums.size(); j++) {
            if(nums[j] != nums[i]) {
                i++;
                nums[i] = nums[j];
            }
        }

        return i + 1;
    }
};
