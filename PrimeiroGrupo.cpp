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
	cout<<endl<<"---------------------------------"<<endl<<endl;

	cout<<"------------------------------- Primeiro Grupo -----------------------------"<<endl<<endl;	
	cout<<"\n----------- Jogo 1 ----------"<<endl<<endl;
	FILE *file1;
	file1 = fopen("cartoes/cartao1.txt","r");
	n1=0,n2=0,n3=0,n4=0,n5=0,n6=0,n7=0,n8=0,n9=0,n10=0,n11=0,n12=0,n13=0,n14=0,n15=0;
	fscanf(file1, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15);
	cout<<"Numeros: "<< n1 <<" "<< n2  <<" "<< n3  <<" " << n4  <<" " << n5  <<" "<< n6  <<" " << n7  <<" "<< n8  <<" "<< n9  <<" "<< n10  <<" "<< n11  <<" "<< n12  <<" "<< n13  <<" "<< n14  <<" "<< n15  <<" "<<endl;
	int acertos=0;
	int erros=0;
	if(file1==NULL){
		printf("Arquivo nao pode ser aberto ! \n");
		system("PAUSE");
		return 0;
	}
	for(int i=0;i<15;i++){ // verifica se cada numero do cart�o est� no sorteio ou n�o e conta acertos e erros
		if(n1==num[i] || n2==num[i] || n3==num[i] || n4==num[i] || n5==num[i] || n6==num[i] || n7==num[i] || n8==num[i] || n9==num[i] || n10==num[i] || n11==num[i] || n12==num[i] || n13==num[i] || n14==num[i] || n15==num[i] ) {
			acertos=acertos+1;
		}
		else{
			erros=erros+1;
		}
	}
	if(acertos>10){
		textcolor(12);
		printf("Atencao CHUMBAO 11 PONTOS OU MAIS !!! \n");
		textcolor(10);
	}
	cout<<"Acertos do jogo 1: "<<acertos<<endl;
	cout<<"Erros do jogo 1: "<<erros<<endl;
	cout<<"------------------------------------------------------------"<<endl<<endl;
	textcolor(7);	
	// fim de um jogo
	cout<<"---------- Jogo 2 ----------"<<endl<<endl;
	acertos=0;
	erros=0;
	n1=0,n2=0,n3=0,n4=0,n5=0,n6=0,n7=0,n8=0,n9=0,n10=0,n11=0,n12=0,n13=0,n14=0,n15=0;
	FILE *file2;
	file2 = fopen("cartoes/cartao2.txt","r");
	fscanf(file2, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15);
	cout<<"Numeros: "<< n1 <<" "<< n2  <<" "<< n3  <<" " << n4  <<" " << n5  <<" "<< n6  <<" " << n7  <<" "<< n8  <<" "<< n9  <<" "<< n10  <<" "<< n11  <<" "<< n12  <<" "<< n13  <<" "<< n14  <<" "<< n15  <<" "<<endl;
	if(file2==NULL){
		printf("Arquivo nao pode ser aberto ! \n");
		system("PAUSE");
		return 0;
	}
	
	for(int i=0;i<15;i++){ // verifica se cada numero do cart�o est� no sorteio ou n�o e conta acertos e erros
		if(n1==num[i] || n2==num[i] || n3==num[i] || n4==num[i] || n5==num[i] || n6==num[i] || n7==num[i] || n8==num[i] || n9==num[i] || n10==num[i] || n11==num[i] || n12==num[i] || n13==num[i] || n14==num[i] || n15==num[i] ) {
			acertos=acertos+1;
		}
		else{
			erros=erros+1;
		}
	}
	if(acertos>10){
		textcolor(12);
		printf("Atencao CHUMBAO 11 PONTOS OU MAIS !!! \n");
		textcolor(10);
	}
	cout<<"Acertos do jogo 2: "<<acertos<<endl;
	cout<<"Erros do jogo 2: "<<erros<<endl;
	cout<<"------------------------------------------------------------"<<endl<<endl;
	textcolor(7);	
	 //fim de um jogo
	
	cout<<"------------------------------- Jogo 3 -----------------------------"<<endl<<endl;
	FILE *file3;
	file3 = fopen("cartoes/cartao3.txt","r");
	fscanf(file3, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15);
	cout<<"Numeros: "<< n1 <<" "<< n2  <<" "<< n3  <<" " << n4  <<" " << n5  <<" "<< n6  <<" " << n7  <<" "<< n8  <<" "<< n9  <<" "<< n10  <<" "<< n11  <<" "<< n12  <<" "<< n13  <<" "<< n14  <<" "<< n15  <<" "<<endl;
	acertos=0;
	erros=0;
	if(file3==NULL){
		printf("Arquivo nao pode ser aberto ! \n");
		system("PAUSE");
		return 0;
	}
	for(int i=0;i<15;i++){ // verifica se cada numero do cart�o est� no sorteio ou n�o e conta acertos e erros
		if(n1==num[i] || n2==num[i] || n3==num[i] || n4==num[i] || n5==num[i] || n6==num[i] || n7==num[i] || n8==num[i] || n9==num[i] || n10==num[i] || n11==num[i] || n12==num[i] || n13==num[i] || n14==num[i] || n15==num[i] ) {
			acertos=acertos+1;
		}
		else{
			erros=erros+1;
		}
	}
	if(acertos>10){
		textcolor(12);
		printf("Atencao CHUMBAO 11 PONTOS OU MAIS !!! \n");
		textcolor(10);
	}
	cout<<"Acertos do jogo 3: "<<acertos<<endl;
	cout<<"Erros do jogo 3: "<<erros<<endl;
	cout<<"------------------------------------------------------------"<<endl<<endl;
	textcolor(7); 
	//fim de um jogo
	
	cout<<"---------- Jogo 4 ----------"<<endl<<endl;
	FILE *file4;
	file4 = fopen("cartoes/cartao4.txt","r");
	fscanf(file4, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15);
	cout<<"Numeros: "<< n1 <<" "<< n2  <<" "<< n3  <<" " << n4  <<" " << n5  <<" "<< n6  <<" " << n7  <<" "<< n8  <<" "<< n9  <<" "<< n10  <<" "<< n11  <<" "<< n12  <<" "<< n13  <<" "<< n14  <<" "<< n15  <<" "<<endl;
	acertos=0;
	erros=0;
	if(file4==NULL){
		printf("Arquivo nao pode ser aberto ! \n");
		system("PAUSE");
		return 0;
	}
	for(int i=0;i<15;i++){ // verifica se cada numero do cart�o est� no sorteio ou n�o e conta acertos e erros
		if(n1==num[i] || n2==num[i] || n3==num[i] || n4==num[i] || n5==num[i] || n6==num[i] || n7==num[i] || n8==num[i] || n9==num[i] || n10==num[i] || n11==num[i] || n12==num[i] || n13==num[i] || n14==num[i] || n15==num[i] ) {
			acertos=acertos+1;
		}
		else{
			erros=erros+1;
		}
	}
	if(acertos>10){
		textcolor(12);
		printf("Atencao CHUMBAO 11 PONTOS OU MAIS !!! \n");
		textcolor(10);
	}
	cout<<"Acertos do jogo 4: "<<acertos<<endl;
	cout<<"Erros do jogo 4: "<<erros<<endl;
	cout<<"------------------------------------------------------------"<<endl<<endl;
	textcolor(7);
	 //fim de um jogo
	
	cout<<"------------------------------- Jogo 5 -----------------------------"<<endl<<endl;
	FILE *file5;
	file5 = fopen("cartoes/cartao5.txt","r");
	fscanf(file5, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15);
	cout<<"Numeros: "<< n1 <<" "<< n2  <<" "<< n3  <<" " << n4  <<" " << n5  <<" "<< n6  <<" " << n7  <<" "<< n8  <<" "<< n9  <<" "<< n10  <<" "<< n11  <<" "<< n12  <<" "<< n13  <<" "<< n14  <<" "<< n15  <<" "<<endl;
	acertos=0;
	erros=0;
	if(file5==NULL){
		printf("Arquivo nao pode ser aberto ! \n");
		system("PAUSE");
		return 0;
	}
	for(int i=0;i<15;i++){ // verifica se cada numero do cart�o est� no sorteio ou n�o e conta acertos e erros
		if(n1==num[i] || n2==num[i] || n3==num[i] || n4==num[i] || n5==num[i] || n6==num[i] || n7==num[i] || n8==num[i] || n9==num[i] || n10==num[i] || n11==num[i] || n12==num[i] || n13==num[i] || n14==num[i] || n15==num[i] ) {
			acertos=acertos+1;
		}
		else{
			erros=erros+1;
		}
	}
	if(acertos>10){
		textcolor(12);
		printf("Atencao CHUMBAO 11 PONTOS OU MAIS !!! \n");
		textcolor(10);
	}
	cout<<"Acertos do jogo 5: "<<acertos<<endl;
	cout<<"Erros do jogo 5: "<<erros<<endl;
	cout<<"------------------------------------------------------------"<<endl<<endl;
	textcolor(7); 
	//fim de um jogo
	
	cout<<"------------------------------- Jogo 6 -----------------------------"<<endl<<endl;
	FILE *file6;
	file6 = fopen("cartoes/cartao6.txt","r");
	fscanf(file6, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15);
	cout<<"Numeros: "<< n1 <<" "<< n2  <<" "<< n3  <<" " << n4  <<" " << n5  <<" "<< n6  <<" " << n7  <<" "<< n8  <<" "<< n9  <<" "<< n10  <<" "<< n11  <<" "<< n12  <<" "<< n13  <<" "<< n14  <<" "<< n15  <<" "<<endl;
	acertos=0;
	erros=0;
	if(file6==NULL){
		printf("Arquivo nao pode ser aberto ! \n");
		system("PAUSE");
		return 0;
	}
	for(int i=0;i<15;i++){ // verifica se cada numero do cart�o est� no sorteio ou n�o e conta acertos e erros
		if(n1==num[i] || n2==num[i] || n3==num[i] || n4==num[i] || n5==num[i] || n6==num[i] || n7==num[i] || n8==num[i] || n9==num[i] || n10==num[i] || n11==num[i] || n12==num[i] || n13==num[i] || n14==num[i] || n15==num[i] ) {
			acertos=acertos+1;
		}
		else{
			erros=erros+1;
		}
	}
	if(acertos>10){
		textcolor(12);
		printf("Atencao CHUMBAO 11 PONTOS OU MAIS !!! \n");
		textcolor(10);
	}
	cout<<"Acertos do jogo 6: "<<acertos<<endl;
	cout<<"Erros do jogo 6: "<<erros<<endl;
	cout<<"------------------------------------------------------------"<<endl<<endl;
	textcolor(7);
	 //fim de um jogo
	
	cout<<"------------------------------- Jogo 7 -----------------------------"<<endl<<endl;
	FILE *file7;
	file7 = fopen("cartoes/cartao7.txt","r");
	fscanf(file7, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15);
	cout<<"Numeros: "<< n1 <<" "<< n2  <<" "<< n3  <<" " << n4  <<" " << n5  <<" "<< n6  <<" " << n7  <<" "<< n8  <<" "<< n9  <<" "<< n10  <<" "<< n11  <<" "<< n12  <<" "<< n13  <<" "<< n14  <<" "<< n15  <<" "<<endl;
	acertos=0;
	erros=0;
	if(file7==NULL){
		printf("Arquivo nao pode ser aberto ! \n");
		system("PAUSE");
		return 0;
	}
	for(int i=0;i<15;i++){ // verifica se cada numero do cart�o est� no sorteio ou n�o e conta acertos e erros
		if(n1==num[i] || n2==num[i] || n3==num[i] || n4==num[i] || n5==num[i] || n6==num[i] || n7==num[i] || n8==num[i] || n9==num[i] || n10==num[i] || n11==num[i] || n12==num[i] || n13==num[i] || n14==num[i] || n15==num[i] ) {
			acertos=acertos+1;
		}
		else{
			erros=erros+1;
		}
	}
	if(acertos>10){
		textcolor(12);
		printf("Atencao CHUMBAO 11 PONTOS OU MAIS !!! \n");
		textcolor(10);
	}
	cout<<"Acertos do jogo 7: "<<acertos<<endl;
	cout<<"Erros do jogo 7: "<<erros<<endl;
	cout<<"------------------------------------------------------------"<<endl<<endl;
	textcolor(7);
	 //fim de um jogo
	
	cout<<"------------------------------- Jogo 8 -----------------------------"<<endl<<endl;
	FILE *file8;
	file8 = fopen("cartoes/cartao8.txt","r");
	fscanf(file8, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15);
	cout<<"Numeros: "<< n1 <<" "<< n2  <<" "<< n3  <<" " << n4  <<" " << n5  <<" "<< n6  <<" " << n7  <<" "<< n8  <<" "<< n9  <<" "<< n10  <<" "<< n11  <<" "<< n12  <<" "<< n13  <<" "<< n14  <<" "<< n15  <<" "<<endl;
	acertos=0;
	erros=0;
	if(file8==NULL){
		printf("Arquivo nao pode ser aberto ! \n");
		system("PAUSE");
		return 0;
	}
	for(int i=0;i<15;i++){ // verifica se cada numero do cart�o est� no sorteio ou n�o e conta acertos e erros
		if(n1==num[i] || n2==num[i] || n3==num[i] || n4==num[i] || n5==num[i] || n6==num[i] || n7==num[i] || n8==num[i] || n9==num[i] || n10==num[i] || n11==num[i] || n12==num[i] || n13==num[i] || n14==num[i] || n15==num[i] ) {
			acertos=acertos+1;
		}
		else{
			erros=erros+1;
		}
	}
	if(acertos>10){
		textcolor(12);
		printf("Atencao CHUMBAO 11 PONTOS OU MAIS !!! \n");
		textcolor(10);
	}
	cout<<"Acertos do jogo 8: "<<acertos<<endl;
	cout<<"Erros do jogo 8: "<<erros<<endl;
	cout<<"------------------------------------------------------------"<<endl<<endl;	
	textcolor(7);
	//fim de um jogo
	
	cout<<"------------------------------- Jogo 9 -----------------------------"<<endl<<endl;
	FILE *file9;
	file9 = fopen("cartoes/cartao9.txt","r");
	fscanf(file9, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15);
	cout<<"Numeros: "<< n1 <<" "<< n2  <<" "<< n3  <<" " << n4  <<" " << n5  <<" "<< n6  <<" " << n7  <<" "<< n8  <<" "<< n9  <<" "<< n10  <<" "<< n11  <<" "<< n12  <<" "<< n13  <<" "<< n14  <<" "<< n15  <<" "<<endl;
	acertos=0;
	erros=0;
	if(file9==NULL){
		printf("Arquivo nao pode ser aberto ! \n");
		system("PAUSE");
		return 0;
	}
	for(int i=0;i<15;i++){ // verifica se cada numero do cart�o est� no sorteio ou n�o e conta acertos e erros
		if(n1==num[i] || n2==num[i] || n3==num[i] || n4==num[i] || n5==num[i] || n6==num[i] || n7==num[i] || n8==num[i] || n9==num[i] || n10==num[i] || n11==num[i] || n12==num[i] || n13==num[i] || n14==num[i] || n15==num[i] ) {
			acertos=acertos+1;
		}
		else{
			erros=erros+1;
		}
	}
	if(acertos>10){
		textcolor(12);
		printf("Atencao CHUMBAO 11 PONTOS OU MAIS !!! \n");
		textcolor(10);
	}
	cout<<"Acertos do jogo 9: "<<acertos<<endl;
	cout<<"Erros do jogo 9: "<<erros<<endl;
	cout<<"------------------------------------------------------------"<<endl<<endl;
	textcolor(7);
	//fim de um jogo
	
	cout<<"------------------------------- Jogo 10-----------------------------"<<endl<<endl;
	FILE *file10;
	file10 = fopen("cartoes/cartao10.txt","r");
	fscanf(file10, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15);
	cout<<"Numeros: "<< n1 <<" "<< n2  <<" "<< n3  <<" " << n4  <<" " << n5  <<" "<< n6  <<" " << n7  <<" "<< n8  <<" "<< n9  <<" "<< n10  <<" "<< n11  <<" "<< n12  <<" "<< n13  <<" "<< n14  <<" "<< n15  <<" "<<endl;
	acertos=0;
	erros=0;
	if(file10==NULL){
		printf("Arquivo nao pode ser aberto ! \n");
		system("PAUSE");
		return 0;
	}
	for(int i=0;i<15;i++){ // verifica se cada numero do cart�o est� no sorteio ou n�o e conta acertos e erros
		if(n1==num[i] || n2==num[i] || n3==num[i] || n4==num[i] || n5==num[i] || n6==num[i] || n7==num[i] || n8==num[i] || n9==num[i] || n10==num[i] || n11==num[i] || n12==num[i] || n13==num[i] || n14==num[i] || n15==num[i] ) {
			acertos=acertos+1;
		}
		else{
			erros=erros+1;
		}
	}
	if(acertos>10){
		textcolor(12);
		printf("Atencao CHUMBAO 11 PONTOS OU MAIS !!! \n");
		textcolor(10);
	}
	cout<<"Acertos do jogo 10: "<<acertos<<endl;
	cout<<"Erros do jogo 10: "<<erros<<endl;
	cout<<"------------------------------------------------------------"<<endl<<endl;
	textcolor(7); 
	//fim de um jogo
	
	cout<<"------------------------------- Jogo 11 -----------------------------"<<endl<<endl;
	FILE *file11;
	file11 = fopen("cartoes/cartao11.txt","r");
	fscanf(file11, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15);
	cout<<"Numeros: "<< n1 <<" "<< n2  <<" "<< n3  <<" " << n4  <<" " << n5  <<" "<< n6  <<" " << n7  <<" "<< n8  <<" "<< n9  <<" "<< n10  <<" "<< n11  <<" "<< n12  <<" "<< n13  <<" "<< n14  <<" "<< n15  <<" "<<endl;
	acertos=0;
	erros=0;
	if(file11==NULL){
		printf("Arquivo nao pode ser aberto ! \n");
		system("PAUSE");
		return 0;
	}
	for(int i=0;i<15;i++){ // verifica se cada numero do cart�o est� no sorteio ou n�o e conta acertos e erros
		if(n1==num[i] || n2==num[i] || n3==num[i] || n4==num[i] || n5==num[i] || n6==num[i] || n7==num[i] || n8==num[i] || n9==num[i] || n10==num[i] || n11==num[i] || n12==num[i] || n13==num[i] || n14==num[i] || n15==num[i] ) {
			acertos=acertos+1;
		}
		else{
			erros=erros+1;
		}
	}
	if(acertos>10){
		textcolor(12);
		printf("Atencao CHUMBAO 11 PONTOS OU MAIS !!! \n");
		textcolor(10);
	}
	cout<<"Acertos do jogo 11: "<<acertos<<endl;
	cout<<"Erros do jogo 11: "<<erros<<endl;
	cout<<"------------------------------------------------------------"<<endl<<endl;
	textcolor(7);
	//fim de um jogo
	
	cout<<"------------------------------- Jogo 12 -----------------------------"<<endl<<endl;
	FILE *file12;
	file12 = fopen("cartoes/cartao12.txt","r");
	fscanf(file12, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15);
	cout<<"Numeros: "<< n1 <<" "<< n2  <<" "<< n3  <<" " << n4  <<" " << n5  <<" "<< n6  <<" " << n7  <<" "<< n8  <<" "<< n9  <<" "<< n10  <<" "<< n11  <<" "<< n12  <<" "<< n13  <<" "<< n14  <<" "<< n15  <<" "<<endl;
	acertos=0;
	erros=0;
	if(file12==NULL){
		printf("Arquivo nao pode ser aberto ! \n");
		system("PAUSE");
		return 0;
	}
	for(int i=0;i<15;i++){ // verifica se cada numero do cart�o est� no sorteio ou n�o e conta acertos e erros
		if(n1==num[i] || n2==num[i] || n3==num[i] || n4==num[i] || n5==num[i] || n6==num[i] || n7==num[i] || n8==num[i] || n9==num[i] || n10==num[i] || n11==num[i] || n12==num[i] || n13==num[i] || n14==num[i] || n15==num[i] ) {
			acertos=acertos+1;
		}
		else{
			erros=erros+1;
		}
	}
	if(acertos>10){
		textcolor(12);
		printf("Atencao CHUMBAO 11 PONTOS OU MAIS !!! \n");
		textcolor(10);
	}
	cout<<"Acertos do jogo 12: "<<acertos<<endl;
	cout<<"Erros do jogo 12: "<<erros<<endl;
	cout<<"------------------------------------------------------------"<<endl<<endl;	
	textcolor(7);
	//fim de um jogo
	
	cout<<"------------------------------- Jogo 13 -----------------------------"<<endl<<endl;
	FILE *file13;
	file13 = fopen("cartoes/cartao13.txt","r");
	fscanf(file13, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15);
	cout<<"Numeros: "<< n1 <<" "<< n2  <<" "<< n3  <<" " << n4  <<" " << n5  <<" "<< n6  <<" " << n7  <<" "<< n8  <<" "<< n9  <<" "<< n10  <<" "<< n11  <<" "<< n12  <<" "<< n13  <<" "<< n14  <<" "<< n15  <<" "<<endl;
	acertos=0;
	erros=0;
	if(file13==NULL){
		printf("Arquivo nao pode ser aberto ! \n");
		system("PAUSE");
		return 0;
	}
	for(int i=0;i<15;i++){ // verifica se cada numero do cart�o est� no sorteio ou n�o e conta acertos e erros
		if(n1==num[i] || n2==num[i] || n3==num[i] || n4==num[i] || n5==num[i] || n6==num[i] || n7==num[i] || n8==num[i] || n9==num[i] || n10==num[i] || n11==num[i] || n12==num[i] || n13==num[i] || n14==num[i] || n15==num[i] ) {
			acertos=acertos+1;
		}
		else{
			erros=erros+1;
		}
	}
	if(acertos>10){
		textcolor(12);
		printf("Atencao CHUMBAO 11 PONTOS OU MAIS !!! \n");
		textcolor(10);
	}
	cout<<"Acertos do jogo 13: "<<acertos<<endl;
	cout<<"Erros do jogo 13: "<<erros<<endl;
	cout<<"------------------------------------------------------------"<<endl<<endl;
	textcolor(7);
	//fim de um jogo
	
	cout<<"------------------------------- Jogo 14 -----------------------------"<<endl<<endl;
	FILE *file14;
	file14 = fopen("cartoes/cartao14.txt","r");
	fscanf(file14, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15);
	cout<<"Numeros: "<< n1 <<" "<< n2  <<" "<< n3  <<" " << n4  <<" " << n5  <<" "<< n6  <<" " << n7  <<" "<< n8  <<" "<< n9  <<" "<< n10  <<" "<< n11  <<" "<< n12  <<" "<< n13  <<" "<< n14  <<" "<< n15  <<" "<<endl;
	acertos=0;
	erros=0;
	if(file14==NULL){
		printf("Arquivo nao pode ser aberto ! \n");
		system("PAUSE");
		return 0;
	}
	for(int i=0;i<15;i++){ // verifica se cada numero do cart�o est� no sorteio ou n�o e conta acertos e erros
		if(n1==num[i] || n2==num[i] || n3==num[i] || n4==num[i] || n5==num[i] || n6==num[i] || n7==num[i] || n8==num[i] || n9==num[i] || n10==num[i] || n11==num[i] || n12==num[i] || n13==num[i] || n14==num[i] || n15==num[i] ) {
			acertos=acertos+1;
		}
		else{
			erros=erros+1;
		}
	}
	if(acertos>10){
		textcolor(12);
		printf("Atencao CHUMBAO 11 PONTOS OU MAIS !!! \n");
		textcolor(10);
	}
	cout<<"Acertos do jogo 14: "<<acertos<<endl;
	cout<<"Erros do jogo 14: "<<erros<<endl;
	cout<<"------------------------------------------------------------"<<endl<<endl;
	textcolor(7);
	//fim de um jogo
	
	cout<<"------------------------------- Jogo 15 -----------------------------"<<endl<<endl;	
	FILE *file15;
	file15 = fopen("cartoes/cartao15.txt","r");
	fscanf(file15, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15);
	cout<<"Numeros: "<< n1 <<" "<< n2  <<" "<< n3  <<" " << n4  <<" " << n5  <<" "<< n6  <<" " << n7  <<" "<< n8  <<" "<< n9  <<" "<< n10  <<" "<< n11  <<" "<< n12  <<" "<< n13  <<" "<< n14  <<" "<< n15  <<" "<<endl;
	acertos=0;
	erros=0;
	if(file15==NULL){
		printf("Arquivo nao pode ser aberto ! \n");
		system("PAUSE");
		return 0;
	}
	for(int i=0;i<15;i++){ // verifica se cada numero do cart�o est� no sorteio ou n�o e conta acertos e erros
		if(n1==num[i] || n2==num[i] || n3==num[i] || n4==num[i] || n5==num[i] || n6==num[i] || n7==num[i] || n8==num[i] || n9==num[i] || n10==num[i] || n11==num[i] || n12==num[i] || n13==num[i] || n14==num[i] || n15==num[i] ) {
			acertos=acertos+1;
		}
		else{
			erros=erros+1;
		}
	}
	if(acertos>10){
		textcolor(12);
		printf("Atencao CHUMBAO 11 PONTOS OU MAIS !!! \n");
		textcolor(10);
	}
	cout<<"Acertos do jogo 15: "<<acertos<<endl;
	cout<<"Erros do jogo 15: "<<erros<<endl;
	cout<<"------------------------------------------------------------"<<endl<<endl;
	textcolor(7);
	//fim de um jogo
	
	cout<<"------------------------------- Jogo 16 -----------------------------"<<endl<<endl;	
	FILE *file16;
	file16 = fopen("cartoes/cartao16.txt","r");
	fscanf(file16, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15);
	cout<<"Numeros: "<< n1 <<" "<< n2  <<" "<< n3  <<" " << n4  <<" " << n5  <<" "<< n6  <<" " << n7  <<" "<< n8  <<" "<< n9  <<" "<< n10  <<" "<< n11  <<" "<< n12  <<" "<< n13  <<" "<< n14  <<" "<< n15  <<" "<<endl;
	acertos=0;
	erros=0;
	if(file16==NULL){
		printf("Arquivo nao pode ser aberto ! \n");
		system("PAUSE");
		return 0;
	}
	for(int i=0;i<15;i++){ // verifica se cada numero do cart�o est� no sorteio ou n�o e conta acertos e erros
		if(n1==num[i] || n2==num[i] || n3==num[i] || n4==num[i] || n5==num[i] || n6==num[i] || n7==num[i] || n8==num[i] || n9==num[i] || n10==num[i] || n11==num[i] || n12==num[i] || n13==num[i] || n14==num[i] || n15==num[i] ) {
			acertos=acertos+1;
		}
		else{
			erros=erros+1;
		}
	}
	if(acertos>10){
		textcolor(12);
		printf("Atencao CHUMBAO 11 PONTOS OU MAIS !!! \n");
		textcolor(10);
	}
	cout<<"Acertos do jogo 16: "<<acertos<<endl;
	cout<<"Erros do jogo 16: "<<erros<<endl;
	cout<<"------------------------------------------------------------"<<endl<<endl;
	textcolor(7);
	//fim de um jogo
	
	cout<<"------------------------------- Jogo 17 -----------------------------"<<endl<<endl;	
	FILE *file17;
	file17 = fopen("cartoes/cartao17.txt","r");
	fscanf(file17, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15);
	cout<<"Numeros: "<< n1 <<" "<< n2  <<" "<< n3  <<" " << n4  <<" " << n5  <<" "<< n6  <<" " << n7  <<" "<< n8  <<" "<< n9  <<" "<< n10  <<" "<< n11  <<" "<< n12  <<" "<< n13  <<" "<< n14  <<" "<< n15  <<" "<<endl;
	acertos=0;
	erros=0;
	if(file17==NULL){
		printf("Arquivo nao pode ser aberto ! \n");
		system("PAUSE");
		return 0;
	}
	for(int i=0;i<15;i++){ // verifica se cada numero do cart�o est� no sorteio ou n�o e conta acertos e erros
		if(n1==num[i] || n2==num[i] || n3==num[i] || n4==num[i] || n5==num[i] || n6==num[i] || n7==num[i] || n8==num[i] || n9==num[i] || n10==num[i] || n11==num[i] || n12==num[i] || n13==num[i] || n14==num[i] || n15==num[i] ) {
			acertos=acertos+1;
		}
		else{
			erros=erros+1;
		}
	}
	if(acertos>10){
		textcolor(12);
		printf("Atencao CHUMBAO 11 PONTOS OU MAIS !!! \n");
		textcolor(10);
	}
	cout<<"Acertos do jogo 17: "<<acertos<<endl;
	cout<<"Erros do jogo 17: "<<erros<<endl;
	cout<<"------------------------------------------------------------"<<endl<<endl;
	textcolor(7); 
	//fim de um jogo
	
	cout<<"------------------------------- Jogo 18 -----------------------------"<<endl<<endl;	
	FILE *file18;
	file18 = fopen("cartoes/cartao18.txt","r");
	fscanf(file18, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15);
	cout<<"Numeros: "<< n1 <<" "<< n2  <<" "<< n3  <<" " << n4  <<" " << n5  <<" "<< n6  <<" " << n7  <<" "<< n8  <<" "<< n9  <<" "<< n10  <<" "<< n11  <<" "<< n12  <<" "<< n13  <<" "<< n14  <<" "<< n15  <<" "<<endl;
	acertos=0;
	erros=0;
	if(file18==NULL){
		printf("Arquivo nao pode ser aberto ! \n");
		system("PAUSE");
		return 0;
	}
	for(int i=0;i<15;i++){ // verifica se cada numero do cart�o est� no sorteio ou n�o e conta acertos e erros
		if(n1==num[i] || n2==num[i] || n3==num[i] || n4==num[i] || n5==num[i] || n6==num[i] || n7==num[i] || n8==num[i] || n9==num[i] || n10==num[i] || n11==num[i] || n12==num[i] || n13==num[i] || n14==num[i] || n15==num[i] ) {
			acertos=acertos+1;
		}
		else{
			erros=erros+1;
		}
	}
	if(acertos>10){
		textcolor(12);
		printf("Atencao CHUMBAO 11 PONTOS OU MAIS !!! \n");
		textcolor(10);
	}
	cout<<"Acertos do jogo 18: "<<acertos<<endl;
	cout<<"Erros do jogo 18: "<<erros<<endl;
	cout<<"------------------------------------------------------------"<<endl<<endl;
	textcolor(7); 
	//fim de um jogo
	
	cout<<"------------------------------- Jogo 19 -----------------------------"<<endl<<endl;	
	FILE *file19;
	file19 = fopen("cartoes/cartao19.txt","r");
	fscanf(file19, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15);
	cout<<"Numeros: "<< n1 <<" "<< n2  <<" "<< n3  <<" " << n4  <<" " << n5  <<" "<< n6  <<" " << n7  <<" "<< n8  <<" "<< n9  <<" "<< n10  <<" "<< n11  <<" "<< n12  <<" "<< n13  <<" "<< n14  <<" "<< n15  <<" "<<endl;
	acertos=0;
	erros=0;
	if(file19==NULL){
		printf("Arquivo nao pode ser aberto ! \n");
		system("PAUSE");
		return 0;
	}
	for(int i=0;i<15;i++){ // verifica se cada numero do cart�o est� no sorteio ou n�o e conta acertos e erros
		if(n1==num[i] || n2==num[i] || n3==num[i] || n4==num[i] || n5==num[i] || n6==num[i] || n7==num[i] || n8==num[i] || n9==num[i] || n10==num[i] || n11==num[i] || n12==num[i] || n13==num[i] || n14==num[i] || n15==num[i] ) {
			acertos=acertos+1;
		}
		else{
			erros=erros+1;
		}
	}
	if(acertos>10){
		textcolor(12);
		printf("Atencao CHUMBAO 11 PONTOS OU MAIS !!! \n");
		textcolor(10);
	}
	cout<<"Acertos do jogo 19: "<<acertos<<endl;
	cout<<"Erros do jogo 19: "<<erros<<endl;
	cout<<"------------------------------------------------------------"<<endl<<endl;
	textcolor(7); 
	//fim de um jogo
	
	
	
	fclose(file1);
	fclose(file2);
	fclose(file3);
	fclose(file4);
	fclose(file5);
	fclose(file6);
	fclose(file7);
	fclose(file8);
	fclose(file9);
	fclose(file10);
	fclose(file11);
	fclose(file12);
	fclose(file13);
	fclose(file14);
	fclose(file15);
	fclose(file16);
	fclose(file17);
	fclose(file18);
	fclose(file19);
	system("PAUSE");
}
