#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*link;
 };
 struct node*top=NULL,*cur,*temp;
 

void push(int ele){
    cur =(struct node*)malloc(sizeof(struct node));
    cur->data=ele;
    if(top == NULL){
        cur->link=NULL;
        }
    else{
        cur->link=top;
        }
        top=cur;
        
    }
int pop(){
    temp=top;
    if(top==NULL)
        printf("stack underflow");
    else {
        top=top->link;
        return(temp->data);
        free(temp);
        }
        }
int peek(){
    return(top->data);
    }
void display(){
    temp=top;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->link;
        }
        }
int main(){
    int ch,ele;
    while (1){
        printf("\n 1-push\n 2-pop \n 3-peek \n 4-display \n 5-EXIT");
        printf("\n enter your choice");
        scanf("%d",&ch);
        switch(ch){
            case 1:printf("enter element");
                    scanf("%d",&ele);
                    push(ele);
                    break;
            case 2: if(top==NULL){
                    printf("stack underflow");
                    }
                    else{
                    printf("deleted element is%d",pop());
                    }
                    break;
            case 3:if (top==NULL){
                    printf("stack underflow");
                    }
                    else{
                     printf("top is%d",peek());
                     }
                    break;
            case 4:
            display();
                   break;
            case 5: exit(0);

            }
    }
}

    

output
 1-push
 2-pop 
 3-peek 
 4-display 
 5-EXIT
 enter your choice1
enter element22

 1-push
 2-pop 
 3-peek 
 4-display 
 5-EXIT
 enter your choice4
22

 1-push
 2-pop 
 3-peek 
 4-display 
 5-EXIT
 enter your choice2
deleted element is22
 1-push
 2-pop 
 3-peek 
 4-display 
 5-EXIT
 enter your choice3
stack underflow
 1-push
 2-pop 
 3-peek 
 4-display 
 5-EXIT
 enter your choice5

