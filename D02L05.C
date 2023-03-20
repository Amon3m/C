 #include<stdio.h>
#include<conio.h>
void main(void){


int a , b ;

 clrscr();


 for(a=10;a>=0;a--){
 printf (" %d\n  ",a) ;

  for(b=10;b>=0;b--) {
  printf (" %d x %d=%d\n  ",a,b,a*b);
  }
  printf (" ****************\n  ")       ;




 }
	getch();
  }