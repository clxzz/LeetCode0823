struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;
};

TreeNode* createTreeNode(int val);
void connectTreeNode(TreeNode* pParent, TreeNode* pLeft, TreeNode* pRight);

TreeNode* createTreeNode(int val)
{
    TreeNode* pNode = new TreeNode();
    pNode->val = val;
    pNode->left = nullptr;
    pNode->right = nullptr;
    return pNode;
}

void connectTreeNode(TreeNode* pParent, TreeNode* pLeft, TreeNode* pRight)
{
    if(pParent != nullptr)
    {
        pParent->left = pLeft;
        pParent->right = pRight;
    }
}