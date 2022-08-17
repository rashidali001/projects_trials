#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

struct node {
   int data;
   int key;
   struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;

bool isEmpty();
int insertFirst(int key, int data);
void printList();
struct node *deleteFirst();
struct node* find(int key);
struct node *delete(int key);
int main()
{
   insertFirst(1,10);
   insertFirst(2,20);
   insertFirst(3,30);
   insertFirst(4,1);
   insertFirst(5,40);
   insertFirst(6,56);

   printf("Original List: \n");

   //print list
    printList();

    while(!isEmpty()) {
      struct node *temp = deleteFirst();
      printf("\nDeleted value:");
      printf("(%d,%d) ",temp->key,temp->data);
    }
   printf("\nList after deleting all items: \n");
   printList();
   insertFirst(1,10);
   insertFirst(2,20);
   insertFirst(3,30);
   insertFirst(4,1);
   insertFirst(5,40);
   insertFirst(6,56);
   printf("\nPrinting elements after inserting again:\n");
   printList();

    struct node *foundLink = find(4);
   if(foundLink != NULL) {
      printf("\nElement found: ");
      printf("(%d,%d) ",foundLink->key,foundLink->data);
      printf("\n");
   } else {
      printf("\nElement not found.");
   }

   /* delete(4);
    printf("List after deleting an item: ");
    printList();
    printf("\n");*/


    return 0;
}
int insertFirst(int key, int data)
{
    current =(struct node*)malloc(sizeof(struct node));
    current->key = key;
    current->data = data;
    current->next = head;
    head = current;
    return 0;
}
void printList()
{

    while(current->next != NULL)
    {
        printf("(%d,%d)\n",current->key,current->data);
        current = current->next;
    }
}
bool isEmpty()
{
    return head == NULL;
}
struct node *deleteFirst()
{
    struct node *deleted=(struct node*) malloc(sizeof(struct node));
    deleted = head;
    head = head->next;
    return deleted;
}
struct node *find(int key)
{

     printf("%d",current->data);
     return NULL;
}
/*struct node *delete(int key)
{
    struct node *current = head;
    struct node *previous;

    if(head == NULL)
        return NULL;

    while(current->key!=key)
    {
        if(current->next==NULL)
            return NULL;
        else
        {
            previous = current;
            current = current->next;
        }
    }
    if(current == head)
        head = head->next;
    else
        previous->next = current->next;
    return current;
}*/
