class Solution {
public:
    bool isonlyalpha(string s) {
        for (char ch : s) {
            if (ch >= 'a' && ch <= 'z') {
            } else {
                return false;
            }
        }
        return true;
    }
    bool isonlynum(string s) {
        for (char ch : s) {
            if (ch >= '0' && ch <= '9') {
            } else {
                return false;
            }
        }
        return true;
    }
    int maximumValue(vector<string>& strs) {
        vector<int> temp;
        for (string st : strs) {
            if (!isonlyalpha(st) && !isonlynum(st)) {
                temp.push_back(st.size());
            } else if (isonlyalpha(st) && !isonlynum(st)) {
                temp.push_back(st.size());
            } else if (isonlynum(st)) {
                temp.push_back(stoi(st));
            }
        }
        int maxi = INT_MIN;
        for (int hehe : temp) {
            if (hehe > maxi) {
                maxi = hehe;
            }
        }
        return maxi;
    }
};
