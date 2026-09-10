class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> st;

        // Store unique elements
        for (int i = 0; i < nums.size(); i++) {
            st.insert(nums[i]);
        }

        // Put unique elements back into nums
        int i = 0;
        for (auto x : st) {
            nums[i] = x;
            i++;
        }

        return st.size();
    }
};