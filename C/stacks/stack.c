#include <stdio.h>

static struct node{
    int value;
    struct node *next;
};
static struct node *head, *z, *t;

void stackInit(){
    head = (struct node*) malloc(sizeof(*head));
    z = (struct node*)malloc(sizeof(*z));
    head->next = z;
    head->value = 0;
    z->next = z;
}


void push(int v){
    t = (struct node*)malloc(sizeof(*t));
    t->value = v;
    t->next = head->next;
    head->next = t;
}


int pop(){
    int x;
    t = head->next;
    head->next = t->next;
    x = t->value;
    free(t);
    return x;
}


int stackempty(){
    return head->next == z;
}


int main(void){

}