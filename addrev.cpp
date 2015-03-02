#include<iostream>
using namespace std;

int rev(int no){
    int res=0;
    while(no>0){
       res = res*10;
       res = res + no%10;
       no = no/10;
    }
    //if(res==0) return 1;
    return res;
}


int main(){
    int tc,no1,no2;
	cin >> tc ;
	while(tc--){
		cin >> no1 >>no2;
	int res = rev(rev(no1)+rev(no2));
	//int newno2 = rev(newno);
	cout << res << endl;
}
	return 0;
}