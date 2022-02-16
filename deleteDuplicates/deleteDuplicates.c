/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteDuplicates(struct ListNode* head){
    
    struct ListNode *tmp, *t;
    tmp = head;
    while (tmp)
    {
        if (!tmp->next)
            break ;
        if(tmp->val == tmp->next->val)
        {
            t = tmp->next;
            tmp->next = tmp->next->next;
            free(t);
            continue ;
        }
        tmp = tmp->next;          
    }
    return (head);
}
