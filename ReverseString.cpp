#include<iostream>
#include<string>
#include <stack> 
using namespace std;

class Solution {

public: 
	string reverseString(string s) { 	
		char temp;
		string result="";
		for(int i=0;i<s.length();i++) 
		{
			temp=s.at(s.length()-i-1);
			result+=temp;
		}
		return result;
	}   
};

int main(){
	cout<<"Hello World!"<<endl;
	Solution sl;
	string a="ABCDE";
	cout<<a<<endl;
	cout<<a.length()<<endl;
	cout<<a.at(2)<<endl;
	cout<<sl.reverseString(a)<<endl;
	return 0;	
} 
