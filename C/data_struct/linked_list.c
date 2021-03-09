#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int value;
    struct node* next;
}node;

void print_list(node *head){
    while(head != NULL){
        printf("%d - ", head->value);
        head = head->next;
    }

}

int main(void){
    node *head = malloc(sizeof(node));
    node *second = malloc(sizeof(node));
    node *third = malloc(sizeof(node));

    head->value = 1;
    head->next = second;

    second->value = 2;
    second->next = third;

    third->value = 3;
    third->next = NULL;

    print_list(head);
}