#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *link;
};

//Counting nodes
void count_nodes(struct Node * head){
    int count = 0;
    if(head == NULL){
        printf("Empty List\n");
    }
    struct Node *ptr = NULL;
    ptr = head;

    while(ptr != NULL){
        count++;
        ptr = ptr->link;
    }
    printf("%d\n", count);
}

//Displaying data of linked list 
void print_data(struct Node *head){
    if (head == NULL){
        printf("Empty List\n");
    }
    struct Node *ptr = NULL;
    ptr = head;
    while (ptr != NULL){
        printf("%d\n", ptr->data);
        ptr = ptr->link;
    }
}
int main(int argc, char * argv[])
{
    struct Node * head = (struct Node *) malloc(sizeof(struct Node));
    head->data = 45;
    head->link = NULL;

    struct Node * current = (struct Node*) malloc(sizeof(struct Node));
    current->data = 98;
    current->link = NULL;
    head->link = current;
    
    current = (struct Node *)malloc(sizeof(struct Node));
    current->data = 3;
    current->link = NULL;
    head->link->link = current;
    
    count_nodes(head);
    print_data(head);

}
