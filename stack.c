#include"stack.h"
int arr[5];
int top=-1;
bool IsFull()
{
	if(top==4)
	{
	return true;
	}
	else
	{
	return false;
	}
}
bool IsEmpty()
{
	if(top==-1)
	{
	return true;
	}
	else
	{
	return false;
	}
}
void peek()
{
	if(!IsEmpty())
	{
	printf("number at the top:%d\n",arr[top]);
	}
	else
	{
	printf("Stack underflow\n");
	}
}
void pop()
{
	if(!IsEmpty())
	{
	printf("number deleted:%d\n",arr[top]);
	top--;
	}
	else
	{
	printf("Stack underflow\n");
	}
}
void push(int n)
{
	if(!IsFull())
	{
	top++;
	arr[top] = n;
	printf("number added\n");
	}
	else
	{
	printf("Stack overflow\n");
	}
}
