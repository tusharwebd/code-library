class Solution {
public:
  int sqrt(int x) {
  double ans    = x;
  double delta  = 0.0001;
  while (fabs(pow(ans, 2) - x) > delta) {
      ans = (ans + x / ans) / 2;
  }
  return ans;
}
};
