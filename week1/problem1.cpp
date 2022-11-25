#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int n,m,q;
	cin >> n;
	int arr[n];
    for(int i=0; i<n; i++){
    	cin>>arr[i];
        if(i!=0){
            arr[i]+= arr[i-1];
        }
    }
    cin >> m;
    for(int i=0; i<m; i++){
        cin >> q;
        cout<<lower_bound(arr, arr+n, q)-arr+1 <<"\n";
    }
}
