#include <stdio.h> //Importando uma biblioteca de entrada e saída padrão no C 

//No C tudo é obrigado estar em uma função


int main() //Função obrigatoria
{
    int idade, *p;
    idade = 18;
    
    p = &idade;
        
    *p = 22;
    
    idade = (int)p;
    

	printf("Olá mundo, a idade é %i\n", idade);
	idade = 31;
    printf("Olá mundo, a idade é %i\n", *p);

    printf("O endereço da variavel idade é: %p\n",p);

    return 0; 

}
