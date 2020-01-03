#include"cque.c"
int main()
{
	arr = (int*)malloc(size*sizeof(int));
	printf("entre the size of circular queue\n");
	scanf("%d",&size);	
	do
	{
	printf("press 1 to add an element\n");	
	printf("press 2 to delete an element\n");
	printf("press 3 to exit\n");
	printf("Entre the choice\n");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
		{
		int num;
		printf("entre the element\n");
		scanf("%d",&num);
		Enqueue(num);
		}break;
	case 2:
		{
		Dequeue();
		}break;
	}	
	}while(choice!=3);
}
