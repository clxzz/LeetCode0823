#include <iostream>
#include <vector>
#include <string>
using namespace std;

 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
  };

  TreeNode* createTreeNode(int val);
void connectTreeNode(TreeNode* pParent, TreeNode* pLeft, TreeNode* pRight);
int countNodes(TreeNode* root) ;

vector<int> res;
    vector<int> postorderTraversal(TreeNode* root) 
    {
       
        if(root == nullptr)
        {
            return res;
        }
        TreeNode* node=root;
        while(node != nullptr)
        {
            postorderTraversal(node->left);
            postorderTraversal(node->right);
            res.push_back(node->val);
        }
    }

int main()
{
    TreeNode* pHead = createTreeNode(4);
    TreeNode* pNode2 = createTreeNode(2);
    TreeNode* pNode3 = createTreeNode(3);
    TreeNode* pNode5 = createTreeNode(5);
    TreeNode* pNode6 = createTreeNode(6);
    TreeNode* pNode7 = createTreeNode(7);
    connectTreeNode(pHead, pNode2, pNode6);
    connectTreeNode(pNode2, pNode7, pNode3);
    connectTreeNode(pNode6, nullptr, nullptr);
    vector<int> res=postorderTraversal(pHead);
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<endl;
    }
    return 0;
}

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
