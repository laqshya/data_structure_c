#include"dstack.c"
void main()
{
int choice;
printf("entre the size of array\n");
scanf("%d",&x);
arr = (int*)malloc(x * sizeof(int));
	do
	{
	printf("press 1 to push\n");
	printf("press 2 to pop\n");
	printf("press 3 to peek\n");
	printf("entre your choice\n");
	scanf("%d",&choice);

	switch(choice)
	{
	case 1 :
		{
		int number;
		printf("entre the number u want to add\n");
		scanf("%d",&number);
		push(number);
		}break;
	case 2 :
		{
		pop();
		}break;
	case 3:
		{
		peek();
		}break;
	}
	}while(choice!=4);
}
