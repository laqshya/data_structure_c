#include"stack.c"
void main()
{
int choice;

	do
	{
	
	printf("press 1 to add an element\n");
	printf("press 2 to delete an element\n");
	printf("press 3 to peek\n");
	printf("press 4 to exit\n");
	printf("entre your choice\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
	case 1 :
		{
		int no; 
		printf("entre the number to add in the stack\n");
		scanf("%d",&no);
		push(no);
		}
		break;
	case 2:
		{
		pop();
		}
		break;
	case 3:
		{
		peek();
		}
		break;
	}
	
	}while(choice!=4);
}
