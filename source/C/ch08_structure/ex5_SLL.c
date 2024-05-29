#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main(){
    // 规过 1.
    struct node *head = 0;

    struct node *a = (struct node*)malloc(sizeof(struct node));
    a->data = 10; a->next = 0;

    struct node *b = (struct node*)malloc(sizeof(struct node));
    b->data = 20; b->next = 0;

    struct node *c = (struct node*)malloc(sizeof(struct node));
    c->data = 30; c->next = 0;

    head = a;
    a->next = b;
    b->next = c;

    struct node *cur = head;
    while (cur != 0){
        printf("%d ", cur->data);
        cur = cur->next;
    }

    // 规过 2.
}