#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	while(n!=-1){
		int arr[n];
		int ans = 0;
		int avg = 0;int sum = 0;
		
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		
		for(int k=0;k<n;k++){
			sum = sum+arr[k];
		}
		
		avg = sum/n;
		
		if(avg*n==sum){
			for(int j=0;j<n;j++){
				if(avg>arr[j]){
					ans = ans + (avg-arr[j]);
				}
			}
			cout << ans <<endl;
		}
		else{
			cout << -1 <<endl;
		}
		
		cin >> n;
	
	}
	return 0;
}