class Solution {
public:
    string defangIPaddr(std::string address) {
        string temp;
        for (char hehe : address) {
            if (hehe == '.') {
                temp += "[.]";
            } else {
                temp += hehe;
            }
        }
        return temp;
    }
};
