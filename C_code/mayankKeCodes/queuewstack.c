#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<time.h>
 
 
int main(int argc, char const *argv[])
{
   int size;
   int inp=0,front=-1,rear=-1, top1 = 0, top2 = 0;
   printf("%s", "enter size\n");
   scanf("%d", &size);
   int stack1[size];
   int stack2[size];
   while (1==1)
   {
       if (inp ==1)
       {
           int a;
          
           if (rear>size-1)   
           {
               printf("\n\n###QUEUE_OVERFLOW####\n\n\nPEAK():->    INITIATED\n"); 
               //peek operation:
               int k = rear;
               int i=0,temp;
               while (k!=-1)
               {
			  //pop operation:
			  temp = stack1[k];
		  	  stack1[k] = 0;
			  //push operation:
                   stack2[i]=temp;
                   i++;
                   k--;
               }
           }
 
           else
           {
               printf("size = %d\n", size);
               printf("enter the value to be added: \n");
               scanf("%d",&a);
               printf("adding %d to the queue...\n",a);
               rear=rear+1;
               stack1[rear] = a; 
               if (front == -1)
               {
                   front++;
               }
              
               printf("updated rear: %d, front: %d\n",rear, front);
           }
          
 
       }
      
       if (inp == 2)
       {
           if (front<rear && front>=0)
           {
               if (rear>size-1){
                   printf("deleted %d\n",stack2[front]);
                   stack2[front]=0;
                   front=front+1;
                   printf("updated front: %d, rear: %d\n",front,rear);
               }
               else
               {
                   printf("deleted %d\n",stack1[front]);
                   stack1[front] = 0;
                   front = front +1;
                   printf("updated front: %d, rear: %d\n",front,rear);   
               }
                              
              
 
           }
          
          
           else
           {
               printf("\n\nqueueunderflow/empty\n\n");
           }
          
       }
      
       if (inp==3)
       {
           printf("exiting...\n");
           break;
       }
 
       printf("enter: \n1 to add \n2 to delete\n3 to exit\n");
       scanf("%d",&inp);
       printf("array \n");
       for (int k = 0; k < size; k++) {
       if (rear>size-1)
       printf("%d ",stack2[k]);
       if (k==size-1) {
       printf("\n");
       }
       }
      
 
   }
