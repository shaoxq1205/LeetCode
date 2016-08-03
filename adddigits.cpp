#include<iostream>
#include<string>
#include <stack> 
#include<math.h>
using namespace std;
class Solution {
public:
    int addDigits(int num) {
    	int bitnum;
    	int numcpy=num;
    	int result=0;
    	while(numcpy>9){
	    	
	        bitnum = log10(numcpy)+1;//Tested, can return the right bit number, e.g. bitnum(3124)=4. Take care of overflow! So we can't multiply 10 first!
			for (int i=0;i<bitnum;i++)
			{
				result +=(numcpy-((numcpy/10)*10)); //Not binary >> << operators! But divide and multiply 10!
				numcpy=numcpy/10;
			}	
			numcpy=result;
			cout<<"temp value:"<<numcpy<<endl;
			return addDigits(numcpy);
    	}
    	return numcpy;
    }
};
int main(){
	Solution sl;
	cout<<"final value:"<<sl.addDigits(708538619)<<endl;
	return 0;	
} 
