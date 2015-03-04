#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	int tc;long long sum = 0;
	cin >> tc;
	while(tc--){
	int nopart ;
	cin >> nopart;
	int men[nopart];
	int women[nopart];
	//int temp,temp2;

	for(int i=0;i<nopart;i++){
	    cin >> men[i];
	}

	for(int j=0;j<nopart;j++){
	    cin >> women[j];   
	}

    sort(men,men+nopart);
	sort(women,women+nopart);
	

	for(int k=0;k<nopart;k++){
	   sum+=men[k]*women[k];
	}    

	cout << sum <<endl;

	}

}
