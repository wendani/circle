// Suppose we have single linked list.
   
#include <stdbool.h>

typedef struct Node {
    int value;
    struct Node *next;
} Node_t;

// a -> b -> c -> d -> null. return false
// a -> b -> c -> d -> b.    return true

// 1. a->null
// 2. a -> b -> null
// 3. a -> b -> c -> b

bool
listHasCircle(Node_t *head)
{
    Node_t *slow, *fast;
    int i;

    if (!head)
        return false;
   
    fast = head->next;
    if (!fast)
        return false;
   
    slow = head;
    while (slow != fast) {
        slow = slow->next;
       
        for (i = 0; i < 2; i++)
            if (fast->next)
                fast = fast->next;
            else
                return false;
    }
    return true;
}
