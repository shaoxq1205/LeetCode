#include<iostream>
#include<string>
#include <stack> 
#include<math.h>
using namespace std;

/**
 * Definition for a binary tree node.
  */
  struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };

class Solution {
public:
    int maxDepth(TreeNode* root) {
    	if (root!=NULL)
    	{
	    	return 1+max(maxDepth(root->left), maxDepth(root->right));
		}
		else 
		return 0;   
    }
};
int main(){
	Solution sl;
	TreeNode tree(3);
	tree->left = TreeNode treee(1);
	tree->right = TreeNode treeeee(2);
	cout<<"final value:"<<sl.maxDepth(tree)<<endl;
	return 0;	
} 
