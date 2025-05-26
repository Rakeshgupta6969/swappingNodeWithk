/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
 class Solution {
    public:
        ListNode* swapNodes(ListNode* head, int k) {
        // using the brute force solution.
    
    
        if(head == NULL || head -> next == NULL) return head;
    
        vector<int> ans;
    
        ListNode * temp = head;
    
        while( temp != NULL){
    
        ans.push_back(temp -> val);
        temp = temp -> next;
    
        }
        
         int n = ans.size();
    
        swap(ans[k-1],ans[n-k]);
    
        
            ListNode* dummy = new ListNode(-1);
    
            ListNode* temp2 = dummy;
    
            for(int i = 0; i<ans.size(); i++){
             
             ListNode* temp3 = new ListNode(ans[i]);
    
             temp2 -> next = temp3;
             temp2 = temp3;
    
            }
    
            return dummy -> next;
    
    
    
    
        }
    };