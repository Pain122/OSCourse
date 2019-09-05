#include <stdio.h>
#include <stdlib.h>

typedef struct n {
    int value;
    struct n *next;
} node;

node* createNode(int n) {
    node* node1;
    node1 = (node*)malloc(sizeof(node));
    node1 -> value = n;
    node1 ->next = NULL;
    return node1;
}

void printList(node* n) {
    if (n != NULL) {
        node* node1 = n;
        while (node1 -> next != NULL) {
            printf("%d, ", node1->value);
            node1 = node1->next;
        }
        printf("%d.\n", node1->value);
    }
}

void insertnode (node* head, int a) {
    node* n1 = createNode(a);
    if (head == NULL) {
        head = n1;
    } else {
        n1->next = head->next;
        head->next = n1;
    }
}

void deletenode (node* head, node* a) {
    node* node1 = head;
    while (node1->next != a) {
        node1 = node1->next;
    }
    node1->next = a->next;
    free(a);
}

int main(){
    node* head = createNode(3);
    printList(head);
    insertnode(head, 4);
    printList(head);
    node* n = head->next;
    insertnode(n, 6);
    printList(head);
    deletenode(head, n);
    printList(head);
}
