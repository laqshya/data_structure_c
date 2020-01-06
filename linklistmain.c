#include"linklist.c"
int main()
{
	int choice;
	struct LinkedList L1 = {NULL,NULL,0,size,empty,addAtBegin,addAtEnd,display,deleteFromBegin,deleteFromEnd,insertAt};
	do
	{
		printf("press 1 to add at beginning\n");
		printf("press 2 to add at end\n");
		printf("press 3 to see the list\n");
		printf("press 4 to get the size\n");
		printf("press 5 to delete from beginning\n");
		printf("press 6 to delete from end\n");
		printf("press 7 to add at pos\n");
		printf("entre your choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
					int ele;
					printf("entre the element\n");
					scanf("%d",&ele);
					if(L1.addAtBeginptr(&L1,ele))
					{
						printf("element inserted\n");
					}
					else
					{
						printf("something went wromg\n");
					}
				}break;
			case 2:
				{
					int ele;
                                        printf("entre the element\n");
                                        scanf("%d",&ele);
                                        if(L1.addAtEndptr(&L1,ele))
                                        {
                                                printf("element inserted\n");
                                        }
                                        else
                                        {
                                                printf("something went wromg\n");
                                        }

				}break;
			case 3:
                                {
					L1.displayptr(&L1);
                                }break;
	                case 4:
                                {
					printf("%d",L1.count);

                                }break;
			case 5:
                                {
					int ele= L1.deleteFromBeginptr(&L1);
					printf("%d",ele);

                                }break;
			case 6:
                                {
					printf("Element deleted%d\n",L1.deleteFromEndptr(&L1));
                                }break;
			case 7:
                                {
					 int ele,pos;
                                        printf("entre the element\n");
                                        scanf("%d",&ele);
					printf("entre the position\n");
					scanf("%d",&pos);
                                        if(L1.insertAtptr(&L1,pos,ele))
                                        {
                                                printf("element inserted\n");
                                        }
                                        else
                                        {
                                                printf("choose this only if you want to entre in between the List not at head or tail\n");
                                        }
                                }break;

		}
	}while(choice!=8);

}
