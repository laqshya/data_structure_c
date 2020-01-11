#include"DoubleLL.c"
void main()
{
	int choice;
	struct DoubleLL L1 = {NULL,NULL,0,addAtBegin,addAtEnd,delFromBegin,delFromEnd,getSize,show};
	
	 do
        {
                printf("press 1 to add at beginning\n");
                printf("press 2 to add at end\n");
                printf("press 3 to see the list\n");
                printf("press 4 to get the size\n");
                printf("press 5 to delete from beginning\n");
                printf("press 6 to delete from end\n");
		printf("press 7 to exit\n");
                printf("entre your choice\n");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 1:
                                {
                                        int ele;
                                        printf("entre the element\n");
					scanf("%d",&ele);
                                        if(L1.addAtBeginPtr(&L1,ele))
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
                                        if(L1.addAtEndPtr(&L1,ele))
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
                                        L1.showPtr(&L1);
                                }break;
                        case 4:
                                {
                                        printf("%d",L1.count);

                                }break;
                        case 5:
                                {
                                        int ele= L1.delFromBeginPtr(&L1);
                                        printf("Element Deleted: %d\n",ele);

                                }break;
                        case 6:
                                {
                                        printf("Element deleted: %d\n",L1.delFromEndPtr(&L1));
                                }break;                

                }
        }while(choice!=7);

}
