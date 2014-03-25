#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct node {
  int num;
  struct node *next;
} Node, *NodePtr;

// add new numbers at the head of the list
main(){
  void printList(NodePtr);
  NodePtr makeNode(int);
  int n;
  NodePtr top, np;

  top = NULL;
  if (scanf("%d", &n) != 1) n = 0;
  while (n != 0){
    np = makeNode(n);                // create a new node containing n
    np -> next = top;                // set link of new node to first node
    top = np;                        // set top to point to new node
    if (scanf("%d", &n) != 1) n = 0;
  }
  printf("Below is the linked list in reverse order\n");
  printList(top);
  printf("This is the end of the list\n"); 
  printf("The max value of the list is: %d\n", maxNum(max));  
  
  
}


NodePtr makeNode(int n) {
  NodePtr np = (NodePtr) malloc(sizeof (Node));
  np -> num = n;
  np -> next = NULL;
  return np;
}

void printList(NodePtr np) {
  while (np != NULL) {          // as long as there's a node
    printf("%d\n", np -> num);
    np = np -> next;            // go onto the next node
  }
}


int maxNum(NodePtr n) {
  int max;
  NodePtr mx = n;
  
  if(mx == NULL)
    return 1;

  max = mx -> num;
  while(mx -> next != NULL) {
     if (max > mx -> num)
        return 0;
     mx = mx -> next;
     max = mx -> num;
     }

  //return 1;
  
} 









