class Solution {
public:
    bool isValid(string s) {

        stack<char> myStack;
        unordered_map<char, char> closeToOpen = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };


        for(auto ch:s)
        {   
            if(closeToOpen.count(ch))
            {
            if(!myStack.empty() && myStack.top()==closeToOpen[ch])
            {
                myStack.pop();
            }
            else
            {
                return false;
    
            }
            }
            else{
                myStack.push(ch);
            }            

        }

        if(myStack.empty())
        {
            return true;
        }

        return false;

    }
};
