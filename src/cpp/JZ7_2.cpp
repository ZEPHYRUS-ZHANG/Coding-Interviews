// 递归方法
/* Example 
index   0   1   2   3   4   5   6 
label   1   1   2   4   8   16  32 ...
*/
class Solution {
public:
    int jumpFloorII(int number) {
        int pre = 1, next = 1;
        if (number == 0)
            return pre;
        else if (number == 1)
            return next;
        else {
            int sum = 0;
            for (int i = 0; i < number; ++i) {
                sum += pre;
                next = sum + next;
                pre = next - sum;
            }
            return sum;
        }
    }
};