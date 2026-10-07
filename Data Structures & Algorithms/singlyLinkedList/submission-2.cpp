class ListNode{
    public:
    int val;
    ListNode* next;


    ListNode(int val):val(val),next(nullptr){}
    ListNode(int val, ListNode* next):val(val),next(next){}

};


class LinkedList {

    ListNode* head;
    ListNode* tail;

public:
    LinkedList() {

        head = new ListNode(-1);
        tail = head;

    }

    int get(int index) {

        ListNode* curr = head->next;
        int i = 0;
        while(curr!=nullptr)
        {   if(i==index)
            {
                return curr->val;
            }
            curr=curr->next;
            i++;
        }
        return -1;

    }

    void insertHead(int val) {
        ListNode* newNode = new ListNode(val);
        newNode->next = head->next;
        head->next = newNode;

        if(newNode->next == nullptr )
        {
            tail=newNode;
        }

    }
    
    void insertTail(int val) {
        ListNode* newNode = new ListNode(val);
        tail->next = newNode;
        tail=newNode;

    }

    bool remove(int index) {
        ListNode* curr=head;
        int i = 0;
        while(i<index && curr!=nullptr)
        {   curr=curr->next;
            i++;
        }

        if(curr!=nullptr && curr->next!=nullptr)
        {   
            if(curr->next == tail)
            {tail=curr;}
            
            ListNode* toDelete = curr
            ->next;
            curr->next = curr->next->next;

            delete toDelete;
            return true;

        }

        return false;

    }

    vector<int> getValues() {
        
        ListNode* curr = head->next;
        vector<int> res;
        while(curr!=nullptr)
        {   
            res.push_back(curr->val);
            curr=curr->next;
        }
        return res;
    
    
    }
};
