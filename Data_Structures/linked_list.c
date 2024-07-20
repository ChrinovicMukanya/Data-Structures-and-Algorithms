#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *link;
};

int main(int argc, char **argv)
{
    struct Node *head = (struct Node*) malloc(sizeof(struct Node));
    head->data = 10;
    head->link = NULL;

    struct Node *current  = (struct Node*) malloc(sizeof(struct Node));
    current->data = head->data + 10;
    current->link = NULL;
    head->link = current;

    current = (struct Node*) malloc(sizeof(struct Node));
    current->data = head->link->data + 10;
    current->link = NULL;
    head->link->link = current;

    printf("%d---%d---%d\n", head->data, head->link->data, head->link->link->data);



}
