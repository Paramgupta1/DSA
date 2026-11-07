class Solution {
    bool ispossible(vector<int>& piles, int mid, int h) {
        long long hour = 0; 
        for (int i = 0; i < piles.size(); i++) {
            hour += (piles[i] + (long long)mid - 1) / mid;
            if (hour > h) return false;
        }
        return true;
    }

public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi = INT_MIN;
        for (int i = 0; i < piles.size(); i++) {
            if (piles[i] > maxi) maxi = piles[i];
        }
        
        int s = 1, e = maxi;
        int ans = maxi;
        
        while (s <= e) {
            int mid = s + (e - s) / 2;
            
            if (ispossible(piles, mid, h)) {
                ans = mid;
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }
        return ans;
    }
};
