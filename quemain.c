#include"que.c"
void main()
{
	printf("entre the size of queue");
	scanf("%d",&size);
	arr = (int*)malloc(size*sizeof(int));
	do
	{	
	printf("press 1 to add element in the queue\n");
	printf("press 2 to delete element from the queue\n");
	printf("press 3 to see the front\n");
	printf("press 4 to see the rear\n");
	printf("press 5 to free memory\n");
	printf("entre your choice\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
	case 1:{
		int number;
		printf("entre the number u want to add\n");
		scanf("%d",&number);
		Enqueue(number);
		}break;
	case 2:
		Dequeue();
		break;
	case 3:
		Front();
		break;
	case 4:
		Rear();
		break;
	case 5:
		free(arr);
		break;
	}	
	}while(choice!=6);
}
