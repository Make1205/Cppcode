#include <bits/stdc++.h>
using namespace std;

int qp(int a, int b)
{
    if (b == 0)
        return 1;
    if (b % 2 == 1)
        return qp(a, b / 2) * qp(a, b / 2) * a;
    if (b % 2 == 0)
        return qp(a, b / 2) * qp(a, b / 2);
    return 1;
}
int read()
{
    int s = 0, w = 1;
    char c = getchar();
    while (c > '9' || c < '0')
    {
        if (c == '-')
            w = -1;
        c = getchar();
    }
    while (c <= '9' && c >= '0')
    {
        s += (s << 3) + (s << 1) + c - 48;
        c = getchar();
    }
    return s * w;
}

//手写二叉树

//节点
typedef struct binary_tree
{
    int data;           // 节点保存的数据
    binary_tree *left;  // 定义左节点指针
    binary_tree *right; // 定义右节点指针
} node;

//初始化二叉树
void insert(node **tree, int gain) //指向指针变量的指针，结果是指针tree所指向的值

{
    node *temp = NULL;
    if (!(*tree)) //判断根节点是否存在
    {
        temp = (node *)malloc(sizeof(node));
        temp->left = temp->right = NULL; //左右节点制空
        temp->data = gain;
        *tree = temp;
        return;
    }
    if (gain < (*tree)->data) //判断是左子树
    {
        insert(&(*tree)->left, gain); //等价于 &((*tree)->left)，创建左子树
    }
    else if (gain > (*tree)->data) //判断是右子树
    {
        insert(&(*tree)->right, gain); //等价于 &((*tree)->right)，创建右子树
    }
}

//释放节点内存

void deltree(node *tree)
{
    if (tree)
    {
        deltree(tree->left);  //先往左子树一直寻找
        deltree(tree->right); //再往右子树一直寻找
        free(tree);           //找不到了free返回上一级
    }
}

//先根
void pre(node *tree)
{
    if (tree)
    {
        cout << tree->data << " ";
        pre(tree->left);
        pre(tree->right);
    }
}

//中根
void in(node *tree)
{
    if (tree)
    {
        in(tree->left);
        cout << tree->data << " ";
        in(tree->right);
    }
}

//后根
void post(node *tree)
{
    if (tree)
    {
        post(tree->left);
        post(tree->right);
        cout << tree->data << " ";
    }
}

int main()
{
    node *root;

    // int i;

    root = NULL;

    //将值赋给二叉树，下面是满二叉树形式

    insert(&root, 9);
    insert(&root, 4);
    insert(&root, 15);
    insert(&root, 6);
    insert(&root, 12);
    insert(&root, 16);
    insert(&root, 2);
    in(root);
    return 0;
}