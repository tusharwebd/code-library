class Solution {
public:
    bool isHappy(int n) {
        unordered_set <int> arr;
        while(n!=1)
        {
            int sum = 0;
            int num = n;
        while(num!=0)
        {
            sum += (num % 10)*(num % 10);
            num = num / 10;
        }
         if(arr.find(sum)!=arr.end())
         {
            arr.erase(sum);
             return false;
         }
        arr.insert(sum);
        n = sum;

    }
        return 1;
    }
};
