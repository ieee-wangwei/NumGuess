#include<ctime>
#include<cstdlib>
#include<iostream>

using namespace std;

int main(){
	// define the number,bool
	char judge;
	int RandNum[3]={-1,-2,-3},i=0,m=0,wintime=0,play=0;
	int input[3],j=0,k=0,A=0,B=0;
	cout<<"你需要玩游戏吗？(y/n)"<<endl;
	cin>>judge;
	srand(time(NULL));
	while (judge=='y'){
		// get the random numbers
		play+=1;
		i=0;
		while (i<3){
			RandNum[i]=rand()*10/(RAND_MAX+1);
			if ((RandNum[1]-RandNum[0])*(RandNum[1]-RandNum[2])*(RandNum[0]-RandNum[2])==0) ;
			else i+=1;
		}

		//input
		k=0;
		while (k<7){
			A=0,B=0;
			cout<<"请输入三个数字"<<endl;
			for (m=0;m<3;++m){
				cin>>input[m];
				if  (input[m]==RandNum[m]) 
					A+=1;                                                                      
				else  
					B=B+(input[m]==RandNum[0])+(input[m]==RandNum[1])+(input[m]==RandNum[2]);
			}
			if (A==3&&B==0){
				cout<<"你赢了"<<endl;
				wintime+=1;
					break;
			}
			else {cout<<A<<"A"<<B<<"B"<<endl;
			k+=1;
			}
		}
		if(k==7){ cout<<"你输了"<<endl;
		cout<<"答案是"<<RandNum[0]<<RandNum[1]<<RandNum[2];
		}
		cout<<"你想还玩游戏吗？"<<endl;
		cin>>judge;
	}
	cout<<"你一共玩了"<<play<<"次"<<endl;
	cout<<"你赢了"<<wintime<<"次"<<endl;
	system("pause");
	return 0;
}
