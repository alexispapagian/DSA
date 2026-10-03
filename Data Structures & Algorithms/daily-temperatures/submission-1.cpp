class Solution {
   public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> result(temperatures.size(), 0);
        stack<pair<int, int>> stackTemp;

        for (int i = 0; i < temperatures.size(); i++) {
            while (!stackTemp.empty() && temperatures[i] > stackTemp.top().second) {
                int index = stackTemp.top().first;
                stackTemp.pop();

                result[index] = i - index;
            }

            stackTemp.push({i, temperatures[i]});
        }

        return result;
    }
};
