#include"linklist.h"
int size(struct LinkedList* ptr)
{
	return ptr->count;
}
bool empty(struct LinkedList* ptr)
{
	return((ptr->head==NULL) && (ptr->tail==NULL));
}
bool addAtBegin(struct LinkedList* ptr , int n)
{
	bool bSuccess = false;
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	temp->data = n;
	if(ptr->emptyptr(ptr))
         {
                 temp->next=NULL;
                 ptr->head=temp;
                 ptr->tail=temp;
                 ptr->count++;
                 bSuccess = true;
         }
         else
         {
                temp->next = ptr->head ;
                ptr->head=temp;
                ptr->count++;
 		bSuccess = true;
         }
         return bSuccess;

	


}
bool addAtEnd(struct LinkedList* ptr,int n)
{
	bool bSuccess = false;
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	temp->data = n;
	
	if(ptr->emptyptr(ptr))
        {
                temp->next =NULL;
                ptr->head = temp;
                ptr->tail = temp;
                ptr->count++;
                bSuccess = true;
        }
        else
        {
                temp->next=NULL;
                ptr->tail->next=temp;
                ptr->tail=temp;
                ptr->count++;
                bSuccess = true;
        }
        return bSuccess;
}
void display(struct LinkedList* ptr)
{
	if(ptr->emptyptr(ptr))
	{
		printf("nothing to display");
	}
	else
	{
		printf("List contains");
		struct Node* temp = NULL;
		temp = ptr->head;
		while(temp != NULL)
		{
			printf("%d\t",temp->data);
			temp = temp->next;
		}
		printf("null\n");
	}
}
int deleteFromBegin(struct LinkedList* ptr)
{
	int ele;
	if(!ptr->emptyptr(ptr))
	{
		ele = ptr->head->data;
		struct Node* t;
		t = ptr->head;
		if(ptr->head == ptr->tail)
		{
			ptr->head = NULL;
			ptr->tail = NULL;
			free(t);
			ptr->count--;
		}
		else
		{
			ptr->head = ptr->head->next;
			free(t);
			ptr->count--;
		}
	}
	return ele;
}
int deleteFromEnd(struct LinkedList* ptr)
{
	if(!ptr->emptyptr(ptr))
	{
		int ele;
		ele = ptr->tail->data;
		struct Node* temp;
		temp= ptr->head;
		if(ptr->head == ptr->tail)
		{
			ptr->tail = NULL;
			ptr->head = NULL;
			free(temp);
			ptr->count--;
		}
		else
		{
			while(temp->next != ptr->tail)
			{
				temp=temp->next;
			}
			free(ptr->tail);
			temp->next=NULL;
			ptr->tail = temp;
			ptr->count--;
		}
		return ele;
	}
}
bool insertAt(struct LinkedList* ptr,int pos,int n)
{
	  bool bSuccess = false;
        if(ptr->count >= pos-1)
        {
                struct Node* n1;
                n1=ptr->head;
                int no=0;
                while(no != pos-2)
                {
                        n1 = n1->next;
			no++;
                }
		struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
                temp->data = n;
		temp->next = n1->next;
		n1->next=temp;
		bSuccess = true;
        }
	return bSuccess;
}
