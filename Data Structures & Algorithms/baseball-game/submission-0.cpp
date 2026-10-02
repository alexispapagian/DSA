class Solution {
public:
    int calPoints(vector<string>& operations) {

        stack<int> stackOp;
        int res = 0;

        for(auto op:operations){

            if (op=="+"){
                int top=stackOp.top(); 
                stackOp.pop();
                int newtop=stackOp.top();
                int sum = top+newtop;
                stackOp.push(top);
                stackOp.push(sum);
                res+=sum;
            }
            else if (op=="C")
            {   
                res-=stackOp.top();
                stackOp.pop();
                
            }   
            else if (op=="D")
            {
                int top=stackOp.top();
                int newTop = 2*stackOp.top();
                stackOp.push(newTop); 
                res+=newTop;

            }
            else
            {
                stackOp.push(stoi(op));
                res += stackOp.top();
            }
            




        }
        
        return res;
        
    }
};