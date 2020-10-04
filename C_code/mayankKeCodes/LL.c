#include <stdio.h>
#include <stdlib.h>

struct Node{
  int val;
  struct Node* next;
};
typedef struct Node Node;
typedef Node* List;

List createLinkedList(){
  Node* head = (Node*)malloc(sizeof(Node));
  head->val = 1234;
  head->next = NULL;
  return head;
}
void appendLinkedList(List L, int elem){
  Node* new = (Node*)malloc(sizeof(Node));
  new->val = elem;
  new->next = NULL;

  Node* currentnode = L;
  while(currentnode->next != NULL){
    currentnode = currentnode->next;
  }
  currentnode->next = new;
  return;
}
int lengthLinkedList(List L){
  int res = 0;
  while(L->next != NULL){
    L = L->next;
    res++;
  }
  return res;
}
int elementLinkedList(List L, int pos){
  int i = -1;
  Node* currentnode = L;
  while(i < pos){
    currentnode = currentnode->next;
    i++;
  }
  return currentnode->val;
}
int insertLinkedList(List L, int elem, int pos){
  if(pos > lengthLinkedList(L)){
    appendLinkedList(L,elem);
    printf("%s\n", "position>length");
    printf("%s\n", "appending...");
    return -1;
  }
  Node* currentnode = L;
  for(int j = 0; j < pos; j++){
    currentnode = currentnode->next;
  }
  Node* newNode = (Node*)malloc(sizeof(Node));
  newNode->val = elem;
  Node* temp = currentnode->next;
  currentnode->next = newNode;
  newNode->next = temp;
  return 0;
}
void printLinkedList(List L){
  Node* currentnode = L;
  while(currentnode->next != NULL){
    currentnode = currentnode->next;
    printf("%d, ", currentnode->val);
  }
  printf("\n");
}
int main(){
  List L1 = createLinkedList();
  int data;
  for(int i = 0; i < 10; i++){
    printf("%s\n", "your data here: ");
    scanf("%d",&data);
    appendLinkedList(L1, data);
  }
  printLinkedList(L1);
  int position;
  printf("%s\n", "enter value");
  scanf("%d", &data);
  printf("%s\n", "enter index");
  scanf("%d",&position );
  insertLinkedList(L1,data,position);
  printLinkedList(L1);

  return 0;
}
