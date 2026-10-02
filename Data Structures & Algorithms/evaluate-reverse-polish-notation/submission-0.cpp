class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stackOp;
        for(auto token:tokens)
        {
            if(token=="+")
            {
                int a = stackOp.top(); stackOp.pop();
                int b = stackOp.top(); stackOp.pop();
                int sum = a+b;
                stackOp.push(sum);
            }
            else  if(token=="-")
            {
                int a = stackOp.top(); stackOp.pop();
                int b = stackOp.top(); stackOp.pop();
                int dim = b-a;
                stackOp.push(dim);
            }
            else  if(token=="*")
            {
                int a = stackOp.top(); stackOp.pop();
                int b = stackOp.top(); stackOp.pop();
                int mult = b*a;
                stackOp.push(mult);
            }
            else  if(token=="/")
            {
                int a = stackOp.top(); stackOp.pop();
                int b = stackOp.top(); stackOp.pop();
                int div = (int)b/a;
                stackOp.push(div);
            }
            else
            {
                stackOp.push(stoi(token));
            }

        }
        return stackOp.top();
    }
};
