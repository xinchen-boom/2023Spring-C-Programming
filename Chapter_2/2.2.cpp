#include <iostream>
using namespace std;
int main()
{
	char node0;
	cout<<"������Сд��ĸ��";
	cin>>node0;
	if ('a'<=node0&&node0<='z'){
		cout<<"��д��ĸΪ��"<<char(node0-(97-65))<<endl;
	}else{
		cout<<"error"<<endl;
	}
	return 0;
}
