#include <bits/stdc++.h>
using namespace std;


void printAllSubsequences(int index,string input,string output, vector<string>& ans){  
	
	// Function of print all subsequences of a string
    
	// base case
	if(index>=input.size())
	{
             ans.push_back(output);	
	}
		
	
	// we are going to use pick and non-pick technique
	output+=input[index];
	// picking the character
	printAllSubsequences(index+1,input,output,ans);
	
        outuput-=input[index];
	// not picking the element
	printAllSubsequences(index+1,input,output,ans);
	
}

int main(){
    
	string input = "abc";
	
	vector<string>ans;
	string output="";

	printAllSubsequences(0,input,output,ans);  // here 0 is the initial index from where the subsequence starts...
	
	for(auto &it:ans)cout<<it<<" ";

	return 0;
}
