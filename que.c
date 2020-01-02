#include"que.h"
bool IsEmpty()
{
	if(front == rear)
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
	if(rear == size)
	{
	return true;
	}
	else
	{
	return false;
	}
}
void Enqueue(int a)
{
	if(!IsFull())
	{
	arr[rear] = a;
	rear++;
	}
	else
	{
	printf("queue overflow\n");
	}
}
void Dequeue()
{
	if(!IsEmpty())
	{
	printf("element deleted:%d\n",arr[front]);
	front++;
	}
	else
	{
	printf("queue underflow\n");
	}
}
void Front()
{
	if(!IsEmpty())
	{
	printf("front element is:%d\n",arr[front]);
	}
	else
	{
	printf("queue underflow\n");
	}
}
void Rear()
{
	if(!IsEmpty())
	{
	printf("rear element is:%d\n",arr[--rear]);
	rear++;
	}
	else
	{
	printf("queue underflow\n");
	}
}
