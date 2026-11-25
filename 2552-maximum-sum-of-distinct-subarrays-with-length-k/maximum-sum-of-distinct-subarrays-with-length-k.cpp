class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();

        long long sum = 0;
        long long maxsum = 0;

        unordered_map<int, int> p;

        for(int i = 0; i < k; i++) {
            sum += nums[i];
            p[nums[i]]++;
        }

        if(p.size() == k) {
            maxsum = sum;
        }

        int j = 0;

        for(int m = k; m < n; m++) {

            sum += nums[m] - nums[j];

            p[nums[m]]++;

            p[nums[j]]--;

            if(p[nums[j]] == 0) {
                p.erase(nums[j]);
            }

            j++;

            if(p.size() == k) {
                maxsum = max(maxsum, sum);
            }
        }

        return maxsum;
    }
};