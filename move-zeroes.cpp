class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int lenn = nums.size(), counter = 0;
        for (int i = 0; i < lenn; i++) {
		// search for non zero element
            if (nums[i]) {
			// Assign all non zero integers to first counter terms
                nums[counter] = nums[i];
                counter++;
            }
        }
		// iterate from counter to the end and make all rest of the integers zero
        for (int i = counter; i < lenn; i++) {
            nums[i] = 0;
        }
    }

};
