#include"DoubleLL.h"
bool IsEmpty(struct DoubleLL *ptr)
{
	if(ptr->head == NULL)
	
		return true;
	
	else
		return false;
}

int getSize(struct DoubleLL* ptr)
{
	return ptr->count;
}

void show(struct DoubleLL* ptr)
{
	if(!IsEmpty(ptr))
	{
		struct Node* temp = ptr->head;

		printf("LinkedList Contains:\t");

		while(temp!= NULL)
		{
			printf("%d\t",temp->data);
			temp=temp->next;
		}
		printf("\n");
	}
	else
	{
		printf("Nothing to show\n");
	}
}

bool addAtBegin(struct DoubleLL* ptr,int no)
{
	bool bSuccess = false;

	struct Node* temp = (struct Node*) malloc (sizeof(struct Node));
	temp->data = no;
	if(IsEmpty(ptr))
		
	{
		ptr->head = temp;
		ptr->tail = temp;
		temp->next = NULL;
		temp->prev = NULL;
		ptr->count++;
		bSuccess = true;
	}
	else
	{
		ptr->head->prev = temp;
		temp->next = ptr->head;
		temp->prev = NULL;
		ptr->head = temp;
		ptr->count++;
		bSuccess = true;
	}
	return bSuccess;
}

bool addAtEnd(struct DoubleLL* ptr, int no)
{
	bool bSuccess = false;
	if(IsEmpty(ptr))
	{
		printf("Choose add at begin option\n");
	}
	else
	{
		struct Node* temp = (struct Node*)malloc(sizeof(struct Node));

		temp->data = no;
		ptr->tail->next = temp;
		temp->prev = ptr->tail;
		temp->next = NULL;
		ptr->tail = temp;
		ptr->count++;
		bSuccess = true;
	}
	return bSuccess;

}
int delFromBegin(struct DoubleLL* ptr)
{
	if(!IsEmpty(ptr))
	{
		int ele = ptr->head->data;
		struct Node* temp = ptr->head;

		if(ptr->head == ptr->tail)
		{
			ptr->head = NULL;
			ptr->tail = NULL;
			free(temp);
			ptr->count--;
		}
		else
		{
			ptr->head = ptr->head->next;
			ptr->head->prev = NULL;
			free(temp);
			ptr->count--;
		}
		return ele;
	}
}
int delFromEnd(struct DoubleLL* ptr)
{
	if(!IsEmpty(ptr))
	{
		int ele = ptr->tail->data;
		struct Node* temp = ptr->tail;
		if(ptr->head == ptr->tail)
		{
			ptr->head = NULL;
			ptr->tail = NULL;
 			free(temp);
 			ptr->count--;
		}
		else
		{
			ptr->tail = ptr->tail->prev;
			ptr->tail->next = NULL;
			free(temp);
			ptr->count--;
		}
		return ele;
	}
}
