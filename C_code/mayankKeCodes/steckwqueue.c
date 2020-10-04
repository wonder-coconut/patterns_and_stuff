/*Stack using Queues(Outputs@pg->5)*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<time.h>
 
 
int main(int argc, char const *argv[])
{
   int queue[20]={0};
   int queue2[20] = {0};
   int size;
   int inp=0,front=0,rear=0,front2=0,rear2=0;
   printf("%s", "enter size\n");
   scanf("%d", &size);
   while (1==1)
   {
       printf("stack: \n");
       for (int k = size-1; k >=0; k--) {
       if(queue2[0]==0){
           printf("\\\\\\\\\\| %d |//////////",queue[k]);
           printf("\n");
       }
       else if(queue[0]==0 && queue2[0]!=0){
           printf("\\\\\\\\\\| %d |//////////",queue2[k]);
           printf("\n");           
       }
       }
       printf("enter: \n1 to add \n2 to delete\n3 to exit: ");
       scanf("%d",&inp);
 
       if (inp ==1)
       {
           int a;
 
           if (rear>=size || rear2>=size)   
           {
               printf("\n\n###STACKOVERFLOW####\n\n\n");
           }
 
           else
           {
               printf("size = %d\n", size);
               printf("enter the value to be added: \n");
               scanf("%d",&a);
               printf("adding %d to the stack...\n",a);
               if(queue[0]!=0){
                   queue[rear] = a;
                   rear=rear+1;
                   printf("updated top: %d\n", rear);
               }
               else if(queue2[0]!=0)
               {
                   queue2[rear2] = a;
                   rear2=rear2+1;
                   printf("updated top: %d\n", rear2);
               }
               else // choosing queue[] by def.
               {
                   queue[rear] = a;
                   rear=rear+1;
                   printf("updated top: %d\n", rear);
               }
              
              
               if (front == -1 && front != rear)
               {
                   front++;
               }
 
               if (front2 == -1 && front2 != rear2)
               {
                   front2++;
               }
           }
          
 
       }
      
       if (inp == 2)
       {
           if ((front<=rear && front>=0) || (front2<=rear2 && front2>=0))
           {
               int temp;
               //if queue 2 is empty:
               if(queue2[0]==0){
 
                   for (front = 0; front < rear; front++)
                  
                   {
                       //dequeing queue[]
                       //till the last digit
                       temp = queue[front];
                       queue[front] = 0;//dequed
                       queue2[front] = temp;
                   }
                  
                   printf("popped %d", queue[rear]);
                   queue[rear] = 0; //deleting the last element.
                   rear2 = rear-1;//new rear for the new queue
                   rear = 0; //initialising rear
 
                   // while coding this, i observed that since
                   // there is a constant deque undergone in the 2 queues,
                   // the notion of front is not necessarily relevant.
                   // since it always resets to zero everytime a queue
                   // becomes empty (i.e front == rear).                   
              
               }
 
               //else if queue[] is empty:
               else if(queue[0]==0){               
                   for (front2 = 0; front2 < rear2; front2++)
                   {
 
                       //dequeing queue[]
                       //till the last digit
                       temp = queue2[front2];
                       queue2[front2] = 0;
                       queue[front2] = temp;
                  
                   }
                  
                   printf("popped %d", queue2[rear2]);
                   queue2[rear2] = 0; //deleting the last element.
                   rear = rear2 - 1;
                   rear2 = 0;                   
               }
           }                   
           else
           {
               printf("\n\nSTACKUNDERFLOW/empty\n\n");
           }         
       }      
       if (inp==3)
       {
           printf("exiting...\n");
           break;
       }
   }
   return 0;
}
