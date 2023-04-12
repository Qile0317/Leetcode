class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0, product = 1;
        int digit;
        while (n > 0) {
            digit = n % 10;
            sum += digit;
            product *= digit;
            n /= 10;
        }
        return product - sum;
    }
};

/* // less efficient version based on an initial mathematical formulation, though still beat 100% of leetcode submissions
int subtractProductAndSum(int n) {
    int sum = 0, product = 1;
    int digit = 0, b;
    if (n == 1) {return 0;}
    for (int i = 0; i < log10(n); i++) {
        b = pow(10, i);
        digit = ((n % (int)(b*10)) - (n % b)) / (b);
        sum += digit;
        product *= digit;
    }
    return product - sum;
}
*/