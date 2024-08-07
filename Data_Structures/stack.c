#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

struct Node{
    int data;
    struct Node *link;
}*top = NULL;

int isEmpty(){
    if (top == NULL){
        return TRUE;
    }else 
        return FALSE;
}
void push(int data){
    struct Node *node = (struct Node*) malloc(sizeof(struct Node));
    if (node == NULL){
        printf("stack overflow");
        exit(1);
    }
    node->data = data;
    node->link = NULL;
    node->link = top;
    top = node;
}
int pop(){
    struct Node *temp;
    temp = top;
    if (isEmpty()){
        printf("Stack underflow");
        exit(1);
    }
    int temp_var = temp->data;
    top = top->link;
    free(temp);
    return temp_var;
}

int peek(){
    if(isEmpty()){
        printf("Stack underflow");
    }
    return top->data;
}
void print_data(){
    struct Node *ptr;
    ptr = top;
    if(isEmpty()){
        printf("Stack underflow");
        exit(1);
    }
    int count = 1;
    while (ptr != NULL){
        printf("Node %d = %d\n", count , ptr->data);
        ptr = ptr->link;
        ++count;
    }
}
int main(int argc, char ** agrv)
{
    while(TRUE){
        int option, data;
        printf("1.Insert\n2.Pop\n3.Peek Top\n4.Print Data\n5.Exit\n");
        scanf("%d", &option);

        if (option == 1){
            printf("Insert Data : ");
            scanf("%d", &data);
            push(data);
        }else if (option == 2){
            printf("Data popped = %d \n", pop());
        }else if (option == 3) {
            printf("Top element = %d\n", peek());
        }else if (option == 4){
            print_data();
        }else if (option == 5){
            printf("Exiting...");
            exit(1);
        }else 
            printf("Invalid option \n");
    }
}
