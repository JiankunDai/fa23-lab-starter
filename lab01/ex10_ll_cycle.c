#include <stddef.h>
#include "ex10_ll_cycle.h"

int ll_has_cycle(node *head) {
    /* TODO: Implement ll_has_cycle */
    node* fast_ptr = head;
    node* slow_ptr = head;
    while (1)
    {
        if (fast_ptr == NULL) return 0;
        fast_ptr = fast_ptr->next;
        if (fast_ptr == NULL) return 0;
        fast_ptr = fast_ptr->next;
        if (fast_ptr == NULL) return 0;
        slow_ptr = slow_ptr->next;
        if (fast_ptr == slow_ptr)
        {
            return 1;
        }
    }
    
}
