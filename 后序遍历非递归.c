typedef struct BTNode
{
    int data;
    BTNode *lChild;
    BTNode *rChild;

};
void postorderNonrecursion(BTNode *bt){
if (bt!=NULL)
{
    //准备工作 
    //两个辅助栈加一个遍历指针
    BTNode *Stack1[Maxsize];//遍历栈
    int top1=-1; 
    BTNode *Stack2[Maxsize];//放进逆序栈
    int top2=-1;
    BTNode *p=NULL;
    Stack1 [++top]=bt;
    while (top！=-1)
    {
        p=Stack1[top--];
        Stack2[top++]//入栈
        if (p->lChild!=NULL)
        {
            Stack1[++top1]=p->lChild;
            //与先序遍历相反
            //左孩子进栈
        }
        
        if (p->rChild!=NULL)
        {
            Stack1[++top1]=p->rChild;
        }
        
    }
    while (top2!=NULL)
    {
        p=Stack2[top--];
        visit(p);
    }
    
}





    BTno
}
