class Solution {
   public:
    int maxArea(vector<int>& heights) {
        int size = heights.size();
        int left = 0, right = size - 1;

        int maxArea = calArea(heights, left, right);

        while (right > left) {
            if (heights[left] >= heights[right]) {
                right--;

            } else {
                left++;
            }
            int currentArea = calArea(heights, left, right);
            if (currentArea > maxArea) {
                maxArea = currentArea;
            }
        }

        return maxArea;
    }

    int calArea(const vector<int>& heights, int left, int right) {
        int area = min(heights[left], heights[right]) * (right - left);
        return area;
    }
};
