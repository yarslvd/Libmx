#include "../inc/libmx.h"

void mx_push_back(t_list **list, void *data) {
    if(!data){
        return;
    }

    t_list *nodeBack = mx_create_node(data);
    t_list *last = *list;

    if(*list == NULL || list == NULL){
        *list = last;
        return;
    }

    while(last->next != NULL){
        last = last->next;
    }

    last->next = nodeBack;
}
