class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;
        unordered_set<int> st;

        for (int num : arr) {
            freq[num]++;
        }

        for (auto it : freq) {

            int count = it.second;

            if (st.find(count) != st.end()) {
                return false;
            }

            st.insert(count);
        }

        return true;
    }
};