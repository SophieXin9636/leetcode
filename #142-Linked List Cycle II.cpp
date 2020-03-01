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
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL) return NULL;
        ListNode *turtle = head;
        ListNode *hare = head;
        
        do{
            turtle = move(turtle);
            hare = move(move(hare));
            if(hare == NULL && turtle == NULL) return NULL;
        }while(turtle != hare);
        
        turtle = head;
        while(turtle != hare){
            turtle = move(turtle);
            hare = move(hare);
        }
        return turtle;
    }
};