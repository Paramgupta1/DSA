class Solution {
    bool ispossible(vector<int> &arr,int mid, int m) {
        int mag = 1;
        int pos =arr[0];
        for(int i=1;i<arr.size();i++){
            if(arr[i]-pos>=mid){
                mag++;
                pos = arr[i];
            }
            if(mag==m)
                return true;
        }
        return false;
    }
public:
    int maxDistance(vector<int>& arr, int m) {
        
    sort(arr.begin(),arr.end());
        
        int s=1;
        int n=arr.size();
        int e=arr[n-1]-arr[0];
        
        int ans =-1;
        while(s<=e){
            int mid =(s+e)/2;
            if(ispossible(arr,mid,m)){
                ans=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return ans;
    }
};