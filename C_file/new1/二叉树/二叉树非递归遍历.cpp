#include<iostream>
#include<stack>
class tree
{
public:
    tree()
    {
        treeBool = false;
    }
    char m_Int;
    tree* lTree;
    tree* rTree;
    bool treeBool;
    void setTreeBoll(bool a)
    {
        this->treeBool = a;
    }
};
void forEachTree(tree* treeBoot)
{
    std::stack<tree*> myStack;
    myStack.push(treeBoot);
    //*标记一下设置为真
    //*栈中不为空则进入循环
    while (myStack.size()>0)
    {   
        tree* temp = myStack.top();
         myStack.pop();
        if (temp->treeBool == true)
        {
            std::cout << temp->m_Int << std::endl;
            continue;
        }if(temp->treeBool==false){
            temp->setTreeBoll(true);
            
        }if(temp->rTree!=NULL){
            myStack.push(temp->rTree);
        }
        if(temp->lTree!=NULL){
            myStack.push(temp->lTree);
        }
        if(temp!=NULL){
            myStack.push(temp);
        }

        
        
    }
}
int main()
{
    tree A;tree B;tree C;tree D;tree E;tree F;tree G;tree H;
    A.m_Int = 'A', A.lTree = &B, A.rTree = &F;
    B.m_Int = 'B', B.lTree = NULL, B.rTree = &C;
    C.m_Int = 'C', C.lTree = &D, C.rTree = &E;
    D.m_Int = 'D', D.lTree = NULL, D.rTree = NULL;
    E.m_Int = 'E', E.lTree = NULL, E.rTree = NULL;
    F.m_Int = 'F', F.lTree = NULL, F.rTree = &G;
    G.m_Int = 'G', G.lTree = &H, G.rTree = NULL;
    H.m_Int = 'H', H.lTree = NULL, H.rTree = NULL;
    forEachTree(&A);
    return 0;
}