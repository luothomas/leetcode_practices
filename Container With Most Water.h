class Solution {
public:
    int maxArea(vector<int>& height) {
        int volume = 0, h = height.size();
        int i  = 0, j = h - 1;
        while(i < j)
        {
            if(height[i] > height[j])
            {
                volume = max(volume, (j-i) * height[j]);
                j--;
            }
            else
            {
                volume = max(volume, (j-i) * height[i]);
                i++;
            }
        }
        return volume;
    }
};