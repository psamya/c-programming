#include <stdio.h>
     int size=15;
    int stack[15];
    int top=-1;
      int a;
 void push(){
    printf("enter the number");
    scanf("%d",&a);
    if(top==size-1){
        printf("overflow:no elements can be stored\n");
    }
        else{
            top++;
            stack[top]=a;
        }
    }
    void pop(){
       if(top==-1){
            printf("underflow:there is not any element to retrieve ");
        }
        else{
            top-- ;
           // stack[top]=a;
        }
    }
    void describe(){
        if(top==-1){
            printf("stack is empty");
        }
        else{
            top++;
        }
    }
        void display(){
            if(top>=0){
            for(int i=top;i>=0;i--){
                 printf("stack element is:",stack[i]);
                //scanf("%d",stack[i]);
            }
        }
    }
    int main(){
        int n;
        while(1){
        printf("1.for push\n:");
         printf("2.for pop\n:");
          printf("3.for display\n:");
          printf("4.exit the program\n");
          
           printf("enter the number from 1 to 4\n:");
        scanf("%d",&n);
           switch(n){
           case 1:{
            // printf("value to be pushed:\n");
           push();
           break ;
           }
           case 2:{
            printf("value to be popped:\n");
            pop();
            break;
           }
           case 3:{
            printf("to disply:\n");
            display();
            break;
           }
           case 4:{
            printf("exit");
           }
           default:
           printf("invalid");
           break;
    }
        }
    return 0;
    }