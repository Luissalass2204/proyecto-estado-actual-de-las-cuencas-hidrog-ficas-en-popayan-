#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int terminar(void);

int main(int argc, const char *argv[]){

    int end = 1;
    int opc = 0;
    int sub_opc = 0;
    int sub_opc2 = 0;               //variables
    int sub_opc2cuhidr = 0;
    int sub_opc3 = 0;
    int sub_opc3Sol = 0;
    int salir = 0;
    
    while(end){
        printf("Hola, hoy miraremos el estado de las cuencas hidrograficas en Popayan.\n");
        printf("Seleccione una opcian del menu:\n");
        printf("Menu.\n");
        printf("[1]Estado de las cuencas hidrograficas\n");
        printf("[2]Cuencas hidrograficas en deterioro\n");        //Menu principal
        printf("[3]Cuidado de las cuencas en deterioro\n");
        printf("[4]Terminar y salir del programa.\n");
        
        scanf("%d",&opc);
        //system (cls);
        printf("Seleccionaste la opcion %c .\n", &opc);
        
        if (opc == 1){
            printf("Selecciona la cuenca que le interesa:\n ");
            printf("\tOpciones.\n");
            printf("[1]CUENCA DEL RIO MOLINO.\n");
            printf("[2]CUENCA DEL RIO CAUCA.\n");                      //menu de la opción 1
            printf("[3]CUENCA DEL RIO PALO.\n");
            printf("[4]CUENCA DEL RIO PURACE.\n");
            
            scanf("%d",&sub_opc);

            if (sub_opc == 1){
                printf("Es una cuenca importante en la region, que proporciona agua para uso domestico, agricola e industrial en la zona. Esta compuesta por varios afluentes y es fundamental para el suministro de agua en la ciudad, La cuenca del Rio Molino se encuentra en estado de deterioro debido a la deforestacion y la contaminacion generada por actividades agricolas y urbanas sin control.\n");
                end = terminar();
            } else if (sub_opc == 2){
                printf("El Rio Cauca es uno de los rios mas importantes de Colombia y atraviesa la region de Popayan. La cuenca del Rio Cauca abarca una extensa area y desempeña un papel crucial en el suministro de agua, la produccion agricola y la generacion de energia en la region, La cuenca del Rio Cauca esta en deterioro debido a la deforestacion, la contaminacion industrial y la extraccion excesiva de agua.\n");
                end = terminar();
            } else if (sub_opc == 3){
                printf("Flujos de agua constantes, diversidad de especies acuaticas, vegetacion ribereña saludable y provision de agua para consumo humano, agricultura y generacion de energia hidroelectrica, las malas acciones en esta cuenca han provocado la erosion del suelo, la disminucion de la biodiversidad y la alteracion del ciclo hidrologico.\n");
                end = terminar();
            } else if (sub_opc == 4){
                printf("Esta cuenca ha sufrido la contaminacion por vertidos de aguas residuales, la deforestacion y la degradacion de los ecosistemas ribereños. Estos factores han causado la disminucion de la calidad del agua, la perdida de habitats acuaticos y la reduccion de la capacidad de autorregulacion del ecosistema.\n");
                end = terminar();
            }
        } else if (opc == 2){
            printf("Seleccione la cuenca hodrografica en deterioro sobre la que quiere saber:\n");
            printf("[1]CUENCA DEL RIO MOLINO.\n");
            printf("[2]CUENCA DEL RIO CAUCA.\n");                      //menu de la opción 2
            printf("[3]CUENCA DEL RIO PALO.\n");
            printf("[4]CUENCA DEL RIO PURACE.\n");

            scanf("%d",&sub_opc2);

            if (sub_opc2 == 1){
                printf("La cuenca del rio Molino se encuentra en deterioro principalmente por las siguientes 2 causas: Deforestacion y comtaminacion 2.\n");
                printf("Seleccione la causa que le interesa saber:\n");
                printf("[1]Deforestacion.\n");
                printf("[2]Contaminacion.\n");

                scanf("%d",&sub_opc2cuhidr);

                if (sub_opc2cuhidr == 1){
                    printf("Deforestacion, la tala indiscriminada de arboles en el area de la cuenca puede causar la erosion del suelo y la disminucion de la capacidad de retencion de agua, lo que afecta negativamente el equilibrio natural del ecosistema acuatico. y cambio de uso de suelo en las areas cercanas .\n");
                    end = terminar();
                } else if (sub_opc2cuhidr == 2){
                    printf("Contaminacion por residuos solidos y quimicos provenientes de actividades humanas, que refiere a la introduccion no deseada y perjudicial de desechos solidos y productos quimicos en el entorno natural como resultado de las actividades humanas. Estos residuos pueden provenir de diversas fuentes, como la industria, la agricultura, el consumo domestico y la generacion de energia.\n");
                    end = terminar();
                }
            } else if (sub_opc2 == 2){
                printf("La cuenca del rio Cauca se encuentra en deterioro principalmente por las siguientes 2 causas: Contaminacion y Deforestacion.\n");
                printf("Seleccione la causa que le interesa saber:\n");
                printf("[1]Contaminacion\n");
                printf("[2]Deforestacion.\n");

                scanf("%d",&sub_opc2cuhidr);

                if (sub_opc2cuhidr == 1){
                    printf("contaminacion por vertidos industriales y residenciales, que refiere a la introduccion de sustancias toxicas, quimicas o contaminantes en el medio ambiente como resultado de las actividades industriales y las actividades diarias en los hogares.\n");
                    end = terminar();
                } else if (sub_opc2cuhidr == 2){
                    printf("Deforestacion de las areas adyacentes que afecta la calidad y cantidad del agua, la deforestacion de las areas adyacentes a las fuentes de agua puede tener un impacto significativo en la calidad y cantidad del agua. La deforestacion implica la eliminacion o destruccion de arboles y vegetacion en una determinada area, dejando el suelo expuesto y sin proteccion.\n");
                    end = terminar();
                }
            } else if (sub_opc2 == 3){
                printf("La cuenca del rio Palo se encuentra en deterioro principalmente por las siguientes 2 causas: Deforestacion  y Vertido de desechos.\n");
                printf("Seleccione la causa que le interesa saber:\n");
                printf("[1]Deforestacion.\n");
                printf("[2]Vertido de desechos.\n");

                scanf("%d",&sub_opc2cuhidr);

                if (sub_opc2cuhidr == 1){
                    printf("Deforestacion en las zonas cercanas, contaminacion por actividades agricolas intensivas, La deforestacion implica la eliminacion o destruccion de los arboles y vegetacion en una determinada area. Cuando se talan los arboles en las zonas cercanas a las fuentes de agua, se eliminan las barreras naturales que ayudan a regular el ciclo del agua, de igual manera Las practicas agricolas intensivas, como el uso excesivo de pesticidas, herbicidas y fertilizantes quimicos, pueden tener un impacto significativo en la calidad del agua ya que estos productos quimicos pueden contaminar las fuentes de agua de diferentes formas.\n");
                    end = terminar();
                } else if (sub_opc2cuhidr == 2){
                    printf("El vertido de desechos industriales sin tratamiento, construccion de represas y cambios en el cauce natural del rio, cuando los desechos industriales no se tratan adecuadamente, pueden ser vertidos directamente en los cuerpos de agua, lo que resulta en la contaminacion del agua. Estos vertidos pueden contener sustancias quimicas toxicas, metales pesados y otros contaminantes que son perjudiciales para los ecosistemas acuaticos y la salud humana. La presencia de estos contaminantes en el agua puede causar daños a los organismos acuaticos, alterar el equilibrio de los ecosistemas y dificultar el suministro de agua potable.\n");
                    end = terminar();
                }
            } else if (sub_opc2 == 4){
                printf("La cuenca del rio Purace se encuentra en deterioro principalmente por las siguientes 2 causas: Erosion del suelo y Extraccion de agua.\n");
                printf("Seleccione la causa que le interesa saber:\n");
                printf("[1]Erosion del suelo.\n");
                printf("[2]Extraccion de agua.\n");

                scanf("%d",&sub_opc2cuhidr);

                if (sub_opc2cuhidr == 1){
                    printf("Erosion del suelo debido a las practicas agricolas inadecuadas, Los sedimentos y productos quimicos presentes en el suelo erosionado pueden ser transportados hacia los cuerpos de agua cercanos, como rios, arroyos y lagos, a traves de escorrentias. Esto puede resultar en la contaminacion del agua, ya que los sedimentos pueden obstruir los cauces de agua, afectar negativamente la vida acuatica y transportar pesticidas y fertilizantes hacia los cuerpos de agua, lo que puede causar problemas de calidad del agua.");
                    end = terminar();
                } else if (sub_opc2cuhidr == 2){
                    printf("Extraccion excesiva de agua para uso agricola y ganadero, refiere al consumo desproporcionado de agua por parte de estas actividades, superando la capacidad natural de renovacion de los recursos hidricos. Esto puede tener efectos perjudiciales tanto en la disponibilidad de agua para otros usos como en los ecosistemas acuaticos.");
                    end = terminar();
                }
            }
        } else if (opc == 3){
            printf("Seleccione la cuenca sobre la que quiere saber su cuidado.\n");
            printf("[1]CUENCA DEL RIO MOLINO.\n");
            printf("[2]CUENCA DEL RIO CAUCA.\n");                      //menu de la opción 3
            printf("[3]CUENCA DEL RIO PALO.\n");
            printf("[4]CUENCA DEL RIO PURACE.\n");

            scanf("%d",&sub_opc3);

            if (sub_opc3 == 1){
                printf("La cuenca del rio Molino puede estar mejor con las siguientes soluciones: Implementacion de proyectos y Sistemas de tratamientos.\n");
                printf("Seleccione la solucion que quiere saber:\n");
                printf("[1]Implementacion de proyectos.\n");
                printf("[2]Sistemas de tratamientos.\n");

                scanf("%d",&sub_opc3Sol);

                if (sub_opc3Sol == 1){
                    printf("Implementar proyectos de reforestacion en las areas degradadas de la cuenca para recuperar la vegetacion y proteger el suelo de la erosion.\n");
                    end = terminar();
                } else if (sub_opc3Sol == 2){
                    printf("Establecer sistemas de tratamiento de aguas residuales adecuados para las areas urbanas y agricolas, con el fin de reducir la contaminacion del rio y mejorar la calidad del agua.\n");
                    end = terminar();
                }
            } else if (sub_opc3 == 2){
                printf("La cuenca del rio Cauca puede estar mejor con las siguientes soluciones, Programas y Regulaciones.\n");
                printf("Seleccione la solucion que quiere saber:\n");
                printf("[1]Programas.\n");
                printf("[2]Regulaciones.\n");

                scanf("%d",&sub_opc3Sol);

                if (sub_opc3Sol == 1){
                    printf("Implementar programas de restauracion y conservacion de areas boscosas en las cuencas para proteger el suelo, regular el flujo de agua y mejorar la calidad del agua.\n");
                    end = terminar();
                } else if (sub_opc3Sol == 2){
                    printf("Establecer regulaciones y controles mas estrictos sobre las actividades industriales, asegurando un manejo adecuado de los desechos y la reduccion de la contaminacion.\n");
                    end = terminar();
                }
            } else if (sub_opc3 == 3){
                printf("La cuenca del rio Palo puede estar mejor con las siguientes soluciones: Proyectos y Practicas agricolas.\n");
                printf("Seleccione la solución que quiere saber:\n");
                printf("[1]Proyectos.\n");
                printf("[2]Practicas agricolas.\n");

                scanf("%d",&sub_opc3Sol);

                if (sub_opc3Sol == 1){
                    printf("Implementar proyectos de reforestacion y restauracion de áreas degradadas en la cuenca, promoviendo la plantacion de especies nativas que sean adecuadas para el ecosistema local.\n");
                    end = terminar();
                } else if (sub_opc3Sol == 2){
                    printf("Fomentar practicas agricolas sostenibles, como la implementación de tecnicas de conservación del suelo y el uso de cultivos de cobertura, para reducir la erosion y mejorar la calidad del suelo.\n");
                    end = terminar();
                }
            } else if (sub_opc3 == 4){
                printf("La cuenca del rio Purace puede estar mejor con las siguientes soluciones, Tecnicas agricolas y Regulacion.\n");
                printf("Seleccione la solucion que quiere saber:\n");
                printf("[1]Tecnicas agricolas.\n");
                printf("[2]Regulacion.\n");

                scanf("%d",&sub_opc3Sol);

                if (sub_opc3Sol == 1){
                    printf("Fomentar tecnicas agricolas sostenibles que minimicen la erosión del suelo, doptar practicas que protejan y conserven la capa fertil del suelo, evitando su desgaste y arrastre por el agua o el viento. Estas tecnicas se enfocan en mantener la salud del suelo y prevenir la perdida de nutrientes esenciales.\n");
                    end = terminar();
                } else if (sub_opc3Sol == 2){
                    printf("Regular y controlar el uso del agua, implementando medidas de gestion para evitar la sobreexplotacion.\n");
                    end = terminar();
                }
            }
        } else if (opc == 4){
            end = terminar();
        }
    }
        //system("pause");
        return 0;    
}

int terminar(){
    int salir = 0;
    int end = 1;
    printf("¿Desea terminar?.\n");
    printf("[1]Si.\n");
    printf("[2]No.\n");

    scanf("%d",&salir);
    if (salir == 1) {
        end=0;
    } else if (salir == 2) {
        end = 1;
    }
    return end;
}
