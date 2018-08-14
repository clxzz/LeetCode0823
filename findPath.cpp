#include <iostream>
#include <vector>
using namespace std;

struct Tree
{
	int val;
	Tree* left;
	Tree* right;
};

Tree* createTreeNode(int val);
void connectTreeNode(Tree* pParent, Tree* pLeft, Tree* pRight);
vector<vector<int> > findPath(Tree* root,int expectNumber);
void printTree1(Tree* pHead);
void printTree2(Tree* pHead);
void printTree3(Tree* pHead);

int main()
{
	Tree* pHead = createTreeNode(4);
	Tree* pNode2 = createTreeNode(2);
	Tree* pNode3 = createTreeNode(3);
	Tree* pNode5 = createTreeNode(5);
	Tree* pNode6 = createTreeNode(6);
	Tree* pNode7 = createTreeNode(7);
	connectTreeNode(pHead, pNode2, pNode6);
	connectTreeNode(pNode2, nullptr, pNode3);
	connectTreeNode(pNode6, pNode5, pNode7);

}

Tree* createTreeNode(int val)
{
	Tree* pNode = new Tree();
	pNode->val = val;
	pNode->left = nullptr;
	pNode->right = nullptr;
	return pNode;
}

void connectTreeNode(Tree* pParent, Tree* pLeft, Tree* pRight)
{
	if(pParent != nullptr)
	{
		pParent->left = pLeft;
		pParent->right = pRight;
	}
}

vector<vector<int> > findPath(Tree* root,int expectNumber) 
{
        vector<vector<int> > res;
        vector<int> nums;
        if(root == nullptr)
        {
        	return res;
        }
        expectNumber -= root->val;
        if(root->left == nullptr && root->right == nullptr && expectNumber == 0)
        {
        	if()
        }

        

    }