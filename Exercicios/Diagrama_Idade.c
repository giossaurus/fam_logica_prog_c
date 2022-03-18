#include<stdio.h>
int main(void)

{
    int idade;
    printf("\n Entre com a idade: " );
    scanf("%d", &idade);

    if (idade >= 0 && idade < 16)
     printf("E uma crianca \n ");
    else if (idade >= 16 && idade < 22)
     printf("E um adolescente\n ");
    else if (idade >= 22 && idade < 60)
     printf("E um adulto\n ");
    else
     printf("E terceira idade\n ");

printf("\n Este comando esta fora da cadeia de ifs");
return 0;
}           





        
       