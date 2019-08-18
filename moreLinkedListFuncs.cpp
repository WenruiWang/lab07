#include <cassert>
#include "linkedList.h"
#include "linkedListFuncs.h"



void addIntToEndOfList(LinkedList *list, int value) {
  assert(list!=NULL); // if list is NULL, we can do nothing.

  Node *p; // temporary pointer
   p=new Node;
   p->data=value;
   p->next=NULL;
 



  if (list->head == NULL) {
                 list->head=p;
		 list->tail=NULL;
           
    
  } else {

           
          list->tail->next=p;
           list->tail=p;
  }

}

void addIntToStartOfList(LinkedList *list, int value) {
  assert(list!=NULL); // if list is NULL, we can do nothing.
    Node *p;
    p=new Node;
    p->data=value;
    if(list->head==NULL){
	  p->next=NULL;
	  list->head=p;
	  list->tail=p;
	 }  else {
		 p->next=list->head;
		 list->head=p;

}
}


// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return a pointer to node with the largest value.
// You may assume list has at least one element  
// If more than one element has largest value, 
//  break tie by returning a pointer to the one the occurs
//  earlier in the list, i.e. closer to the head

Node * pointerToMax(LinkedList *list) {

  assert(list!=NULL);
  assert(list->head != NULL);
   Node*p=list->head;
   Node*Pointer_To_Max=list->head;
   double max=list->head->data;//Initialize the pointers and variables defined.
   while(p){
	   if(p->data>max){
		   max=p->data;
		   Pointer_To_Max=p;}
	   p=p->next;}

  return Pointer_To_Max; // STUB!  Replace this line with correct code
}

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return a pointer to node with the smallest value.  
// You may assume list has at least one element
// If more than one element has smallest value, 
//  break tie by returning a pointer to the one the occurs

  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.
Node * pointerToMin(LinkedList *list) { 
assert(list!=NULL);
  assert(list->head != NULL);
   Node*p=list->head;
   Node*Pointer_To_Min=list->head;
   double min=list->head->data;
   while(p){
	   if(p->data<min){
		   min=p->data;
		   Pointer_To_Min=p;}
	   p=p->next;}
   return Pointer_To_Min;
  // TODO: Insert code here to calculate and return
  //   value of pointer to min element 
  //   (first one such value that occurs if there are ties.)

  return NULL; // STUB!  Replace this line with correct code

}

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return the largest value in the list.
// This value may be unique, or may occur more than once
// You may assume list has at least one element

int largestValue(LinkedList *list) {
  assert(list!=NULL);
  assert(list->head != NULL);
  Node*p=list->head;
  int max=list->head->data;
  while(p){
	  if(p->data>max){
		  max=p->data;
		  }
                        p=p->next;}
  return max; // STUB!  Replace this line with correct code
}

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return the smallest value in the list.
// This value may be unique, or may occur more than once
// You may assume list has at least one element

int smallestValue(LinkedList *list) {
  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.

  assert(list!=NULL);
  assert(list->head != NULL);
  Node*p=list->head; 
  int min=list->head->data;
  while(p){
	  if(p->data<min){
		  min=p->data;}
	  p=p->next;}
  return min; // STUB!  Replace this line with correct code

  }

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return the sum of all values in the list.
// You may assume that list is not NULL
// However, the list may be empty (i.e. list->head may be NULL)
//  in which case your code should return 0.

int sum(LinkedList * list) {
  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.

  assert(list!=NULL);
int sum=0;
Node*p=list->head;
while(p){
	sum+=p->data;
         p=p->next;}
  // TODO: Insert code here to calculate and return
  //   sum of all values in list (0 if there are none).

  return sum; // STUB!  Replace this line with correct code

}

