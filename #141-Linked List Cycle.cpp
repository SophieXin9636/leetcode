/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
inline ListNode* move(ListNode *cur){
    return (cur)? cur->next: NULL;
}

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL) return false;
        ListNode *turtle = head;
        ListNode *hare = head;
        
        do{
            turtle = move(turtle);
            hare = move(move(hare));
            if(hare == NULL && turtle == NULL) return false;
        }while(turtle != hare);
        return true;
    }
};