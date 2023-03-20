#include<stdio.h>
#include<conio.h>

int main(){

	int col,row,size,i;

    clrscr();
	printf("plz enter size of box : ");
	scanf("%d",&size);



	for(i=1;i<=size*size;i++){
		if(i==1){
			row = 1;
			col = (size + 1) / 2 ;
		}
		else if((i-1)%size == 0){
			row++;
		}
		else{
			col--;
			row--;

			if(col == 0){
				col = size;
			}

			if(row == 0){
				row = size;
			}
		}
		gotoxy(col*3,row*3);
        printf("%d",i);
	}
	getch();
    return 0;

}