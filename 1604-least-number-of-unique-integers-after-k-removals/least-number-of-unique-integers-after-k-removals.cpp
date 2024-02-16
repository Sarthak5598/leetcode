class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int, int> map;
        for (int num : arr) {
            map[num]++;
        }

        vector<int> freqCounts;
        for (auto& [num, freq] : map) {
            freqCounts.push_back(freq);
        }

        sort(freqCounts.begin(), freqCounts.end());

        int count = freqCounts.size();
        int idx = 0;
        while (k > 0 && idx < freqCounts.size()) {
            if (k >= freqCounts[idx]) {
                k -= freqCounts[idx];
                count--;
            } else {
                break;
            }
            idx++;
        }

        return count;
    }
};
