#include<iostream>
#include<stdlib.h>
#include<conio.c>
using namespace std;


int main(){
	int num[15]; // insere os numeros do sorteio 
		FILE *file;
		file = fopen("sorteio.txt","r");
		if(file==NULL){
			printf("Arquivo nao pode ser aberto ! \n");
			system("PAUSE");
			return 0;
		}
		int n1=0,n2=0,n3=0,n4=0,n5=0,n6=0,n7=0,n8=0,n9=0,n10=0,n11=0,n12=0,n13=0,n14=0,n15=0;
		fscanf(file, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15);
		num[0]=n1;num[1]=n2;num[2]=n3;num[3]=n4;num[4]=n5;num[5]=n6;num[6]=n7;num[7]=n8;num[8]=n9;num[9]=n10;num[10]=n11;num[11]=n12;num[12]=n13;num[13]=n14;num[14]=n15;
		system("cls");
	cout<<"Confira os numeros do Concurso que deseja conferir: "<<endl;	
	for(int i=0;i<15;i++){
		cout<<num[i]<<" ";
	}
	cout<<"-------------------------------------------------------------------------------"<<endl<<endl;

for(int i=0;i<5;i++){
	cout<<"----------Jogo ["<<i<<"]----------"<<endl;	
}
