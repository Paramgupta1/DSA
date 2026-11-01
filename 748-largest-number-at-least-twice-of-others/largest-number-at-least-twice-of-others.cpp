
class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxi = -1, secmax = -1;
        int index = -1;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > maxi) {
                secmax = maxi;
                maxi = nums[i];
                index = i;
            }
            else if (nums[i] > secmax) {
                secmax = nums[i];
            }
        }

        if (maxi >= 2 * secmax) {
            return index;
        }

        return -1;
    }
};
