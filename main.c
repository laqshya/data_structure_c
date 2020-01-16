#include"BST.h"
int main()
{
    int choice;
    struct Bst B1 = {NULL,Insert,PreOrder,PostOrder,FindMin,FindMax,GetRootNode,Search,HeightOfTree,InOrder};
    do
    {
        printf("press 1 to entre the element\n");
        printf("press 2 for preorder\n");
        printf("press 3 for postorder\n");
        printf("press 4 for inorder\n");
        printf("press 5 to get max\n");
        printf("press 6 to get minimum\n");
        printf("press 7 to search an element\n");
        printf("press 8 to get the height of tree\n");
        printf("press 9 to get the root node of tree\n");
        printf("press 10 to exit\n");
        printf("enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            {
                int no;
                printf("Entre the element\n");
                scanf("%d",&no);
                B1.Insertptr(&B1,no);
                printf("\n");
            }break;
        case 2:
            {
                printf("preorder:\t");
                B1.PreOrderptr(B1.root);
                printf("\n");
            }break;
        case 3:
            {
                printf("postorder:\t");
                B1.PostOrderptr(B1.root);
                printf("\n");
            }break;
        case 4:
            {
                printf("Inorder:\t");
                B1.InOrderptr(B1.root);
                printf("\n");
            }break;
        case 5:
            {
                struct Node* temp;
                temp=B1.FindMaxptr(B1.root);
                printf("Max:%d\n",temp->data);
            }break;
        case 6:
            {
                struct Node* temp;
                temp=B1.FindMinptr(B1.root);
                printf("Min:%d\n",temp->data);

            }break;
        case 7:
            {
                int val;
                printf("Entre the value u want to search\n");
                scanf("%d",&val);
                bool a = B1.Searchptr(&B1,val);
                printf("%d\n",a);
            }break;
        case 8:
            {
                printf("Height of tree:%d\n",B1.HeightOfTreeptr(B1.root));
            }break;
        case 9:
            {
                printf("data in root node: %d\n",B1.GetRootNodeptr(&B1));
            }break;
        }

    }while(choice!=10);

    return 0;
}
