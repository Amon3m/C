#include<stdio.h>
#include<conio.h>


int main(){

int arr[3][4];
int i=0;
int j=0;
float savg;
int sum=0 ;
int avg=0 ;


	clrscr();
printf ("enter 12 values " );


	for(i = 0;i<3;i++){



	for(j = 0;j<4;j++){

	scanf("%d",&arr[i][j]);} }



	for(i = 0;i<3;i++){



	for(j = 0;j<4;j++){

		sum+=arr[i][j];


		if (j==3){
	   printf ( "\n sum of raw %d = %d",i,sum );
	   sum=0;

	 }}

 for(i = 0;i<4;i++){

			savg=0;

	for(j = 0;j<3;j++){

			 savg+=arr[j][i];


			 avg=savg/3;


		  printf ( "\n avg of col %d = %f",i,savg );

	 }

	 }

		}


getch();

}