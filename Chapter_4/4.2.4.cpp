//4.29
#include <iostream>
using namespace std;
int main()
{
	int i=0,j=0,k=0;
	for(i=1;i<33;i++){
		for(j=1;j<49;j++){
			k=100-i-j;
			if(3*i+2*j+0.5*k==100){
				cout<<"�ֱʣ�"<<i<<"��Բ��ʣ�"<<j<<"��Ǧ�ʣ�"<<k<<endl;
			}
		}
	}
	
	return 0;
}
