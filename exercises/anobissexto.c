//questão 19
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int ano;
	printf("Digite o ano: ");
	scanf("%d", &ano);
	if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
		printf("Ano bissexto.");
	}
	else{
		printf("Ano não bissexto.");
	}
return(0);
}