
class Solution {
public:

    vector<int> NSL(vector<int>& arr, int n) {
        vector<int> result(n);
        stack<int> st;

        for (int i = 0; i < n; i++) {

            while (!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }

            if (!st.empty()) {
                result[i] = st.top();
            }
            else {
                result[i] = -1;
            }

            st.push(i);
        }

        return result;
    }

    vector<int> NSR(vector<int>& arr, int n) {
        vector<int> result(n);
        stack<int> st;

        for (int i = n - 1; i >= 0; i--) {

            while (!st.empty() && arr[st.top()] > arr[i]) {
                st.pop();
            }

            if (!st.empty()) {
                result[i] = st.top();
            }
            else {
                result[i] = n;
            }

            st.push(i);
        }

        return result;
    }

    int sumSubarrayMins(vector<int>& arr) {

        int n = arr.size();

        vector<int> left = NSL(arr, n);
        vector<int> right = NSR(arr, n);

        long long sum = 0;
        int mod = 1e9 + 7;

        for (int i = 0; i < n; i++) {

            long long ls = i - left[i];
            long long rs = right[i] - i;

            long long totalways = ls * rs;

            long long totalsum = arr[i] * totalways;

            sum = (sum + totalsum) % mod;
        }

        return sum;
    }
};
