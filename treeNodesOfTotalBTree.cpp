#include <iostream>
#include <stack>
#include <string>
#include <vector>
#include <deque>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;
};

TreeNode* createTreeNode(int val);
void connectTreeNode(TreeNode* pParent, TreeNode* pLeft, TreeNode* pRight);
int countNodes(TreeNode* root) ;

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
    int res = countNodes(pHead);
    cout<<res<<endl;
    return 0;
}

    int countNodes(TreeNode* root) 
    {
        int res=0;
        if(root == nullptr)
        {
            return 0;
        }
        deque<TreeNode*> treenodes;
        treenodes.push_back(root);
        while(treenodes.empty() != 1)
        {
            TreeNode* pNode = treenodes.front();
            treenodes.pop_front();
            res++;
            if(pNode->left != nullptr)
            {
                treenodes.push_back(pNode->left);
            }
            if(pNode->right != nullptr)
            {
                treenodes.push_back(pNode->right);
            }
        }
        return res;
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