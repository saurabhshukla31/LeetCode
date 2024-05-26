class Solution {
public:
    int largestInteger(int num) {
        vector<int> temp;
        while (num != 0) {
            int rem = num % 10;
            temp.push_back(rem);
            num /= 10;
        }
        vector<int> even;
        vector<int> odd;
        for (auto it : temp) {
            if (it % 2 == 0) {
                even.push_back(it);
            } else {
                odd.push_back(it);
            }
        }
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end());
        string ans;
        int i = 0, j = 0;
        for (int k = 0; k < temp.size(); k++) {
            if (temp[k] % 2 == 0) {
                ans += to_string(even[i]);
                i++;
            } else {
                ans += to_string(odd[j]);
                j++;
            }
        }
        reverse(ans.begin(), ans.end());
        return stoi(ans);
    }
};
