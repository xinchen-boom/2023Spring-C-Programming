//4.3
#include <iostream>
using namespace std;
#define Q 1.42e8
int main()
{
	unsigned long long sum=1;
	for(int i=1;i<64;i++){
		unsigned long long num=1;
		for(int j=0;j<i;j++){
			num=num*2;
		}
		sum=sum+num;		
	}
	cout<<"������"<<sum<<endl;
	cout<<"��������"<<sum/Q<<endl;
	return 0;
}
