//O programa a seguir ilustra o funcionamento dos operadores lógicos p e q. Considere que o valor 0 (zero) reflete uma proposição (p/q) FALSA, 
//Enquanto que o valor 1 (um) reflete uma proposição (p/q) VERDADEIRA.

#include<stdio.h>
int main()
{
    int p, q;
    printf("informe os estados de 'p' e 'q' - Verdadeiro: 1 ou Falso: 0: ");
    scanf("%d%d", &p, &q);
    printf("\n -------------------");
    printf("\n(p)%d AND (q)%d resulta %d", p, q, p && q);
    printf("\n -------------------");
    printf("\n(p)%d OR (q)%d resulta %d", p, q, p || q);
    printf("\n -------------------");
    printf("\n NOT (p)%d resulta %d", p, !p);
    printf("\n -------------------");
    printf("\n NOT (q)%d resulta %d", q, !q);
    printf("\n -------------------");
}
//Portanto, podemos concluir que, para o operador booleano AND ter resultado verdadeiro, todas as proposições devem ser verdadeiras.
//Portanto, podemos concluir que, para o operador booleano OR ter resultado verdadeiro, basta uma das proposições ser verdadeira.
//Em C , 0 (zero) representa o valor lógico “falso” e 1 (um) representa o valor lógico “verdade”.
