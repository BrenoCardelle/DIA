#include <stdio.h>
#include <math.h>
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

int main(){
	int n = 0;
	while(n<1000){
		int pinos, altura;
		cin >> pinos >> altura;
		int vetor[pinos];
		int i, j;
		int cont = 0;
		int aux = 0;
		for(j=0; j<pinos; j++){
			cin >> vetor[j];
		}
		for(i=0; i<pinos; i++){
			if(vetor[i]<altura){
				aux = altura - vetor[i];
				vetor[i] = vetor[i] + aux;
				cont = cont + aux;
				vetor[i+1] += aux;
			}
			if(vetor[i]>altura){
				aux = vetor[i] - altura;
				vetor[i] = vetor[i] - aux;
				cont = cont + aux;
				vetor[i+1] -= aux;
			}
			aux = 0;
		}
		cout << cont;
		n += 1;
	}
	
	return 0;
}
