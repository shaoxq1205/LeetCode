#include<iostream>
#include<string>
#include <stack> 
#include<math.h>
#include<vector>
using namespace std;
Solution {
public:
    int trap(vector<int>& height) {
        int temp = 0;
        int lefthigh=0;
        int righthigh=0;
        int cursor = 0;
        int trapvalue = 0;
        for (int i=0;i<height.size();i++)
        {
			if (temp<=height(i)) //find the first maximum bar.
        	{
        		temp=height(i);
        		cursor +=1;
        		righthigh=temp;
        		trapvalue +=temp;
			}
        	else
			{
				for (int k=0;k<=cursor;k++) height(k)=temp;
				return trap(height);
			} 
		}
        return trapvalue;
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

