class Solution {
public:
    int totalMoney(int n) {
        int total = 0;
        for (int d = 0; d < n; ++d) {
            int week = d / 7;
            int dayOfWeek = d % 7;
            total += (week + 1) + dayOfWeek;
        }
        return total;
    }
};
