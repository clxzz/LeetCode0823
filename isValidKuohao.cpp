<<<<<<< HEAD
#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

void generate(int left, int right, string s, int n);
bool isValidKuohao(string s)
{
	int n = s.size();
	stack<char> charStack;
	for(int i=0;i<n;i++)
	{
		if(charStack.empty())
		{
			charStack.push(s[i]);
		}
		else if((charStack.top()=='(' && s[i]==')') || (charStack.top()=='[' && s[i]==']') || (charStack.top()=='{' && s[i]=='}'))
		{
			charStack.pop();
		}
		else
		{
			charStack.push(s[i]);
		}
	}
	if(charStack.empty())
	{
		return true;
	}
	else
	{
		return false;
	}
}

vector<string> res;
vector<string> generateKuohao(int n)
{
	generate(0,0,"",n);
	return res;
}

void generate(int left, int right, string s, int n)
{
	if(right == n)
	{
		res.push_back(s);
	}
	else 
	{
		if(left<n)
		{
			generate(left+1,right,s+"(", n);
		}
		if(left>right)
		{
			generate(left, right+1, s+")", n);
		}
	}
}

int main()
{
	string s1 = "(){}[]", s2="([])", s3="[(])", s4 = "(]";
	bool res1 = isValidKuohao(s1), res2=isValidKuohao(s2), res3=isValidKuohao(s3), res4=isValidKuohao(s4);
	cout<<res1<<' '<<res2<<' '<<res3<<' '<<res4<<' '<<endl;
	
	int n = 3;
	vector<string> res = generateKuohao(n);
	int length = res.size();
	for(int i=0;i<length;i++)
	{
		cout<<res[i]<<endl;
	}
	return 0;
=======
#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

void generate(int left, int right, string s, int n);
bool isValidKuohao(string s)
{
	int n = s.size();
	stack<char> charStack;
	for(int i=0;i<n;i++)
	{
		if(charStack.empty())
		{
			charStack.push(s[i]);
		}
		else if((charStack.top()=='(' && s[i]==')') || (charStack.top()=='[' && s[i]==']') || (charStack.top()=='{' && s[i]=='}'))
		{
			charStack.pop();
		}
		else
		{
			charStack.push(s[i]);
		}
	}
	if(charStack.empty())
	{
		return true;
	}
	else
	{
		return false;
	}
}

vector<string> res;
vector<string> generateKuohao(int n)
{
	generate(0,0,"",n);
	return res;
}

void generate(int left, int right, string s, int n)
{
	if(right == n)
	{
		res.push_back(s);
	}
	else 
	{
		if(left<n)
		{
			generate(left+1,right,s+"(", n);
		}
		if(left>right)
		{
			generate(left, right+1, s+")", n);
		}
	}
}

int main()
{
	string s1 = "(){}[]", s2="([])", s3="[(])", s4 = "(]";
	bool res1 = isValidKuohao(s1), res2=isValidKuohao(s2), res3=isValidKuohao(s3), res4=isValidKuohao(s4);
	cout<<res1<<' '<<res2<<' '<<res3<<' '<<res4<<' '<<endl;
	
	int n = 3;
	vector<string> res = generateKuohao(n);
	int length = res.size();
	for(int i=0;i<length;i++)
	{
		cout<<res[i]<<endl;
	}
	return 0;
>>>>>>> d2fe550792cde210ebdfcd632b4e714bc7ffad29
}