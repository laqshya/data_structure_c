#include"BST.h"
int GetRootNode(struct Bst* ptr)
{
     int a = ptr->root->data;
     return a;
}
void Insert(struct Bst* ptr , int Data)
{
    struct Node *t = (struct Node*)malloc(sizeof(struct Node));
    t->left = NULL;
    t->data = Data;
    t->right = NULL;

    if(ptr->root == NULL)
    {
        ptr->root = t;
    }
    else
    {
        struct Node* current = ptr->root;
        while(current != NULL)
        {
            if(Data == current->data)
            {
                current->count++;
            }
            else if(Data < current->data)
            {
                if(current->left == NULL)
                {
                    current->left = t;
                    return;
                }
                else
                {
                    current = current->left;
                }
            }
            else
            {
                if(current->right == NULL)
                {
                    current->right = t;
                    return;
                }
                else
                {
                    current = current->right;
                }
            }
        }
    }
}
void PreOrder(struct Node* temp)
{
    if(temp != NULL)
    {
        printf("%d\t",temp->data);
        PreOrder(temp->left);
        PreOrder(temp->right);
    }
}

void PostOrder(struct Node *temp)
{
    if(temp!=NULL)
    {
        PostOrder(temp->right);
        PostOrder(temp->left);
        printf("%d\t",temp->data);
    }
}

void InOrder(struct Node* temp)
{
    if(temp!=NULL)
    {
    InOrder(temp->left);
    printf("%d\t",temp->data);
    InOrder(temp->right);
    }
}

bool Search(struct Bst *ptr,int val)
{
    struct Node* temp = ptr->root;

    while(temp != NULL)
    {
        if(temp->data == val)
        {
            return true;
        }
        else if(temp->data > val)
        {
            temp = temp->left;
        }
        else
        {
            temp = temp->right;
        }
    }

    return false;
}

struct Node* FindMin(struct Node* temp)
{
    if(temp == NULL || temp->left == NULL)
    {
        return temp;
    }
    else
    {
        return FindMin(temp->left);
    }
}

struct Node* FindMax(struct Node* temp)
{
    if(temp == NULL || temp->right == NULL)
    {
        return temp;
    }
    else
    {
        return FindMax(temp->right);
    }
}

int HeightOfTree(struct Node* temp)
{
    int l=0;
    int r=0;

    if(temp == NULL)
    {
        return 0;
    }

    l = HeightOfTree(temp->left);
    r = HeightOfTree(temp->right);
    if(l<r || l ==r)
    {
        return(l+1);
    }
    else
    {
        return(r+1);
    }
}
