
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> fre;

        for (int i = 0; i < nums.size(); i++) {
            fre[nums[i]]++;

            if (fre[nums[i]] > nums.size() / 2) {
                return nums[i];
            }
        }

        return -1;
    }
};
