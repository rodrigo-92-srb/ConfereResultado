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
	
	int acertos=0;
	int erros=0;
	cout<<"------------------------------- Segundo Grupo -----------------------------"<<endl<<endl;	
	cout<<"------------------------------- Jogo 20-----------------------------"<<endl<<endl;	
	FILE *file20;
	file20 = fopen("cartoes/cartao20.txt","r");
	fscanf(file20, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15);
	cout<<"Numeros: "<< n1 <<" "<< n2  <<" "<< n3  <<" " << n4  <<" " << n5  <<" "<< n6  <<" " << n7  <<" "<< n8  <<" "<< n9  <<" "<< n10  <<" "<< n11  <<" "<< n12  <<" "<< n13  <<" "<< n14  <<" "<< n15  <<" "<<endl;
	acertos=0;
	erros=0;
	if(file20==NULL){
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
	cout<<"Acertos do jogo 20: "<<acertos<<endl;
	cout<<"Erros do jogo 20: "<<erros<<endl;
	cout<<"------------------------------------------------------------"<<endl<<endl;
	textcolor(7); 
	//fim de um jogo
	
	cout<<"------------------------------- Jogo 21 -----------------------------"<<endl<<endl;		
	FILE *file21;
	file21 = fopen("cartoes/cartao21.txt","r");
	fscanf(file21, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15);
	cout<<"Numeros: "<< n1 <<" "<< n2  <<" "<< n3  <<" " << n4  <<" " << n5  <<" "<< n6  <<" " << n7  <<" "<< n8  <<" "<< n9  <<" "<< n10  <<" "<< n11  <<" "<< n12  <<" "<< n13  <<" "<< n14  <<" "<< n15  <<" "<<endl;
	acertos=0;
	erros=0;
	if(file21==NULL){
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
	cout<<"Acertos do jogo 21: "<<acertos<<endl;
	cout<<"Erros do jogo 21: "<<erros<<endl;
	cout<<"------------------------------------------------------------"<<endl<<endl;
	textcolor(7); 
	//fim de um jogo
	
	cout<<"------------------------------- Jogo 22 -----------------------------"<<endl<<endl;		
	FILE *file22;
	file22 = fopen("cartoes/cartao22.txt","r");
	fscanf(file22, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15);
	cout<<"Numeros: "<< n1 <<" "<< n2  <<" "<< n3  <<" " << n4  <<" " << n5  <<" "<< n6  <<" " << n7  <<" "<< n8  <<" "<< n9  <<" "<< n10  <<" "<< n11  <<" "<< n12  <<" "<< n13  <<" "<< n14  <<" "<< n15  <<" "<<endl;
	acertos=0;
	erros=0;
	if(file22==NULL){
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
	cout<<"Acertos do jogo 22: "<<acertos<<endl;
	cout<<"Erros do jogo 22: "<<erros<<endl;
	cout<<"------------------------------------------------------------"<<endl<<endl;
	textcolor(7); 
	//fim de um jogo
	
	cout<<"------------------------------- Jogo 23 -----------------------------"<<endl<<endl;		
	FILE *file23;
	file23 = fopen("cartoes/cartao23.txt","r");
	fscanf(file23, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15);
	cout<<"Numeros: "<< n1 <<" "<< n2  <<" "<< n3  <<" " << n4  <<" " << n5  <<" "<< n6  <<" " << n7  <<" "<< n8  <<" "<< n9  <<" "<< n10  <<" "<< n11  <<" "<< n12  <<" "<< n13  <<" "<< n14  <<" "<< n15  <<" "<<endl;
	acertos=0;
	erros=0;
	if(file23==NULL){
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
	cout<<"Acertos do jogo 23: "<<acertos<<endl;
	cout<<"Erros do jogo 23: "<<erros<<endl;
	cout<<"------------------------------------------------------------"<<endl<<endl;
	textcolor(7); 
	//fim de um jogo
	
	cout<<"------------------------------- Jogo 24 -----------------------------"<<endl<<endl;		
	FILE *file24;
	file24 = fopen("cartoes/cartao24.txt","r");
	fscanf(file24, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15);
	cout<<"Numeros: "<< n1 <<" "<< n2  <<" "<< n3  <<" " << n4  <<" " << n5  <<" "<< n6  <<" " << n7  <<" "<< n8  <<" "<< n9  <<" "<< n10  <<" "<< n11  <<" "<< n12  <<" "<< n13  <<" "<< n14  <<" "<< n15  <<" "<<endl;
	acertos=0;
	erros=0;
	if(file24==NULL){
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
	cout<<"Acertos do jogo 24: "<<acertos<<endl;
	cout<<"Erros do jogo 24: "<<erros<<endl;
	cout<<"------------------------------------------------------------"<<endl<<endl;
	textcolor(7); 
	//fim de um jogo
	
	cout<<"------------------------------- Jogo 25 -----------------------------"<<endl<<endl;		
	FILE *file25;
	file25 = fopen("cartoes/cartao25.txt","r");
	fscanf(file25, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15);
	cout<<"Numeros: "<< n1 <<" "<< n2  <<" "<< n3  <<" " << n4  <<" " << n5  <<" "<< n6  <<" " << n7  <<" "<< n8  <<" "<< n9  <<" "<< n10  <<" "<< n11  <<" "<< n12  <<" "<< n13  <<" "<< n14  <<" "<< n15  <<" "<<endl;
	acertos=0;
	erros=0;
	if(file25==NULL){
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
	cout<<"Acertos do jogo 25: "<<acertos<<endl;
	cout<<"Erros do jogo 25: "<<erros<<endl;
	cout<<"------------------------------------------------------------"<<endl<<endl;
	textcolor(7); 
	//fim de um jogo
	
	cout<<"------------------------------- Jogo 26 -----------------------------"<<endl<<endl;		
	FILE *file26;
	file26 = fopen("cartoes/cartao26.txt","r");
	fscanf(file26, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15);
	cout<<"Numeros: "<< n1 <<" "<< n2  <<" "<< n3  <<" " << n4  <<" " << n5  <<" "<< n6  <<" " << n7  <<" "<< n8  <<" "<< n9  <<" "<< n10  <<" "<< n11  <<" "<< n12  <<" "<< n13  <<" "<< n14  <<" "<< n15  <<" "<<endl;
	acertos=0;
	erros=0;
	if(file26==NULL){
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
	cout<<"Acertos do jogo 26: "<<acertos<<endl;
	cout<<"Erros do jogo 26: "<<erros<<endl;
	cout<<"------------------------------------------------------------"<<endl<<endl;
	textcolor(7); 
	//fim de um jogo
	
	cout<<"------------------------------- Jogo 27 -----------------------------"<<endl<<endl;		
	FILE *file27;
	file27 = fopen("cartoes/cartao27.txt","r");
	fscanf(file27, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15);
	cout<<"Numeros: "<< n1 <<" "<< n2  <<" "<< n3  <<" " << n4  <<" " << n5  <<" "<< n6  <<" " << n7  <<" "<< n8  <<" "<< n9  <<" "<< n10  <<" "<< n11  <<" "<< n12  <<" "<< n13  <<" "<< n14  <<" "<< n15  <<" "<<endl;
	acertos=0;
	erros=0;
	if(file27==NULL){
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
	cout<<"Acertos do jogo 27: "<<acertos<<endl;
	cout<<"Erros do jogo 27: "<<erros<<endl;
	cout<<"------------------------------------------------------------"<<endl<<endl;
	textcolor(7);
	//fim de um jogo
	
	cout<<"------------------------------- Jogo 28 -----------------------------"<<endl<<endl;		
	FILE *file28;
	file28 = fopen("cartoes/cartao28.txt","r");
	fscanf(file28, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15);
	cout<<"Numeros: "<< n1 <<" "<< n2  <<" "<< n3  <<" " << n4  <<" " << n5  <<" "<< n6  <<" " << n7  <<" "<< n8  <<" "<< n9  <<" "<< n10  <<" "<< n11  <<" "<< n12  <<" "<< n13  <<" "<< n14  <<" "<< n15  <<" "<<endl;
	acertos=0;
	erros=0;
	if(file28==NULL){
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
	cout<<"Acertos do jogo 28: "<<acertos<<endl;
	cout<<"Erros do jogo 28: "<<erros<<endl;
	cout<<"------------------------------------------------------------"<<endl<<endl;
	textcolor(7); 
	//fim de um jogo
	
	cout<<"------------------------------- Jogo 29 -----------------------------"<<endl<<endl;		
	FILE *file29;
	file29 = fopen("cartoes/cartao29.txt","r");
	fscanf(file29, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15);
	cout<<"Numeros: "<< n1 <<" "<< n2  <<" "<< n3  <<" " << n4  <<" " << n5  <<" "<< n6  <<" " << n7  <<" "<< n8  <<" "<< n9  <<" "<< n10  <<" "<< n11  <<" "<< n12  <<" "<< n13  <<" "<< n14  <<" "<< n15  <<" "<<endl;
	acertos=0;
	erros=0;
	if(file29==NULL){
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
	cout<<"Acertos do jogo 29: "<<acertos<<endl;
	cout<<"Erros do jogo 29: "<<erros<<endl;
	cout<<"------------------------------------------------------------"<<endl<<endl;
	textcolor(7); 
	//fim de um jogo
	
	cout<<"------------------------------- Jogo 30 -----------------------------"<<endl<<endl;		
	FILE *file30;
	file30 = fopen("cartoes/cartao30.txt","r");
	fscanf(file30, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15);
	cout<<"Numeros: "<< n1 <<" "<< n2  <<" "<< n3  <<" " << n4  <<" " << n5  <<" "<< n6  <<" " << n7  <<" "<< n8  <<" "<< n9  <<" "<< n10  <<" "<< n11  <<" "<< n12  <<" "<< n13  <<" "<< n14  <<" "<< n15  <<" "<<endl;
	acertos=0;
	erros=0;
	if(file30==NULL){
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
	cout<<"Acertos do jogo 30: "<<acertos<<endl;
	cout<<"Erros do jogo 30: "<<erros<<endl;
	cout<<"------------------------------------------------------------"<<endl<<endl;
	textcolor(7); 
	//fim de um jogo
	
	cout<<"------------------------------- Jogo 31 -----------------------------"<<endl<<endl;		
	FILE *file31;
	file31 = fopen("cartoes/cartao31.txt","r");
	fscanf(file31, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15);
	cout<<"Numeros: "<< n1 <<" "<< n2  <<" "<< n3  <<" " << n4  <<" " << n5  <<" "<< n6  <<" " << n7  <<" "<< n8  <<" "<< n9  <<" "<< n10  <<" "<< n11  <<" "<< n12  <<" "<< n13  <<" "<< n14  <<" "<< n15  <<" "<<endl;
	acertos=0;
	erros=0;
	if(file31==NULL){
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
	cout<<"Acertos do jogo 31: "<<acertos<<endl;
	cout<<"Erros do jogo 31: "<<erros<<endl;
	cout<<"------------------------------------------------------------"<<endl<<endl;
	textcolor(7); 
	//fim de um jogo
	
	cout<<"------------------------------- Jogo 32 -----------------------------"<<endl<<endl;		
	FILE *file32;
	file32 = fopen("cartoes/cartao32.txt","r");
	fscanf(file32, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15);
	cout<<"Numeros: "<< n1 <<" "<< n2  <<" "<< n3  <<" " << n4  <<" " << n5  <<" "<< n6  <<" " << n7  <<" "<< n8  <<" "<< n9  <<" "<< n10  <<" "<< n11  <<" "<< n12  <<" "<< n13  <<" "<< n14  <<" "<< n15  <<" "<<endl;
	acertos=0;
	erros=0;
	if(file32==NULL){
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
	cout<<"Acertos do jogo 32: "<<acertos<<endl;
	cout<<"Erros do jogo 32: "<<erros<<endl;
	cout<<"------------------------------------------------------------"<<endl<<endl;
	textcolor(7); 
	//fim de um jogo
	
	cout<<"------------------------------- Jogo 33 -----------------------------"<<endl<<endl;		
	FILE *file33;
	file33 = fopen("cartoes/cartao33.txt","r");
	fscanf(file33, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15);
	cout<<"Numeros: "<< n1 <<" "<< n2  <<" "<< n3  <<" " << n4  <<" " << n5  <<" "<< n6  <<" " << n7  <<" "<< n8  <<" "<< n9  <<" "<< n10  <<" "<< n11  <<" "<< n12  <<" "<< n13  <<" "<< n14  <<" "<< n15  <<" "<<endl;
	acertos=0;
	erros=0;
	if(file33==NULL){
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
	cout<<"Acertos do jogo 33: "<<acertos<<endl;
	cout<<"Erros do jogo 33: "<<erros<<endl;
	cout<<"------------------------------------------------------------"<<endl<<endl;
	textcolor(7); 
	//fim de um jogo
	
	cout<<"------------------------------- Jogo 34 -----------------------------"<<endl<<endl;		
	FILE *file34;
	file34 = fopen("cartoes/cartao34.txt","r");
	fscanf(file34, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15);
	cout<<"Numeros: "<< n1 <<" "<< n2  <<" "<< n3  <<" " << n4  <<" " << n5  <<" "<< n6  <<" " << n7  <<" "<< n8  <<" "<< n9  <<" "<< n10  <<" "<< n11  <<" "<< n12  <<" "<< n13  <<" "<< n14  <<" "<< n15  <<" "<<endl;
	acertos=0;
	erros=0;
	if(file34==NULL){
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
	cout<<"Acertos do jogo 34: "<<acertos<<endl;
	cout<<"Erros do jogo 34: "<<erros<<endl;
	cout<<"------------------------------------------------------------"<<endl<<endl;
	textcolor(7); 
	//fim de um jogo
	
	cout<<"------------------------------- Jogo 35 -----------------------------"<<endl<<endl;		
	FILE *file35;
	file35 = fopen("cartoes/cartao35.txt","r");
	fscanf(file35, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15);
	cout<<"Numeros: "<< n1 <<" "<< n2  <<" "<< n3  <<" " << n4  <<" " << n5  <<" "<< n6  <<" " << n7  <<" "<< n8  <<" "<< n9  <<" "<< n10  <<" "<< n11  <<" "<< n12  <<" "<< n13  <<" "<< n14  <<" "<< n15  <<" "<<endl;
	acertos=0;
	erros=0;
	if(file35==NULL){
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
	cout<<"Acertos do jogo 35: "<<acertos<<endl;
	cout<<"Erros do jogo 35: "<<erros<<endl;
	cout<<"------------------------------------------------------------"<<endl<<endl;
	textcolor(7); 
	//fim de um jogo
	
	cout<<"------------------------------- Jogo 36 -----------------------------"<<endl<<endl;		
	FILE *file36;
	file36 = fopen("cartoes/cartao36.txt","r");
	fscanf(file36, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15);
	cout<<"Numeros: "<< n1 <<" "<< n2  <<" "<< n3  <<" " << n4  <<" " << n5  <<" "<< n6  <<" " << n7  <<" "<< n8  <<" "<< n9  <<" "<< n10  <<" "<< n11  <<" "<< n12  <<" "<< n13  <<" "<< n14  <<" "<< n15  <<" "<<endl;
	acertos=0;
	erros=0;
	if(file36==NULL){
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
	cout<<"Acertos do jogo 36: "<<acertos<<endl;
	cout<<"Erros do jogo 36: "<<erros<<endl;
	cout<<"------------------------------------------------------------"<<endl<<endl;
	textcolor(7); 
	//fim de um jogo
	
	cout<<"------------------------------- Jogo 37 -----------------------------"<<endl<<endl;		
	FILE *file37;
	file37 = fopen("cartoes/cartao37.txt","r");
	fscanf(file37, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15);
	cout<<"Numeros: "<< n1 <<" "<< n2  <<" "<< n3  <<" " << n4  <<" " << n5  <<" "<< n6  <<" " << n7  <<" "<< n8  <<" "<< n9  <<" "<< n10  <<" "<< n11  <<" "<< n12  <<" "<< n13  <<" "<< n14  <<" "<< n15  <<" "<<endl;
	acertos=0;
	erros=0;
	if(file37==NULL){
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
	cout<<"Acertos do jogo 37: "<<acertos<<endl;
	cout<<"Erros do jogo 37: "<<erros<<endl;
	cout<<"------------------------------------------------------------"<<endl<<endl;
	textcolor(7); 
	//fim de um jogo
	
	cout<<"------------------------------- Jogo 38 -----------------------------"<<endl<<endl;		
	FILE *file38;
	file38 = fopen("cartoes/cartao38.txt","r");
	fscanf(file38, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15);
	cout<<"Numeros: "<< n1 <<" "<< n2  <<" "<< n3  <<" " << n4  <<" " << n5  <<" "<< n6  <<" " << n7  <<" "<< n8  <<" "<< n9  <<" "<< n10  <<" "<< n11  <<" "<< n12  <<" "<< n13  <<" "<< n14  <<" "<< n15  <<" "<<endl;
	acertos=0;
	erros=0;
	if(file38==NULL){
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
	cout<<"Acertos do jogo 38: "<<acertos<<endl;
	cout<<"Erros do jogo 38: "<<erros<<endl;
	cout<<"------------------------------------------------------------"<<endl<<endl;
	textcolor(7); 
	//fim de um jogo
	
	cout<<"------------------------------- Jogo 39 -----------------------------"<<endl<<endl;		
	FILE *file39;
	file39 = fopen("cartoes/cartao39.txt","r");
	fscanf(file39, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15);
	cout<<"Numeros: "<< n1 <<" "<< n2  <<" "<< n3  <<" " << n4  <<" " << n5  <<" "<< n6  <<" " << n7  <<" "<< n8  <<" "<< n9  <<" "<< n10  <<" "<< n11  <<" "<< n12  <<" "<< n13  <<" "<< n14  <<" "<< n15  <<" "<<endl;
	acertos=0;
	erros=0;
	if(file39==NULL){
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
	cout<<"Acertos do jogo 39: "<<acertos<<endl;
	cout<<"Erros do jogo 39: "<<erros<<endl;
	cout<<"------------------------------------------------------------"<<endl<<endl;
	textcolor(7); 
	//fim de um jogo
	
	cout<<"------------------------------- Jogo 40 -----------------------------"<<endl<<endl;		
	FILE *file40;
	file40 = fopen("cartoes/cartao40.txt","r");
	fscanf(file40, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15);
	cout<<"Numeros: "<< n1 <<" "<< n2  <<" "<< n3  <<" " << n4  <<" " << n5  <<" "<< n6  <<" " << n7  <<" "<< n8  <<" "<< n9  <<" "<< n10  <<" "<< n11  <<" "<< n12  <<" "<< n13  <<" "<< n14  <<" "<< n15  <<" "<<endl;
	acertos=0;
	erros=0;
	if(file40==NULL){
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
	cout<<"Acertos do jogo 40: "<<acertos<<endl;
	cout<<"Erros do jogo 40: "<<erros<<endl;
	cout<<"------------------------------------------------------------"<<endl<<endl;
	textcolor(7); 
	//fim de um jogo

	cout<<"------------------------------- Jogo 41 -----------------------------"<<endl<<endl;		
	FILE *file41;
	file41 = fopen("cartoes/cartao41.txt","r");
	fscanf(file41, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15);
	cout<<"Numeros: "<< n1 <<" "<< n2  <<" "<< n3  <<" " << n4  <<" " << n5  <<" "<< n6  <<" " << n7  <<" "<< n8  <<" "<< n9  <<" "<< n10  <<" "<< n11  <<" "<< n12  <<" "<< n13  <<" "<< n14  <<" "<< n15  <<" "<<endl;
	acertos=0;
	erros=0;
	if(file41==NULL){
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
	cout<<"Acertos do jogo 41: "<<acertos<<endl;
	cout<<"Erros do jogo 41: "<<erros<<endl;
	cout<<"------------------------------------------------------------"<<endl<<endl;
	textcolor(7); 
	//fim de um jogo
	
	cout<<"------------------------------- Jogo 42 -----------------------------"<<endl<<endl;		
	FILE *file42;
	file42 = fopen("cartoes/cartao42.txt","r");
	fscanf(file42, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15);
	cout<<"Numeros: "<< n1 <<" "<< n2  <<" "<< n3  <<" " << n4  <<" " << n5  <<" "<< n6  <<" " << n7  <<" "<< n8  <<" "<< n9  <<" "<< n10  <<" "<< n11  <<" "<< n12  <<" "<< n13  <<" "<< n14  <<" "<< n15  <<" "<<endl;
	acertos=0;
	erros=0;
	if(file42==NULL){
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
	cout<<"Acertos do jogo 42: "<<acertos<<endl;
	cout<<"Erros do jogo 42: "<<erros<<endl;
	cout<<"------------------------------------------------------------"<<endl<<endl;
	textcolor(7); 
	//fim de um jogo

	cout<<"------------------------------- Jogo 43 -----------------------------"<<endl<<endl;		
	FILE *file43;
	file43 = fopen("cartoes/cartao43.txt","r");
	fscanf(file43, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15);
	cout<<"Numeros: "<< n1 <<" "<< n2  <<" "<< n3  <<" " << n4  <<" " << n5  <<" "<< n6  <<" " << n7  <<" "<< n8  <<" "<< n9  <<" "<< n10  <<" "<< n11  <<" "<< n12  <<" "<< n13  <<" "<< n14  <<" "<< n15  <<" "<<endl;
	acertos=0;
	erros=0;
	if(file43==NULL){
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
	cout<<"Acertos do jogo 43: "<<acertos<<endl;
	cout<<"Erros do jogo 43: "<<erros<<endl;
	cout<<"------------------------------------------------------------"<<endl<<endl;
	textcolor(7); 
	//fim de um jogo

	cout<<"------------------------------- Jogo 44 -----------------------------"<<endl<<endl;		
	FILE *file44;
	file44 = fopen("cartoes/cartao44.txt","r");
	fscanf(file44, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15);
	cout<<"Numeros: "<< n1 <<" "<< n2  <<" "<< n3  <<" " << n4  <<" " << n5  <<" "<< n6  <<" " << n7  <<" "<< n8  <<" "<< n9  <<" "<< n10  <<" "<< n11  <<" "<< n12  <<" "<< n13  <<" "<< n14  <<" "<< n15  <<" "<<endl;
	acertos=0;
	erros=0;
	if(file44==NULL){
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
	cout<<"Acertos do jogo 44: "<<acertos<<endl;
	cout<<"Erros do jogo 44: "<<erros<<endl;
	cout<<"------------------------------------------------------------"<<endl<<endl;
	textcolor(7); 
	//fim de um jogo

	cout<<"------------------------------- Jogo 45 -----------------------------"<<endl<<endl;		
	FILE *file45;
	file45 = fopen("cartoes/cartao45.txt","r");
	fscanf(file45, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15);
	cout<<"Numeros: "<< n1 <<" "<< n2  <<" "<< n3  <<" " << n4  <<" " << n5  <<" "<< n6  <<" " << n7  <<" "<< n8  <<" "<< n9  <<" "<< n10  <<" "<< n11  <<" "<< n12  <<" "<< n13  <<" "<< n14  <<" "<< n15  <<" "<<endl;
	acertos=0;
	erros=0;
	if(file45==NULL){
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
	cout<<"Acertos do jogo 45: "<<acertos<<endl;
	cout<<"Erros do jogo 45: "<<erros<<endl;
	cout<<"------------------------------------------------------------"<<endl<<endl;
	textcolor(7); 
	//fim de um jogo

	cout<<"------------------------------- Jogo 46 -----------------------------"<<endl<<endl;		
	FILE *file46;
	file46 = fopen("cartoes/cartao46.txt","r");
	fscanf(file46, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15);
	cout<<"Numeros: "<< n1 <<" "<< n2  <<" "<< n3  <<" " << n4  <<" " << n5  <<" "<< n6  <<" " << n7  <<" "<< n8  <<" "<< n9  <<" "<< n10  <<" "<< n11  <<" "<< n12  <<" "<< n13  <<" "<< n14  <<" "<< n15  <<" "<<endl;
	acertos=0;
	erros=0;
	if(file46==NULL){
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
	cout<<"Acertos do jogo 46: "<<acertos<<endl;
	cout<<"Erros do jogo 46: "<<erros<<endl;
	cout<<"------------------------------------------------------------"<<endl<<endl;
	textcolor(7); 
	//fim de um jogo

	cout<<"------------------------------- Jogo 47 -----------------------------"<<endl<<endl;		
	FILE *file47;
	file47 = fopen("cartoes/cartao47.txt","r");
	fscanf(file47, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15);
	cout<<"Numeros: "<< n1 <<" "<< n2  <<" "<< n3  <<" " << n4  <<" " << n5  <<" "<< n6  <<" " << n7  <<" "<< n8  <<" "<< n9  <<" "<< n10  <<" "<< n11  <<" "<< n12  <<" "<< n13  <<" "<< n14  <<" "<< n15  <<" "<<endl;
	acertos=0;
	erros=0;
	if(file47==NULL){
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
	cout<<"Acertos do jogo 47: "<<acertos<<endl;
	cout<<"Erros do jogo 47: "<<erros<<endl;
	cout<<"------------------------------------------------------------"<<endl<<endl;
	textcolor(7); 
	//fim de um jogo

	cout<<"------------------------------- Jogo 48 -----------------------------"<<endl<<endl;		
	FILE *file48;
	file48 = fopen("cartoes/cartao48.txt","r");
	fscanf(file48, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15);
	cout<<"Numeros: "<< n1 <<" "<< n2  <<" "<< n3  <<" " << n4  <<" " << n5  <<" "<< n6  <<" " << n7  <<" "<< n8  <<" "<< n9  <<" "<< n10  <<" "<< n11  <<" "<< n12  <<" "<< n13  <<" "<< n14  <<" "<< n15  <<" "<<endl;
	acertos=0;
	erros=0;
	if(file48==NULL){
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
	cout<<"Acertos do jogo 48: "<<acertos<<endl;
	cout<<"Erros do jogo 48: "<<erros<<endl;
	cout<<"------------------------------------------------------------"<<endl<<endl;
	textcolor(7); 
	//fim de um jogo

	cout<<"------------------------------- Jogo 49 -----------------------------"<<endl<<endl;		
	FILE *file49;
	file49 = fopen("cartoes/cartao49.txt","r");
	fscanf(file49, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15);
	cout<<"Numeros: "<< n1 <<" "<< n2  <<" "<< n3  <<" " << n4  <<" " << n5  <<" "<< n6  <<" " << n7  <<" "<< n8  <<" "<< n9  <<" "<< n10  <<" "<< n11  <<" "<< n12  <<" "<< n13  <<" "<< n14  <<" "<< n15  <<" "<<endl;
	acertos=0;
	erros=0;
	if(file49==NULL){
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
	cout<<"Acertos do jogo 49: "<<acertos<<endl;
	cout<<"Erros do jogo 49: "<<erros<<endl;
	cout<<"------------------------------------------------------------"<<endl<<endl;
	textcolor(7); 
	//fim de um jogo

	cout<<"------------------------------- Jogo 50 -----------------------------"<<endl<<endl;		
	FILE *file50;
	file50 = fopen("cartoes/cartao50.txt","r");
	fscanf(file50, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15);
	cout<<"Numeros: "<< n1 <<" "<< n2  <<" "<< n3  <<" " << n4  <<" " << n5  <<" "<< n6  <<" " << n7  <<" "<< n8  <<" "<< n9  <<" "<< n10  <<" "<< n11  <<" "<< n12  <<" "<< n13  <<" "<< n14  <<" "<< n15  <<" "<<endl;
	acertos=0;
	erros=0;
	if(file50==NULL){
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
	cout<<"Acertos do jogo 50: "<<acertos<<endl;
	cout<<"Erros do jogo 50: "<<erros<<endl;
	cout<<"------------------------------------------------------------"<<endl<<endl;
	textcolor(7); 
	//fim de um jogo
	
	fclose(file20);
	fclose(file21);
	fclose(file22);
	fclose(file23);
	fclose(file24);
	fclose(file25);
	fclose(file26);
	fclose(file27);
	fclose(file28);
	fclose(file29);
	fclose(file30);
	fclose(file31);
	fclose(file32);
	fclose(file33);
	fclose(file34);
	fclose(file35);
	fclose(file36);
	fclose(file37);
	fclose(file38);
	fclose(file39);
	fclose(file40);
	fclose(file41);
	fclose(file42);
	fclose(file43);
	fclose(file44);
	fclose(file45);
	fclose(file46);
	fclose(file47);
	fclose(file48);
	fclose(file49);
	fclose(file50);
	system("PAUSE");
}
