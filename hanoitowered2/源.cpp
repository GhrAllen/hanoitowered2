#include<iostream>
using namespace std;
void move(int n,char source,char target){
	cout<<"("<<n<<","<<source<<"-->"<<target<<")"<<endl;
}
void hanoi(int n,char A,char B,char C){
	if(n==1){
		move(1,A,C);
	}
	if(n>1){
		hanoi(n-1,A,C,B);
	move(n,A,C);
	hanoi(n-1,B,A,C);
	}
}
int main(){
		int n;
		char A,B,C;
		cout<<"Please input the number of tower:\t";
		cin>>n;
		cout<<"Please input the start position:\t";
		cin>>A;
		cout<<"Please input the medium position:\t";
		cin>>B;
		cout<<"Please input the end position:\t";
		cin>>C;
		cout<<"The processes:"<<endl;
		hanoi(n,A,B,C);
		getchar();
		getchar();
		return 0;
}
