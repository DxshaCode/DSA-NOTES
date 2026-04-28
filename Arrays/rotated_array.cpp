// Problem: Check if array is sorted and rotated

// Concept:
// Count number of breaks (nums[i] > nums[i+1])

// Approach:
// If breaks <= 1 → true else false

// Time Complexity: O(n)
// Space Complexity: O(1)

// Code:
class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        int n = nums.size();

        for(int i = 0; i < n; i++) {
            if(nums[i] > nums[(i+1) % n]) {
                count++;
            }
        }
        if(count<=1) return true;
        else return false;
    }
};

// 🔴 Mistake:
// Initially used complex pivot logic

// 🟢 Learning:
// Count break trick is simpler
