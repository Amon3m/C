#include<stdio.h>
#include<conio.h>


int main(){

int arr[5 ]= {3,4,6,10,1  } ;
int i=0 ;
int max=arr[0] ;
int min=arr[0] ;

	clrscr();



	for(i = 0;i<5;i++){
   if(arr[i]>max ){
   max=arr[i];
   }







}
	for(i = 0;i<5;i++){
	 if(arr[i]<min ){
   min=arr[i];
   }










}
	printf( "max =  %d \n",max);
		printf( "min =  %d ",min);

getch();

}
