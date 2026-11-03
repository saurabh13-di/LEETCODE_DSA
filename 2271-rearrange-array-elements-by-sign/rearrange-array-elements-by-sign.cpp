class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>arr(n,0);
        int i=0;
        int j=1;
        int k=0;
        while(k<n){
            if(nums[k]>0){
             arr[i]=nums[k];
             i=i+2;
            }
            if(nums[k]<0){
                arr[j]=nums[k];
                j=j+2;
            }
            k++;
        }
        return arr;
    }
};