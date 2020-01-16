#include"Node.h"

struct Bst
{
    struct Node* root;
    void (*Insertptr)(struct Bst*,int);
    void (*PreOrderptr)(struct Node*);
    void (*PostOrderptr)(struct Node*);
    struct Node* (*FindMinptr)(struct Node*);
    struct Node* (*FindMaxptr)(struct Node*);
    int (*GetRootNodeptr)(struct Bst*);
    bool (*Searchptr)(struct Bst*,int val);
    int (*HeightOfTreeptr)(struct Node* Temp);
    void (*InOrderptr)(struct Node*);
};

void Insert(struct Bst*,int);
void PreOrder(struct Node*);
void PostOrder(struct Node*);
struct Node* FindMin(struct Node*);
struct Node* FindMax(struct Node*);
int GetRootNode(struct Bst*);
bool Search(struct Bst*,int);
int HeightOfTree(struct Node* Temp);
void InOrder(struct Node*);
