// probelem:Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

// There is only one repeated number in nums, return this repeated number.

// You must solve the problem without modifying the array nums and using only constant extra space.

// meri approaches:1.using hashmap it worked but in question we have to use constant space complexity
// 2.i have used sorting but in question we dont have to modify the actual array.

// now comes the best approach and that is using floyed detection cycle:
// internally array creates a cycle.

//   Example:

// nums = [1,3,4,2,2]

// Index : 0 1 2 3 4
// Value : 1 3 4 2 2

// Traversal:

// 0 -> 1
// 1 -> 3
// 3 -> 2
// 2 -> 4
// 4 -> 2

// Cycle formed:
// 2 -> 4 -> 2

// So duplicate number = 2


// Dry Run:

// Initial:
// slow = nums[0] = 1
// fast = nums[0] = 1

// Step 1:
// slow = nums[1] = 3
// fast = nums[nums[1]] = nums[3] = 2

// Step 2:
// slow = nums[3] = 2
// fast = nums[nums[2]] = nums[4] = 2

// Meeting point = 2


// Phase 2:

// slow = nums[0] = 1
// fast = 2

// Move both 1 step:

// slow = nums[1] = 3
// fast = nums[2] = 4

// slow = nums[3] = 2
// fast = nums[4] = 2

// Both meet at 2

// Hence duplicate number = 2

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow=nums[0];
        int fast=nums[0];
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        }while(slow!=fast);

        slow=nums[0];
        while(slow!=fast)
        {
            slow=nums[slow];
            fast=nums[fast];
        }

        return slow;
    }
};

// time complexity:O(n)
// space complexity:O(1)
