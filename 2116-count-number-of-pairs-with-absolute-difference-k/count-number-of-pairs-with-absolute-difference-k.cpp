class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int n=nums.size();
        int pair=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(abs(nums[i]-nums[j])==k){
                    pair++;
                }
            }
        }
        return pair;
    }
};