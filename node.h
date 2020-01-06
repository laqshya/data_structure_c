#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

struct Node
{
	int data;
	struct Node* next;
	void (*setdataptr)(int,struct Node*);
	int (*getdataptr)(struct Node*);
	void (*setnextptr)(struct Node*,struct Node*);
	struct Node*(*getnextptr)(struct Node* ptr);
};
void SetData(int n, struct Node* ptr);
int GetData(struct Node* ptr);
void SetNext(struct Node* ptr, struct Node* n);
struct Node* GetNext(struct Node* ptr);

