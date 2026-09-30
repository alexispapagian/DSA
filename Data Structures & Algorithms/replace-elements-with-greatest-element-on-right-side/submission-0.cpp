class Solution {
   public:
    vector<int> replaceElements(vector<int>& arr) {
        int length = arr.size();
        vector<int> newArr(length);

        int rightMax = -1;

        for (int i = length - 1; i >= 0; --i) {
            newArr[i] = rightMax;
            rightMax = max(arr[i], rightMax);

        }

        return newArr;
    }
};