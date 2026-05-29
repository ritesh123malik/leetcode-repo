class Solution {
public:
    struct Compare {
        bool operator()(const ListNode* a, const ListNode* b) {
            return a->val > b->val;
        }
    };
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, Compare> minHeap;
        
        // Add first node of each list to heap
        for (ListNode* list : lists) {
            if (list) {
                minHeap.push(list);
            }
        }
        
        ListNode* dummy = new ListNode(0);
        ListNode* current = dummy;
        
        while (!minHeap.empty()) {
            ListNode* node = minHeap.top();
            minHeap.pop();
            
            current->next = node;
            current = current->next;
            
            if (node->next) {
                minHeap.push(node->next);
            }
        }
        
        return dummy->next;
    }
};