class Solution {
public:
    int maxArea(vector<int>& height) {
        int water = 0,n=height.size();
        int lp=0,rp=n-1;
        while(lp<rp){
           
            int w= rp-lp;
            int ht = min(height[lp],height[rp]);
            int area = w*ht;
                water = max(area,water);
            height[lp]<height[rp]?lp++:rp--;
            }
    return water;}
};