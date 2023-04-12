class Solution {
public:
    int hammingWeight(uint32_t n) {
        int hamming_weight = 0;
        uint32_t mask = 2 << 30;
        for (int i = 0; i < 32; i++) {
            if ((mask & n) == mask) {
                hamming_weight++;
            }
            mask = mask >> 1;
        }
        return hamming_weight;
    }
};