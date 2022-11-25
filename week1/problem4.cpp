#include <bits/stdc++.h>
using namespace std;
string query (int x, int y){
	printf("1 %d %d\n",x,y);
	fflush(stdout);
	string ansq;
    cin >> ansq;
    return ansq;
}
int binary_search(int l, int r){
	while(l<r){
		int mit = (l+r)/2;
		string answer = query(mit, mit+1);
		if(answer == "TAK"){
			r = mit;
		}else{
			l = mit+1;
		}
	}
	
	return l;
}
int main(){
	int n,k;
	cin>>n;
	cin>>k;
	if(n==k){
		printf("2 %d %d\n",1,2);
		fflush(stdout);
	}
	int first_dish = binary_search(1,n);
	/* Now look for 2 dishes in the left and right side of the first dish,
	 if there is another dish it must be on either side
	*/
	if(first_dish==1){
		int second_dish = binary_search(first_dish+1,n);
		printf("2 %d %d\n",first_dish,second_dish);
		fflush(stdout);
		return 0;
	}else if(first_dish ==n){
		int second_dish = binary_search(1,first_dish-1);
		printf("2 %d %d\n",first_dish,second_dish);
		fflush(stdout);
		return 0;
	}
	int second_dish = binary_search(1,first_dish -1);
	/* Do a query to know which plate is a plate*/
	string last_query = query(second_dish,first_dish);
	if(last_query == "TAK"){
		printf("2 %d %d\n",first_dish,second_dish);
		fflush(stdout);
	}else{
		second_dish = binary_search(first_dish +1,n);
		printf("2 %d %d\n",first_dish,second_dish);
		fflush(stdout);
	}
	return 0;
}
