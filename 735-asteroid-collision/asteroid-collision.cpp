
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {

        stack<int> st;

        for(int i = 0; i < asteroids.size(); i++) {

            bool alive = true;

            while(!st.empty() && st.top() > 0 && asteroids[i] < 0) {

                if(abs(asteroids[i]) > st.top()) {
                    st.pop();
                }
                else if(abs(asteroids[i]) == st.top()) {
                    st.pop();
                    alive = false;
                    break;
                }
                else {
                    alive = false;
                    break;
                }
            }

            if(alive) {
                st.push(asteroids[i]);
            }
        }

        vector<int> ans(st.size());

        for(int i = st.size() - 1; i >= 0; i--) {
            ans[i] = st.top();
            st.pop();
        }

        return ans;
    }
};
