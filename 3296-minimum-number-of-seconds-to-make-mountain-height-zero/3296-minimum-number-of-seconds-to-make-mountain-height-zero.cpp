class Solution {
public:
    bool can(long long mid, int mountainHeight, vector<int>& workerTimes) {
        long long total = 0;

        for (int t : workerTimes) {
            long long k = (sqrt(1 + (8.0 * mid) / t) - 1) / 2;
            total += k;
            if (total >= mountainHeight) return true;
        }

        return false;
    }

    long long minNumberOfSeconds(int mountainHeight, vector<int>& workerTimes) {
        long long low = 0;
        long long high = 1e18;
        long long ans = high;

        while (low <= high) {
            long long mid = low + (high - low) / 2;

            if (can(mid, mountainHeight, workerTimes)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }
};