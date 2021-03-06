class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size()-1;
        int area = 0;
        while(i < j)
        {
            int h = min(height[i],height[j]);
            area = max(area,(j-i)*h);
            while(height[i]<=h && i < j)
                i++;
            while(height[j]<=h && j > i)
                j--;
        }
        return area;
    }
};
