class Solution {
public:
    bool isPalindrome(int x) {

        string digit = to_string(x);
        int s = 0;
        int e = digit.length() - 1;

        while (s < e) {
            if (digit[s]!= digit[e]) {
                return false;

            } 
            s++;
            e--;
        }
        return true;
    }
};