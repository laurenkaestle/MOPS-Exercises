#include <stdio.h>
#include <stdlib.h>

struct node_s {
    int value;
    struct node_s *left;
    struct node_s * right;
};

typedef struct node_s node_t;
node_t *tree;

node_t *new(int value) {
    node_t *node;
    node = (node_t*)malloc(sizeof(node_t));
    if(node != NULL) {
        node->value = value;
        node->left = NULL;
        node->right = NULL;
    }
    return node;
}

int insert(int value) {
    node_t *node = new(value);
    if(node == NULL) {
        return 1;
    }
    if(tree == NULL) {
        tree = node;
    } else {
        node_t *cur = tree;
        node_t *prev = NULL;
        while(cur != NULL) {
            if(value < cur->value) {
                prev = cur;
                cur = cur->left;
            } else {
                prev = cur;
                cur = cur->right;
            }
        }
        if(prev == NULL) {
            return -1;
        }
        if(value < prev->value) {
            prev->left = node;
        } else {
            prev->right = node;
        }
    }
    return 0;
}

void preorder(node_t *head) {
    if(head != NULL) {
        printf("%d\n", head->value);
        preorder(head->left);
        preorder(head->right);
    }
}

void inorder(node_t *head) {
    if(head != NULL) {
        inorder(head->left);
        printf("%d\n", head->value);
        inorder(head->right);
    }
}

void postorder(node_t *head) {
    if(head != NULL) {
        postorder(head->left);
        postorder(head->right);
        printf("%d\n", head->value);
    }
}

void editTraverse(void (*traverse)(node_t *)) {

}

int main() {
    // for testing :)
    insert(5);
    insert(2);
    insert(3);
    insert(7);
    void (*pre)(node_t *) = preorder;
    void (*in)(node_t *) = inorder;
    void (*post)(node_t *) = postorder;
    editTraverse(in);   // could switch this to pre- or post-order very easily!
    return 0;
}