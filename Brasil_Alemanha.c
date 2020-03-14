#include <stdio.h>

int main(){

    int a = 0;
    int b = 0;
    int aux = 0;
    long int temp = 0;
    scanf("%ld", &temp);
    while(temp!=0){
		if(temp < 90 || temp > 1000000000){break;}
        if (temp>=90){a = ((temp/90)*7);}
        aux = temp%90;
        if (aux != 0){ 
			if(aux <= 12){ a += 1;}
			else if(aux <= 24){a += 2;}
			else if(aux <= 36){a += 3;}
			else if(aux <= 48){a += 4;}
			else if(aux <= 60){a += 5;}
			else if(aux <= 72){a += 6;}
			else if(aux < 90){a += 7;}
		}
		b = temp/90;
        printf("Brasil %d x Alemanha %d \n", b, a);
        scanf("%ld", &temp);
        a=0; b=0; aux=0;

    }

    return 0;
}
