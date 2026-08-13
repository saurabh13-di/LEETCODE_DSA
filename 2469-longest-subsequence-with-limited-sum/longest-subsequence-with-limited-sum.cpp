class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n = nums.size();
        int m = queries.size();

        vector<int> ans(m);

        // 1. Sort nums
        sort(nums.begin(), nums.end());

        // 2. Prefix sum
        for(int i = 1; i < n; i++) {
            nums[i] += nums[i - 1];
        }

        // 3. For every query
        for(int i = 0; i < m; i++) {
            int len = 0;

            for(int j = 0; j < n; j++) {
                if(nums[j] > queries[i])
                    break;

                len++;
            }

            ans[i] = len;
        }

        return ans;
    }
};