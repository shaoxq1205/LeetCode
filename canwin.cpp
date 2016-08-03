#include<iostream>
#include<string>
#include <stack> 
using namespace std;
class Solution {
public:
    bool canWinNim(int n) {
        if (n<=0) return 0;
        else if((n%3)==1) return 0;
        else return 1;
        
    }
};
int main(){
	cout<<"Hello World!"<<endl;
	Solution sl;
	for (int i=0;i<18;i++)
	{
			cout<<"case "<<i<<":"<<sl.canWinNim(i)<<endl;
	}
	return 0;	
} 
