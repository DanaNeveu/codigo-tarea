#include<stdio.h>






void menu() {
    int opcion;
    printf("\n----- MENU -----\n");
    printf("1. Deserializar un mensaje\n");
    printf("2. Serializar un mensaje\n");
    printf("3. Recuperar un mensaje almacenado\n");
    printf("4. Salir\n");
    printf("--------------\n");
    printf("Selecciona una opcion:\n");
    scanf("%d", &opcion);
}

int main() {
    while (1) {
        menu();
        switch(opcion) {
            case 1:
                printf("Ingresa el mensaje a deserializar: ");
            break;

            case 2:
                printf("Ingresa el mensaje a serializar: ");
            break;

            case 3:
                printf("Ingresa la clave del mensaje a recuperar: ");
            break;

            case 4:
                printf("Saliendo del programa.\n");
            return 0;

            default:
                printf("Opción no válida.\n");
        }
    }return 0;
}