#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
int *arr;
int size,choice;
int front = 0,rear=0;
bool IsEmpty();
bool IsFull();
void Enqueue(int a);
void Dequeue();
void Front();
void Rear();
