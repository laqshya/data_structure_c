#include"cque.h"
bool IsEmpty()
{
	if(front==rear)
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
	if((rear+1)%size == front)
	{
	return true;
	}
	else
	{
	return false;
	}
}

void Enqueue(int n)
{
	if(!IsFull())
	{
	arr[rear] = n;
	rear= (rear+1)%size;	
	}
	else
	{	
	printf("queue is full\n");
	}
}
void Dequeue()
{
	if(!IsEmpty())
	{
	printf("element deleted:%d\n",arr[front]);
	front = (front+1)%size;
	}
	else
	{
	printf("queue is empty\n");
	}
}
