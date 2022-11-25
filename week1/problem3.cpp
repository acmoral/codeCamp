#include <bits/stdc++.h>
using namespace std;
string query (int x, int y){
	printf("? %d %d\n",x,y);
	fflush(stdout);
	string ansq;
    cin >> ansq;
    return ansq;
}
int main(){
	string status;
	while(cin>>status){
		if(status =="start"){
	    /*find the interval that contains the number*/ 
			int i =0;
			int x =0;
			int y = 1;
		 	string answer = query(x,y);
		 	while(answer == "y"){
		 		x = pow(2,i);
		 		y = pow(2,i+1);
		    	answer = query(x,y);
		    	i+=1;
		 	}
		 /*do binary search with interval x and y */
			while (y - x > 1){
				int mit = x+(y-x)/2;
				answer = query(x,mit);
				if(answer == "x"){
					y=mit;
				}else if(answer =="e")
					{
				      return 0;
					}
				else{
					x=mit;
				}
			}
			cout<<"! "<<y<<endl;
		}else if(status =="mistake"){
			return 0;
		}
		else{
			return 0;
		}
	}
}
