#include<stdio.h>

int x_carre(int);
int _un( int );
int main(int argc, char *argv[]){
	printf(" les fonctions ");
		for(int i=0;i<20;i++){
		printf("\n _un(%d) = %d",i, _un(i));
	}
	return 0;
}

//ici on definit une fonction

int x_carre(int x){
	return x*x;
}
// la fonction Un(n-1) +2 une suite arithmetique de raison 2 
int _un( int n){
	if(n==0) return 1;
	int val = _un(n-1)+2;
	return val;
}
