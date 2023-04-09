// Power of two _ Leetcode Sol'ns:
✔️ Solution - I (Recursive)

If a number is power of two, it can be recursively divided by 2 till it becomes 1
If the start number is 0 or if any intermediate number is not divisible by 2, we return false
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(!n) return false;
        if(n == 1) return true;
        return n % 2 == 0 and isPowerOfTwo(n / 2);
    }
};
Python

class Solution:
    def isPowerOfTwo(self, n):
        if n == 0: return False
        return n == 1 or (n % 2 == 0 and self.isPowerOfTwo(n // 2))
Time Complexity : O(logn), where n is the given input number
Space Complexity : O(logn), required for recursive stack

✔️ Solution - II (Iterative)

The same solution as above but done iteratively

C++

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n == 0) return 0;
        while(n % 2 == 0) 
            n /= 2;
        return n == 1;
    }
};
Python

class Solution:
    def isPowerOfTwo(self, n):
        if n == 0: return False
        while n % 2 == 0:
            n /= 2
        return n == 1
Time Complexity : O(logn), where n is the given input number
Space Complexity : O(1)

✔️ Solution - III (Log2 n)

If n is power of 2, log2(n) will always be integer, or more specifically, the power to which 2 must be raised to get n. Thus we only need to check if result of log2(n) is an integer or not.

C++

class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n && log2(n) == trunc(log2(n));
    }
};
Python

class Solution:
    def isPowerOfTwo(self, n):
        return n > 0 and log2(n) == trunc(log2(n))
Time Complexity : O(logn)
Space Complexity : O(1)

✔️ Solution - IV (Pattern in Power of 2)

If a number is a power of 2, we can observe that it will always have just a single set bit in its binary representation. So, we can just count number of set bits and determine if n is power of 2 or not from that.

C++

class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n > 0 && __builtin_popcount(n) == 1;
		// or: return  n > 0 && popcount(n) == 1;       // since C++20
		// or: return n > 0 && has_single_bit(n);       // since C++20
    }
};
Python

class Solution:
    def isPowerOfTwo(self, n):
        return n > 0 and bin(n).count('1') == 1
Time Complexity : O(logn)
Space Complexity : O(1)

✔️ Solution - V (Bit-Trick)

There's a nice bit-trick that can be used to check if a number is power of 2 efficiently. As already seen above, n will only have 1 set bit if it is power of 2. Then, we can AND (&) n and n-1 and if the result is 0, it is power of 2. This works because if n is power of 2 with ith bit set, then in n-1, i will become unset and all bits to right of i will become set. Thus the result of AND will be 0.

If n is a power of 2:
n    = 8 (1000)
n-1  = 7 (0111)
----------------
&    = 0 (0000)         (no set bit will be common between n and n-1)

If n is not a power of 2:
n    = 10 (1010)
n-1  =  9 (1001)
-----------------
&    =  8 (1000)         (atleast 1 set bit will be common between n and n-1)
C++

class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n > 0 && !(n & (n-1));
    }
};
Python

class Solution:
    def isPowerOfTwo(self, n):
        return n > 0 and n & (n-1) == 0
Time Complexity : O(1)
Space Complexity : O(1)

✔️ Solution - VI (Math)

Only a power of 2 will be able to divide a larger power of 2. Thus, we can take the largest power of 2 for our given range and check if n divides it

C++

class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n > 0 and (1 << 31) % n == 0;
    }
};
Python

class Solution:
    def isPowerOfTwo(self, n):
        return n > 0 and (1 << 31) % n == 0
Time Complexity : O(1)
Space Complexity : O(1)

✔️ Solution - VII (Pre-Compute all powers of 2)

We can simply precompute all powers of 2, store it in hashset and check if n is present in it.

C++

unordered_set<int> powOf2;
auto _ = [](){
    for(int i = 0, n = 1; i < 31; i++, n <<= 1) powOf2.insert(n);
    return 0;
}();
class Solution {
public:
    bool isPowerOfTwo(int n) {
        return powOf2.count(n);
    }
};
Python

pow_of_2 = set(2**i for i in range(31))
class Solution:    
    def isPowerOfTwo(self, n):
        return n in pow_of_2
Time Complexity : O(1)
Space Complexity : O(1)