class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int matrixSize = nums.size();
        vector<int> prefix(matrixSize);
        vector<int> postfix(matrixSize);
        vector<int> result(matrixSize);

        prefix[0]=1;
        postfix[matrixSize-1]=1;

        for (int i = 1; i < matrixSize; i++) {
            
            prefix[i] = nums[i-1]*prefix[i-1];
        }

        int postfixval = 1;
        for (int i = matrixSize-2; i >= 0; i--) {
        
            postfix[i] = nums[i + 1] * postfix[i + 1];
        }

        for (int i = 0; i < matrixSize; i++){
            result[i] = prefix[i] * postfix[i];

        }

        return result;

    }
};
