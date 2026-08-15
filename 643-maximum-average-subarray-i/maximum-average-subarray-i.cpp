class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        double MaxAvg=INT_MIN;
        double Avg=0;
        double sum=0;
        for(int i=0;i<k;i++){
           sum+=nums[i];
        }
        Avg=sum/k;
        MaxAvg=Avg;
        int i=1;
        int j=k;
        while(j<n){
            sum=sum+nums[j]-nums[i-1];
            Avg=sum/k;
            if(MaxAvg<Avg) MaxAvg=Avg;
            i++;
            j++;
        }
        return MaxAvg;
    }
};