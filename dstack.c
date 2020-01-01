#include"dstack.h"
int x = 0 ,top =-1;
int *arr;
bool IsEmpty()
{
	if(top ==-1)
	{
	return true;
	}
	else
	{	
	return false;
	}
}
bool IsFull()
{
	if(top == (x-1))
	{
	return true;
	}
	else
	{
	return false;
	}
}
void push(int n)
{
	if(!IsFull())
	{
	top++;
	arr[top] = n;
	printf("number is entered\n");
	}
	else
	{
	printf("stack overflow\n");
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
	printf("stack underflow\n");
	}
}
void peek()
{
	if(!IsEmpty())
	{
	printf("number is : %d\n",arr[top]);
	}
	else
	{
	printf("stack underflow\n");
	}
}
