#include <stdio.h>
#include <stdlib.h>

struct node_s {
    int value;
    struct node_s *next;
};

struct node_s *list;

struct node_s *new(int value) {
    struct node_s *node = (struct node_s *)malloc(sizeof(struct node_s));
    if(node) {
        node->value = value;
        node->next = (struct node_s *)0;
    }
    return node;
}

int insert(int value) {
    struct node_s *node = new(value);
    if(!new) {
        return 1;
    }
    if(!list) {
        list = node;
    } else {
        struct node_s *prev;
        struct node_s *cur = list;
        while(cur) {
            prev = cur;
            cur = cur->next;
        }
        if(!prev) {
            return 1;
        }
        prev->next = node;
    }
    return 0;
}

void freeLinkedList(struct node_s *cur) {
    if(cur != NULL) {
        freeLinkedList(cur->next);
        free(cur);
    }
}

int main() {
    insert(5);
    insert(2);
    insert(7);
    freeLinkedList(list);
    return 0;
}