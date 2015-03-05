#include<iostream>

using namespace std;

int main(){
    int tc;
	cin >> tc;
	while(tc--){
	 int no1 ,no2;
	 cin >> no1 >> no2;
	 if(no1!=no2 && no1-no2!=2) {
	 	cout << "No Number" <<endl;
	 	continue;
	 }

	 if(no1%2==0 && no2%2==0) cout << no1+no2 <<endl;

	 else cout << no1+no2-1 <<endl;

	}
	return 0;
}