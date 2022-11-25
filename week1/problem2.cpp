#include<iostream>
#include<stdlib.h>
using namespace std;
int query (int l, int r){
	if(l==r) return -1;
	printf("? %d %d\n",l,r);
	fflush(stdout);
	int ret;
	scanf("%d",&ret);
	return ret;
}
int main(){
	int u;
	int l = 1;
	cin>>u;
	while(l<u){
		int query_result = query(l,u);
		int half = (l+u)/2;
		if(query_result<=half){
			if(query(l,half)==query_result){
			u=half;
			}else{
				l =half+1;
			}
			}
		else{
			if(query(half+1,u)==query_result){
			l=half+1;
		}else{
			u =half;
		}
	}
		
	}
	printf("! %d\n",u);
}
