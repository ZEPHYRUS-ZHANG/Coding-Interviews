//使用直接递归的方法计算f(n)=f(n-1)+f(n-2)+...+f(1),当n>=3时就会报错
class Solution {
public:
    int jumpFloorII(int number) {
        if (number == 1 || number == 2)
            return number;
        else {
            int sum = 0;
            for (int i = 1; i <= number; ++i) {
                sum += jumpFloorII(i);
            }
            return sum;
        }
    }
};