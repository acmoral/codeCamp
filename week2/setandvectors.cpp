#include<iostream>
#include<set>
#include<bits/stdc++.h>

using namespace std;
int main(){
	set<int> test;
	for(int i=0; i<4;i++){
		test.insert(i);
	}
	
	for(auto it=test.begin();it!=test.end();it++)
	{

		cout<<*it<<endl;
		
	}
	return 0;
}
