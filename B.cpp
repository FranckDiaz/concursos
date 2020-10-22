#include <iostream>

using namespace std;

int main(){
	int y,z,j;
	cin>>y;
	int res[y];
	for(int z=0;z<y;z++){
	int pety,num;	
	cin>>pety;
	cin>>num;
	
	
	if((pety == 1) or (pety == 2)){
		res[z] = 1;
	}
	else{
		int t=2;
		for(int i=1;i<1000;i++){
			for(int j=0;j<num;j++){
				t++;
				if(pety == t){
				res[z] = i;	
				}
				
			}
		}
	}
	
}
	for(int i=0;i<y;i++){
		cout<<res[i]<<endl;
	}
}
