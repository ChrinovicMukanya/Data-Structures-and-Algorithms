#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

struct Node{
    int data;
    struct Node *link;
}*top = NULL;

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
    int temp_var = temp->data;
    top = top->link;
    free(temp);
    return temp_var;
}
void print_data(){
    if (top == NULL){
        printf("No stack");
    }
    struct Node *ptr;
    ptr = top;
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
        printf("1.Insert\n2.Pop\n3.Show Data\n4.exit\n");
        scanf("%d", &option);

        if (option == 1){
            printf("Insert Data : ");
            scanf("%d", &data);
            push(data);
        }else if (option == 2){
            printf("Data popped = %d \n", pop());
        }else if (option == 3){
            print_data();
        }else if (option == 4){
            printf("Exiting...");
            exit(1);
        }else 
            printf("Invalid option \n");
    }
}
