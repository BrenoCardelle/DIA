#include <stdio.h>
#include <math.h>
#include <string>
#include <fstream>

// wrong answer 5%
using namespace std;
ofstream out;
int main(){

	//out.open("debugger.txt");
	int n = 0;
	while(n<10000){
	    int i;
	    int cont1 = 0;
	    int cont2 = 0;
	    int soma = 1;
	    int menos = 9;
	    int b1 = 0;
	    int b2 = 0;
	    char cpf[14];
	    scanf("%s", &cpf);
	    for(i=0; i<=10; i++){
	        if(isdigit(cpf[i])){
	            cont1 = cont1 + cpf[i] * soma - i*48;
	            soma++;
	            cont2 = cont2 + cpf[i] * menos - i*48;
	            menos--;
	        }
	    }
	    cont1 = cont1%11;
	    cont2 = cont2%11;
	    
	    if(cont1 == 10){cont1 = 0;}
	    if(cont2 == 10){cont2 = 0;}
		if(cont1 == cpf[12]-48 && cont2 == cpf[13]-48){
			printf("CPF valido\n");
			out << "CPF valido" << endl;
		} else {printf("CPF invalido\n"); out << "CPF invalido" << endl;}
		n++;
	}
    
    return 0;

}
