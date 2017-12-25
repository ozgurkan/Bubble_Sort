#include<stdio.h>
#include<stdlib.h>
#define eleman 7


int main(){
	int dizi[eleman]={10,2,30,4,9,1,7};
	int i,j,tmp,x;
	

	for(i=0;i<eleman;i++){
		printf("%d   ",dizi[i]);
	}
	printf("\n");
int sirali=1;
	for(i=0;i<eleman;i++){
	
	    for(j=0;j<eleman-1;j++){
		if(dizi[j+1]<dizi[j]){
			sirali=0;
			tmp=dizi[j+1];	
			dizi[j+1]=dizi[j];
			dizi[j]=tmp;	
			for(x=0;x<eleman;x++){
				printf("%d   ",dizi[x]);
			}
			printf("\n");
		}

		
	    }

	    if(sirali){	
		printf("Verilen dizi zaten sıralıdır.\n");
		break;
	    }
	}

	for(i=0;i<eleman;i++){
		printf("%d   ",dizi[i]);
	}
	printf("\n");
return 0;
}
