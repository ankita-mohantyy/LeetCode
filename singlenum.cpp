class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        int i = 0;
        while (i<nums.size()-1) {
            if (nums[i]!=nums[i+1]) {
                return nums[i];
            }
            i+=2;
        }
        return nums[nums.size()-1];  
    }
};

/*int result = 0;
        for (int num : nums) {
            result ^= num; // XORing all elements cancels out pairs
        }
        return result;
        
        this is the optimal solution and i got to know the use of XOR i.e for these kind of ques.
        [It compares each corresponding bit of two numbers and returns 1 if the bits are different, and 0 if they are the same]*/