// Suppose we have single linked list.
   
typedef struct Node {
    user_type    value;
    struct node *next;
} Node_t;


bool
listHasCircle(Node_t *head)
{
    if (!head)
        return false;
   
    fast = head->next;
    if (!fast)
        return false;
   
    slow = head;
    while (slow != fast) {
        slow = slow->next;
       
        for (i = 0; i < 2; i++)
            if (fast->next) {
                fast = fast->next;
            else
                return false;
            }   
       
    }
    return true;
}
