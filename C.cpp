#include <iostream>

using namespace std;

int main(){
	int y,z,j;
	cin>>y;
	string res[y];
	for(int z=0;z<y;z++){
	int a;
	cin>>a;
	if((a % 2 == 0) and (a>3)){
		res[z] = "YES";
	}
	else{
		res[z] = "NO";
	}
	
}
	for(int i=0;i<y;i++){
		cout<<res[i]<<endl;
	}
}
