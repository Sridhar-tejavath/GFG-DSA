class Solution {
  public:
      int replaceBit(int n, int k) {
          int bits = 0;
          int temp = n;

          while (temp > 0) {
              bits++;
              temp >>= 1;
          }

          // k exceeds number of bits
          if (k > bits)
              return n;

          int pos = bits - k;

          // Clear kth bit from left
          n = n & ~(1 << pos);

          return n;
      }
  };