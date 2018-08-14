#include <iostream>
#include <vector>
#include <deque>
#include <stack>
using namespace std;


struct Tree
{
	int val;
	Tree* left;
	Tree* right;
};

Tree* buildTreeCore(int prestart, int instart, int inend, vector<int> preorder, vector<int> inorder);
Tree* buildTree(vector<int> preorder, vector<int> inorder);
void printTree1(Tree* pHead);
void printTree2(Tree* pHead);
void printTree3(Tree* pHead);

Tree* buildTree(vector<int> preorder, vector<int> inorder)
{
	int n1 = preorder.size(), n2 = inorder.size();
	if(n1 != n2 || n1 == 0 || n2 == 0)
		return nullptr;
	Tree* pHead = buildTreeCore(0,0,n1-1,preorder,inorder);
	return pHead;
}

Tree* buildTreeCore(int prestart, int instart, int inend, vector<int> preorder, vector<int> inorder)
{
	if(prestart>preorder.size()-1 || instart > inend)
		return nullptr;
	int root = preorder[prestart];
	int rootidx;
	Tree* pNode = new Tree();
	pNode->val = root;
	for(int i = instart;i<=inend;i++)
	{
		if(inorder[i] == root)
		{
			rootidx = i;
			break;
		}
	}
	pNode->left = buildTreeCore(prestart+1, instart, rootidx-1,preorder, inorder);
	pNode->right = buildTreeCore(prestart+1+rootidx-instart, rootidx+1, inend,preorder, inorder);//递归
	return pNode;
}

int main()
{
	vector <int> preorder = {3,9,20,15,7};
	vector <int> inorder = {9,3,15,20,7};
	Tree* pHead = buildTree(preorder, inorder);
	cout<<pHead->val<<endl;
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