#include <iostream>
#include <time.h>
#include <windows.h>
using namespace std;
int main(){
	int setNumber,gessNumber; 
	long startTime;
	int first,second,third,fourth;
	int gessFirst,gessSecond,gessThird,gessFourth;
	int flag0=0,flag1=1;
	do{
		//����
		system("cls");
		
		//�����		
		startTime = GetTickCount();
		srand(startTime);
		setNumber= rand()/( 8999+ 1)+1000;
		flag0=0;
		
		//��������
		first=setNumber/1000;
		second=setNumber%1000/100;
		third=setNumber%100/10;
		fourth=setNumber%10;
				
		//����
		for(int i=0;i<5;i++){
			
			//�������
			cout<<"������4λ��"<<endl;
			while(1){
				cin>>gessNumber;
				if(gessNumber>9999 || gessNumber<1000){
					cout<<"���벻��ȷ����������λ��"<<endl;
				}else{
					break;
				}
			}
			
			//���
			gessFirst=gessNumber/1000;
			gessSecond=gessNumber%1000/100;
			gessThird=gessNumber%100/10;
			gessFourth=gessNumber%10;
			
			//��һλ�б�
			if(gessFirst==first){
				cout<<"O";
			}else if(gessFirst==second || gessFirst==third || gessFirst==fourth){
				cout<<"-";
			}else{
				cout<<"X";
			}
			
			//�ڶ�λ�б�
			if(gessSecond==second){
				cout<<"O";
			}else if(gessSecond==first || gessSecond==third || gessSecond==fourth){
				cout<<"-";
			}else{
				cout<<"X";
			}
			
			//����λ�б�
			if(gessThird==third){
				cout<<"O";
			}else if(gessThird==second || gessThird==first || gessThird==fourth){
				cout<<"-";
			}else{
				cout<<"X";
			}
			
			//����λ�б�
			if(gessFourth==fourth){
				cout<<"O"<<endl;
			}else if(gessFourth==second || gessFourth==third || gessFourth==first){
				cout<<"-"<<endl;
			}else{
				cout<<"X"<<endl;
			}
			
			if(setNumber==gessNumber){
				cout<<"�ش���ȷ"<<endl;
				flag0=1;
				break;
			}
		}
		
		//����
		if(flag0){
			cout<<"��Ϊ��"<<setNumber<<"\nѡ����(1)��(0)����"<<endl;
		}else{
			cout<<"5�λ����þ�����Ϊ��"<<setNumber<<"\nѡ����(1)��(0)����"<<endl;
		}		
		while(1){
			cin>>flag1;
			if(flag1!=1 &&flag1!=0){
				cout<<"���벻��ȷ������������"<<endl;
			}else{
				break;
			}	
		}		
	}while(flag1);
	return 0;
}
