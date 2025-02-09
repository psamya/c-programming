#include<stdio.h>
int main(){
int stack[100];
int popped[100];
int top =-1;
int pop=-1;
int value;
int a;
printf("Stack operations:\n");
printf(" 1.PUSH\n 2.POP\n 3.DISPLAY STACK\n 4.DISPLAY POPPED ELEMENT\n 5. EXIT\n");
while(1){
printf("\nEnter your choice:");
scanf("%d",&a);
switch(a){
case 1:
// PUSH condition.
if ( top== 100-1){
    printf("Stack overflow");
}else{
    printf("Enter the value to push in the stack:");
    scanf("%d",&value);
    stack[++top]= value;
} 
break;
case 2:
//POP condition
if(top== -1)
{
    printf("Stack underflow\n");
}else{
    int b=stack[top--];
    popped[++pop]=b;
    printf("Popped element :%d\n",b);
}
break;
case 3:
// to display the stack elements
if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements: ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
    break;
    case 4:
    //display popped element
    if (pop==-1)
    {
        printf("No element have been popped yet\n");
    }else{
        printf("All popped elements:");
        for(int i=0;i<=pop;i++)
        {
            printf("%d",popped[i]);
        }
        printf("\n");
    }
    break;
    case 5:
    //exiting the program
    printf("Exiting the program.\n");
    return 0;
    default :
    printf("This is invalid condition");
}
}
return 0;
}