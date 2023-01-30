#include<stdio.h> 
#include<stdlib.h> 
#include<process.h> 
struct que 
{ 
int data; 
struct que *next; 
}; 
struct que *front,*rear,*temp,*new; 
void main() 
{ 
int ch; 
while (ch!=4) 
{ 
printf("\n Menu"); 
printf("\n 1)Enqueue"); 
printf("\n 2)Dequeue"); 
printf("\n 3)Display"); 
printf("\n 4)Exit"); 
printf("\n Enter your choice:-> "); 
scanf("%d",&ch); 
switch (ch) 
{ 
case 1: 
new=(struct que *)malloc(sizeof(struct que)); printf("\n Enter the data:-> "); 
scanf("%d",&new->data);
front=rear; 
if(rear==NULL) 
{ 
rear=new; 
new->next=NULL; 
printf("\n One element enqueued"); } 
else 
{ 
while(rear->next!=NULL) 
{ 
rear=rear->next; 
} 
rear->next=new; 
new->next=NULL; 
printf("\n One element enqueued"); } 
break; 
case 2: 
temp=front; 
front=front->next; 
free(temp); 
printf("\nOne element dequeue"); break; 
case 3: 
if(front==NULL) 
{ 
printf("\n Queue is empty"); 
} 
else 
{ 
temp=front; 
while (temp!=NULL) 
{ 
printf("\n %d",temp->data); 
temp=temp->next;
} 
} 
break; 
case 4: 
exit(0); 
default: 
printf("\n Please enter only 1 to 4 options"); break; 
} 
} 
}
