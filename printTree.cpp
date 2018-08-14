#include <iostream>
#include <deque>
#include <stack>
using namespace std;

struct Tree
{
	int val;
	Tree* left;
	Tree* right;
};

Tree* createTreeNode(int val);
void connectTreeNode(Tree* pParent, Tree* pLeft, Tree* pRight);
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
	cout<<"up to bottom: ";
	printTree1(pHead);
	cout<<endl;
	cout<<"up to bottom with level: ";
	printTree2(pHead);
	cout<<endl;
	cout<<"up to bottom with level 2: ";
	printTree3(pHead);
	cout<<endl;

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

void printTree1(Tree* pHead)
{
	deque<Tree*> treeNodes;
	treeNodes.push_back(pHead);
	Tree* pNode;
	while(treeNodes.size())
	{
		pNode = treeNodes.front();
		cout<<pNode->val<<' ';
		treeNodes.pop_front();
		if(pNode->left)
			treeNodes.push_back(pNode->left);
		if(pNode->right)
			treeNodes.push_back(pNode->right);
	}
}

void printTree2(Tree* pHead)
{
	deque<Tree*> treeNodes;
	treeNodes.push_back(pHead);
	int curLevel = 1;
	int nextLevel = 0;
	Tree* pNode;
	while(treeNodes.size())
	{
		pNode = treeNodes.front();
		cout<<pNode->val<<' ';;
		curLevel--;
		treeNodes.pop_front();
		if(pNode->left)
		{
			treeNodes.push_back(pNode->left);
			nextLevel++;
		}

		if(pNode->right)
		{
			treeNodes.push_back(pNode->right);
			nextLevel++;
		}

		if(curLevel == 0)
		{
			cout<<endl;
			curLevel = nextLevel;
			nextLevel = 0;
		}
	}
}

void printTree3(Tree* pHead)
{
	stack<Tree*> treeNodes[2];
	int curLevel = 0;
	int nextLevel = 1;
	//int node_nums[2] = {1, 0};
	treeNodes[curLevel].push(pHead);
	Tree* pNode;
	while(!treeNodes[0].empty() || !treeNodes[1].empty())
	{
		pNode = treeNodes[curLevel].top();
		treeNodes[curLevel].pop();
		//node_nums[curLevel]--;
		cout<<pNode->val<<' ';
		if(curLevel == 0)
		{
			if(pNode->left)
			{
				treeNodes[nextLevel].push(pNode->left);
				//node_nums[nextLevel]++;
			}
			if(pNode->right)
			{
				treeNodes[nextLevel].push(pNode->right);
				//node_nums[nextLevel]++;
			}
		}
		if(curLevel == 1)
		{
			if(pNode->right)
			{
				treeNodes[nextLevel].push(pNode->right);
				//node_nums[nextLevel]++;
			}
			if(pNode->left)
			{
				treeNodes[nextLevel].push(pNode->left);
				//node_nums[nextLevel]++;
			}
		}
		if(treeNodes[curLevel].empty())
		{
			cout<<endl;
			//node_nums[curLevel] = node_nums[nextLevel];
			//node_nums[nextLevel] = 0;
			curLevel = 1 - curLevel;
			nextLevel = 1 - nextLevel;
		}
	}
}