class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> posSpeed;
        vector<double> stackTime;

        for(int i = 0; i<position.size();i++)
        {
            posSpeed.push_back({position[i],speed[i]});

        }

        sort(posSpeed.rbegin(), posSpeed.rend());
        for(auto i:posSpeed)
        {
             auto time = (double)(target-i.first)/i.second;
             stackTime.push_back(time);
             if (stackTime.size() >= 2 &&
                stackTime.back() <= stackTime[stackTime.size() - 2])
            {
                stackTime.pop_back();
            }

        }
        return stackTime.size();

    }
};
