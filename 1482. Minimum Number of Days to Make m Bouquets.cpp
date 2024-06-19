class Solution {
public:
    int minDays(vector<int>& arr, int m, int k) {
        int n = arr.size();
        if (static_cast<long long>(m) * k > n) {
            return -1;
        }

        int left = *min_element(arr.begin(), arr.end());
        int right = *max_element(arr.begin(), arr.end());

        while (left < right) {
            int mid = left + (right - left) / 2;
            if (canMakeBouquets(arr, mid, m, k)) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }

        return left;
    }

private:
    bool canMakeBouquets(const vector<int>& arr, int days, int m, int k) {
        int counter = 0;
        int bouquets = 0;

        for (int i = 0; i < arr.size(); ++i) {
            if (arr[i] <= days) {
                counter++;
                if (counter == k) {
                    bouquets++;
                    counter = 0;
                    if (bouquets == m) {
                        return true;
                    }
                }
            } else {
                counter = 0;
            }
        }

        return false;
    }
};
