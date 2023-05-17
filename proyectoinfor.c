#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[]){

    int end = 1;
    int opc = 0;
    int sub_opc = 0;
    int sub_opc2 = 0;
    int sub_opc2cuhidr = 0;
    int sub_opc3 = 0;
    int sub_opc3Sol = 0;
    
    while(end){
        printf("Hola, hoy miraremos el estado de las cuencas hidrográficas en Popayán.\n");
        printf("Seleccione una opción del menú:\n");
        printf("Menú.\n");
        printf("[1]Estado de las cuencas hidrograficas\n");
        printf("[2]Cuencas hidrograficas en deterioro\n");     
        printf("[3]Cuidado de las cuencas en deterioro\n");
        printf("[4]Terminar y salir del programa.\n");
        
        scanf("%d",&opc);
        //system (cls);
        printf("Selecciionaste la opción %c.\n", &opc);
        
        if (opc == 1){
            printf("Selecciona la cuenca que le interesa:\n ");
            printf("\tOpciones.\n");
            printf("[1]Cuenca 1.\n");
            printf("[2]Cuenca 2.\n");        
            printf("[3]Cuenca 3.\n");
            printf("[4]Cuenca 4.\n");
            
            scanf("%d",&sub_opc);

            if (sub_opc == 1){
                printf("Información de la cuenca 1.\n");
            } else if (sub_opc == 2){
                printf("Información de la cuenca 2.\n");
            } else if (sub_opc == 3){
                printf("Información de la cuenca 3.\n");
            } else if (sub_opc == 4){
                printf("Información de la cuenca 4.\n");
            }
        } else if (opc == 2){
            printf("Seleccione la cuenca hodrografica en deterioro sobre la que quiere saber:\n");
            printf("[1]Cuenca 1.\n");
            printf("[2]Cuenca 2.\n");        
            printf("[3]Cuenca 3.\n");
            printf("[4]Cuenca 4.\n");

            scanf("%d",&sub_opc2);

            if (sub_opc2 == 1){
                printf("La cuenca 1 se encuentra en deterioro principalmente por las siguientes 2 causas, causa 1 y causa 2.\n");
                printf("Seleccione la causa que le interesa saber:\n");
                printf("[1]Causa 1\n");
                printf("[2]Causa 2\n");

                scanf("%d",&sub_opc2cuhidr);

                if (sub_opc2cuhidr == 1){
                    printf("Escribir la causa 1\n");
                } else if (sub_opc2cuhidr == 2){
                    printf("Escribir la causa 2\n");
                }
            } else if (sub_opc2 == 2){
                printf("La cuenca 2 se encuentra en deterioro principalmente por las siguientes 2 causas, causa 1 y causa 2.\n");
                printf("Seleccione la causa que le interesa saber:\n");
                printf("[1]Causa 1\n");
                printf("[2]Causa 2\n");

                scanf("%d",&sub_opc2cuhidr);

                if (sub_opc2cuhidr == 1){
                    printf("Escribir la causa 1\n");
                } else if (sub_opc2cuhidr == 2){
                    printf("Escribir la causa 2\n");
                }
            } else if (sub_opc2 == 3){
                printf("La cuenca 3 se encuentra en deterioro principalmente por las siguientes 2 causas, causa 1 y causa 2.\n");
                printf("Seleccione la causa que le interesa saber:\n");
                printf("[1]Causa 1\n");
                printf("[2]Causa 2\n");

                scanf("%d",&sub_opc2cuhidr);

                if (sub_opc2cuhidr == 1){
                    printf("Escribir la causa 1\n");
                } else if (sub_opc2cuhidr == 2){
                    printf("Escribir la causa 2\n");
                }
            } else if (sub_opc2 == 4){
                printf("La cuenca 4 se encuentra en deterioro principalmente por las siguientes 2 causas, causa 1 y causa 2.\n");
                printf("Seleccione la causa que le interesa saber:\n");
                printf("[1]Causa 1\n");
                printf("[2]Causa 2\n");

                scanf("%d",&sub_opc2cuhidr);

                if (sub_opc2cuhidr == 1){
                    printf("Escribir la causa 1");
                } else if (sub_opc2cuhidr == 2){
                    printf("Escribir la causa 2");
                }
            }
        } else if (opc == 3){
            printf("Seleccione la cuenca sobre la que quiere saber su cuidado.\n");
            printf("[1]Cuenca 1.\n");
            printf("[2]Cuenca 2.\n");        
            printf("[3]Cuenca 3.\n");
            printf("[4]Cuenca 4.\n");

            scanf("%d",&sub_opc3);

            if (sub_opc3 == 1){
                printf("La cuenca uno puede estar mejor con las siguientes soluciones, solución 1 y solución 2.\n");
                printf("Seleccione la solución que quiere saber:\n");
                printf("[1]Solución 1.\n");
                printf("[2]Solución 2.\n");

                scanf("%d",&sub_opc3Sol);

                if (sub_opc3Sol == 1){
                    printf("Escribir la solución 1\n");
                } else if (sub_opc3Sol == 2){
                    printf("Escribir la solución 2\n");
                }
            } else if (sub_opc3 == 2){
                printf("La cuenca 2 puede estar mejor con las siguientes soluciones, solución 1 y solución 2.\n");
                printf("Seleccione la solución que quiere saber:\n");
                printf("[1]Solución 1\n");
                printf("[2]Solución 2\n");

                scanf("%d",&sub_opc3Sol);

                if (sub_opc3Sol == 1){
                    printf("Escribir la solución 1\n");
                } else if (sub_opc3Sol == 2){
                    printf("Escribir la solución 2\n");
                }
            } else if (sub_opc3 == 3){
                printf("La cuenca 3 puede estar mejor con las siguientes soluciones, solución 1 y solución 2.\n");
                printf("Seleccione la solución que quiere saber:\n");
                printf("[1]Solución 1\n");
                printf("[2]Solución 2.\n");

                scanf("%d",&sub_opc3Sol);

                if (sub_opc3Sol == 1){
                    printf("Escribir la solución 1.\n");
                } else if (sub_opc3Sol == 2){
                    printf("Escribir la solución 2.\n");
                }
            } else if (sub_opc3 == 4){
                printf("La cuenca 4 puede estar mejor con las siguientes soluciones, solución 1 y solución 2.\n");
                printf("Seleccione la solución que quiere saber:\n");
                printf("[1]Solución 1.\n");
                printf("[2]Solución 2.\n");

                scanf("%d",&sub_opc3Sol);

                if (sub_opc3Sol == 1){
                    printf("Escribir la solución 1.\n");
                } else if (sub_opc3Sol == 2){
                    printf("Escribir la solución 2.\n");
                }
            }
        } else if (opc == 4){
            printf("Decidiste terminar con el programa, muchas gracias.\n");
        }
        // end = 0
    }
        //system("pause");
        return 0;    
}