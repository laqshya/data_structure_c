#include"node.h"
void SetData(int n, struct Node* ptr)
{
	ptr->data = n;
}
int GetData(struct Node* ptr)
{
	return ptr->data;
}
void SetNext(struct Node* ptr, struct Node* n)
{
	ptr->next = n;
}
struct Node* GetNext(struct Node* ptr)
{
	return ptr->next;
}
