class Solution {
public:
    int fib(int n) {
        if (n <= 1) {
            return n;
        }
        int prev2 = 0;
        int prev1 = 1;

        int curr = 0;
        int ans;
        for (int i = 2; i <= n; i++) {
            curr = prev1 + prev2;
            prev2 = prev1;
            prev1 = curr;
        }
        return curr;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna