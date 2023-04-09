//Leetcode Prob.190
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int result = 0;
        for(int i=0; i<32; i++){
            int lsb = n&1;
            int revbit = lsb<<(31-i);
            result = result | revbit;
            n = n>>1;
        }
        return result;
    }
};