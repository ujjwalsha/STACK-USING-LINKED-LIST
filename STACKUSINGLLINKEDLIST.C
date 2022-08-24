#include<stdio.h>
#include<stdlib.h>

//STACK IMPLEMENTATION USING LINKED LIST 
struct link{
    int info;
    struct link* next;
};

typedef struct link node;

node* top = NULL;

//PUSH OPERATION
void push(){
    node* newnode;
    newnode = (node*)malloc(sizeof(node));
    printf("enter the data : ");
    scanf("%d", &newnode->info);

    newnode->next = NULL;
    if(top == NULL){
        newnode->next = top;
        printf("%d is inserted to stack", newnode->info);
    }
    else{
        newnode->next = top;
        printf("%d is inserted ", newnode->info);
    }
    top = newnode;
}

//deletion or pop operation 
void pop(){
    if(top == NULL)
    printf("stack is underflow");

    else{
        node* temp;
        temp = top;
        top = temp ->next;
        printf("deleted element is %d", temp->info);
        free(temp);
    }
}

//display the stack linked list 
void display(){
    if(top == NULL)
    printf("stack is underflow");

    else{
        node*temp;
        temp = top;
        while(temp->next != NULL){
            printf("%d -> ", temp->info);
            temp = temp->next;
        }
        printf("%d --->NULL", temp->info);
    }
}

int menu(){
    int choice;
    printf("\n 1. push the element : ");
    printf("\n 2. pop the element : ");
    printf("\n 3. display the element : ");
    printf("\n 4. exiting the program : ");
    printf("enter your choice : ");
    scanf("%d", &choice );

    return choice;
}


void main(){

    while(1){

         switch(menu()){
             
             case 1:
             push();
             break;

             case 2:
             pop();
             break;

             case 3:
             display();
             break;

             case 4:
             exit(0);

             default:
             printf("invalid choice ");
         }
    }
}