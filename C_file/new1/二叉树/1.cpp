#include<iostream>


class tree
{
public:

    char m_Int;
    tree* lTree;
    tree* rTree;
};
tree A;
tree B;
tree C;
tree D;
tree E;
tree F;
tree G;
tree H;
void earchTree(tree* treeBoot)
{//*返回每个元素
    if (treeBoot == NULL)
    {
        return;
    }
    std::cout << treeBoot->m_Int << std::endl;
    earchTree(treeBoot->lTree);
    earchTree(treeBoot->rTree);


}//!返回最大深度
int treeHigh(tree* treeBoot)
{
    if (treeBoot == NULL)
    {
        return 0;
    }
    int lTreeHigh = treeHigh(treeBoot->lTree);
    int rTreeHigh = treeHigh(treeBoot->rTree);
    return lTreeHigh > rTreeHigh ? lTreeHigh + 1 : rTreeHigh + 1;

}
int treeYz(tree* treeBoot)
{
    if (treeBoot == NULL)
    {
        return 0;
    } else if (treeBoot->lTree == 0 && treeBoot->rTree == 0)    
{
        return 1;
    }
    return treeYz(treeBoot->lTree) + treeYz(treeBoot->rTree);
}
//*二叉树递归拷贝
tree* copyTree(tree* treeBoot)
{
    if (treeBoot == NULL)    
{
        return NULL;
    }
    tree* lTree = copyTree(treeBoot->lTree);
    tree* rTree = copyTree(treeBoot->rTree);
    auto jiedian = new tree;
    // tree jiedian;//!函数内创立在栈区执行完就会被析构
    jiedian->m_Int = treeBoot->m_Int;
    jiedian->lTree = lTree;
    jiedian->rTree = rTree;
    return jiedian;
}
//*释放内存
void treeFree(tree*treeBoot){
    if(treeBoot==NULL){
        return;
    }
    treeFree(treeBoot->lTree);
    treeFree(treeBoot->rTree);
    std::cout << "释放了" << treeBoot->m_Int << std::endl;
    free(treeBoot);
    
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
    earchTree(&A);
    // std::cout << treeHigh(&A) << std::endl;
    // std::cout << treeYz(&A) << std::endl;
    std::cout << "-------------" << std::endl;
    tree* p1;
    p1 = copyTree(&A);
    earchTree(p1);
    
    treeFree(p1);






    return 0;
}
