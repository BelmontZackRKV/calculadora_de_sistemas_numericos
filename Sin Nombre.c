#include <stdio.h>
#include <stdlib.h>

void Decimal();
void getbinario();

int main()
{
    int opcion;
    system("cls");
	do
	{

		printf("\n----------------BIENVENIDO---------------- ");

        printf( "\n   1. Decimal.");
        printf( "\n   2. Binario.");
        printf( "\n   3. Octal.");
        printf( "\n   4. Hexadecimal.");
        printf( "\n   5. Salir.");
        printf( "\n\n   Introduzca opcion (1-5): ");

        scanf( "%d", &opcion );

		 system("cls");
		switch ( opcion )
		{
  		 	      //int m,op;
  		 	      //int n,opcion;
		 	case 1:

		 		 	system("cls");
                    Decimal();
                    break;
 					 //do
 					 //{
				 	  //printf("\n --------DECIMAL--------");
    			 	  //printf("\n 1. Convertir de Decimal a Binario");
                      //getDecimal();
                      //printf("\n 2. Convertir de Decimal a Octoal");
		 	          //printf("\n 3. Convertir de Decimal a Hexadecimal");
		 	          //printf("\n 4. Calculadora");
		 	          //printf( "\n\n   Introduzca opcion (1-4): ");

		 	          //scanf("%d", opcion);

		 	        //switch (opcion)
		 	        //	{
		 	        	//   case 1: printf("1. decimal a binario");
		 	        	//   case 2: printf("2. decimal a octal");
		 	        	//   case 3: printf("3. decimal a hexadecimal");
		 	        	//   case 4: printf("4. calculadora");
					   // }
					 //}while ( opcion != 4 );


			case 2: system("cls");
				 	printf("\n --------BINARIO--------");
    			 	printf("\n 1. Convertir de Binario a Octoal");
		 	        printf("\n 2. Convertir de Binario a Decimal");
		 	        printf("\n 3. Convertir de Binario a Hexadecimal");
		 	        printf("\n 4. Calculadora");
		 	        printf( "\n\n   Introduzca opcion (1-4): ");

		 	        scanf("%d", opcion);

	        case 3: system("cls");
				 	printf("\n --------OCTAL--------");
    			 	printf("\n 1. Convertir de Octoal a Binario");
		 	        printf("\n 2. Convertir de Octoal a Decimal");
		 	        printf("\n 3. Convertir de Octoal a Hexadecimal");
		 	        printf("\n 4. Calculadora");
		 	        printf( "\n\n   Introduzca opcion (1-4): ");

		 	        scanf("%d", opcion);

			case 4: system("cls");
				 	printf("\n --------HEXADECIMAL--------");
    			 	printf("\n 1. Convertir de Hexadecimal a Binario");
		 	        printf("\n 2. Convertir de Hexadecimal a Octoal");
		 	        printf("\n 3. Convertir de Hexadecimal a Decimal");
		 	        printf("\n 4. Calculadora");
		 	        printf( "\n\n   Introduzca opcion (1-4): ");

		 	        scanf("%d", opcion);
        }
    }while ( opcion != 5 );


    return 0;
}

//void getbinario()
//{
//	 int decimal =0, binario =0;
//	 printf("ingrse su numero");
//	 scanf("%d", &decimal);
//	 binario = decimal + 2;
//	 printf("la conversion a binario es:", binario);
//}

void Decimal()
{
    system("cls");
    int menu = 0;
	 		 	    
    printf("Operaciones Decimales");
	 		 	    
    printf("\n --------DECIMAL--------");
    printf("\n 1. Convertir de Decimal a Binario");
    printf("\n 2. Convertir de Decimal a Octoal");
    printf("\n 3. Convertir de Decimal a Hexadecimal");
    printf("\n 4. Calculadora");
    printf("\n 5. Regresar");
    printf( "\n\n   Introduzca opcion (1-5): ");

    scanf("%d", menu);
		 	          

    switch (menu) {
        case 1:
  		    printf("1. decimal a binario");
            getch();
            //break;
        case 2: printf("2. decimal a octal");   break;
	    case 3: printf("3. decimal a hexadecimal"); break;
 	    case 4: printf("4. calculadora"); break;
  	    case 5: return;
    }

    return;
}
