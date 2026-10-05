class TimeMap {
public:
    unordered_map<string,vector<pair<int,string>>> keyStore;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) { 
       
        keyStore[key].emplace_back(timestamp,value);
        
    }
    
    string get(string key, int timestamp) {

        vector<pair<int,string>>& values = keyStore[key];// reference otherwise copies which is O(n)
        int left = 0, right = values.size()-1;

        string result = "";
        while(left<=right)
        {   // Overflow-safe midpoint: (left+right)/2 can overflow for large indices,
            // but (right-left) can't, so left + (right-left)/2 stays in bounds.
            // Also rounds down, guaranteeing mid < right so the loop always progresses.
            int middle = left + (right - left) / 2;
            if(timestamp>=values[middle].first)
            {   
                result = values[middle].second;
                left = middle + 1;
            }
            else{

                right = middle - 1;
            }


        }

        return result;

        
    }
};
