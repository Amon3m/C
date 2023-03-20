#include <stdio.h>
#include <conio.h>
#define SIZE 20
#define MAX_MENU_ITEMS 3


//---------



typedef struct Employee
{
	char name [15];
	int  code;
	int  salary;

}Employee;
//----

int main() {
	char menu[MAX_MENU_ITEMS][20] = {"New", "Display", "Exit"};
	int num_items = 3;
	int choice = 0;
	char key;
	int term=0;
	int size=0;
	int i;
	int count=0;

	Employee emp_arr[SIZE];
	 system("cls");

	do {
		// Display menu
		printf(" ************************************************\n");
		printf(" *------------------MENU------------------------*\n");
		printf(" ************************************************\n")
		;
		for (i = 0; i < num_items; i++) {

			if (i == choice) {
			 printf("> ");

			 textcolor(RED);

			 textbackground(WHITE)  ;
			} else {
				printf("");

				textbackground(BLACK) ;

				textcolor(WHITE);

			}
			cprintf("        %d \t %s  \n", i+1, menu[i]);

			printf("\n");
		}

		//
		key = getch();

		//
		if (key == 27 || key == '3') { // ESC key or '3' key
			break;


		}



		else if (key == 13) { // Enter key


//-------------------------------------------------
			//  choice
	switch (choice) {


		   case 0:
					textcolor(GREEN)  ;
					cprintf("Creating new item...\n");
					printf("\n ") ;


					printf("Enter Number of Employee :- ");
					scanf("%d",&size);//
					size = size +count;
					if(size <=20){

			for ( i=count; i<size; i++){

				printf("Employee [%d] name  :- ",i+1);
				scanf("%s",emp_arr[i].name);

				printf("Employee[%d]  code  :- ",i+1);
				scanf("%d",&emp_arr[i].code);

				printf("Employee[%d]  salary:- ",i+1);
				scanf("%d",&emp_arr[i].salary);
					count++;
				}}

					getch();


					break;

//------------------------------------------------------
	   case 1:
					textcolor(GREEN)  ;
					cprintf("Displaying items...\n");
					printf("\n ")  ;

		 for (i=0; i<size; i++){

				printf("Employee[%d] name = %s \n ",i+1,emp_arr[i].name);

				printf("Employee[%d] code = %d \n ",i+1,emp_arr[i].code);



				printf("Employee[%d] salary = %d \n ",i+1,emp_arr[i].salary);

				printf("---------------------------------\n");}

					getch();
//-----------------------------------------------
					break;
	   case 2:

					printf("EXIT...\n");

					term=1;
					break;
			}
		} else if (key == 72) { // Up
			choice = (choice == 0) ? num_items - 1 : choice - 1;
		} else if (key == 80) { // Down
			choice = (choice == num_items - 1) ? 0 : choice + 1;
		}
		///----------
		   else if(key==79 ){choice= num_items - 1;   }

		   else if(key==71) {choice=0 ;   }


		// Clear screen
		system("cls");
	} while (!term) ;

	printf("Exiting...\n");
	return 0;
}
