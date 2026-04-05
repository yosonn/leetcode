class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0, r = s.size() - 1;

        while (l < r) {
            // 跳過非字母數字
            while (l < r && !isalnum(s[l])) l++;
            while (l < r && !isalnum(s[r])) r--;

            // 比較（轉小寫）
            if (tolower(s[l]) != tolower(s[r])) {
                return false;
            }

            l++;
            r--;
        }

        return true;
    }
};
