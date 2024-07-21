#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *link;
};

void count_Nodes(struct Node *head){
    int count = 0;
    if (head == NULL){
        printf("List is empty");
    }
    struct Node *ptr = NULL;
    ptr = head;

    while (ptr != NULL){
        count++;
        ptr = ptr->link;
    }
    printf("sum = %d\n", count);
}
void print_data(struct Node *head){
    if (head == NULL){
        printf("List is Empty\n");
    }
    struct Node *ptr = NULL;
    ptr = head;
    
    int count = 0;
    while (ptr != NULL){
        printf("%d Node = %d\n",count , ptr->data);
        ptr = ptr->link;
        ++count;
    }
}
void insert_end_node(struct Node *head, int data){
    struct Node *temp = (struct Node*) malloc(sizeof(struct Node));
    temp->data = data;
    temp->link = NULL;
    
    struct Node *ptr = NULL;
    ptr = head;

    while(ptr->link != NULL){
        ptr = ptr->link;
    }
    ptr->link = temp;
}
int main(int argc, char * argv[])  
{
    struct Node * head = (struct Node*) malloc(sizeof(struct Node));
    head->data = 10;
    head->link = NULL;

    struct Node * current  = (struct Node*) malloc(sizeof(struct Node));
    current->data = head->data + 10;
    current->link = NULL;
    head->link = current;

    current = (struct Node*) malloc(sizeof (struct Node));
    current->data = head->link->data + 10;
    current->link = NULL;
    head->link->link = current;
    
    insert_end_node(head, 34);
    count_Nodes(head);
    print_data(head);


}
