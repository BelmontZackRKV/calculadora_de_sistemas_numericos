#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int opc=0, num1 = 0, num2 = 0;
	do
	{
		system("cls");
		printf("\n----------------BIENVENIDO---------------- ");
 
        printf( "\n   1. Decimal.");
        printf( "\n   2. Binario.");
        printf( "\n   3. Octal.");
        printf( "\n   4. Hexadecimal.");
        printf( "\n   5. Salir.");
        printf( "\n   Opcion a escojer:");
        scanf("%d",&opc);

        switch(opc)
        {
        	case 1:
        		system("cls");
        		printf("Ingrese el primer valor:");
        		scanf("%d", &num1);
        		printf("Ingrese el segundo valor:");
        		scanf("%d", &num2);
        		break;

        	case 2:
        		system("cls");
        		printf("la suma de %d + %d es: %d", num1, num2, num1+num2);
        		//getch();
        		break;

        	case 3:
        		system("cls");
        		printf("la resta de %d - %d es: %d", num1, num2, num1+num2);
        		//getch();
        		break;

        	case 4:
        		system("cls");
        		printf("la multiplicasion de %d * %d es: %d", num1, num2, num1+num2);
        		//getch();
        		break;

        	case 5:
        		system("cls");
        		printf("la division de %d / %d es: %d", num1, num2, num1+num2);
        		//getch();
        		break;

        	case 6:
        		break;

        	default:
        		system("cls");
        		printf("La opcion que ingreso es incorrecta");
        		//getch();
        		break;
        }
	}
	while(opc !=6);
	
	return 0;

}