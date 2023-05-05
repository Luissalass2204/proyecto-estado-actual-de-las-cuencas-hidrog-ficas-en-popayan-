#include <stdio.h>
#include <string.h>


int main(){
    printf("Hola, hoy miraremos el estado de las cuencas hidrográficas en Popayán.\n");
    printf("Menú.\n");
    char op = '\0';
    printf("Escoge tu opción del menú de opciones:\n ");
    printf("\tMenú\n");
    printf("a)Estado de las cuencas hidrograficas\n");
    printf("b)Cuencas hidrograficas en deterioro\n");     \\Este es el menú\\
    printf("c)Cuidado de las cuencas en deterioro\n");
    scanf("%c",&op);

     switch(op){
        default:
        printf("Opción no valida.\n");
        break;                                        \\son las opciones\\
        case 'a':
        char ok = '\0';
        printf("Estado de las cuencas hidrográficas\n ");
        printf("Selecciona la cuenca que :\n ");


}