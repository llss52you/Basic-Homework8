#include <stdio.h> 

#include <stdlib.h> 

int main(void){

	int factor=2;  

	int number;    

	printf("請輸入1-n的質數，n:");

	scanf("%d、",&number);           

	for(int i=2;i<=number;i++){      

		if(i==2){               

		    printf("1-%d範圍的質數有：",number); 

			printf("%d",i);

			printf(" ");

			continue;

		}

		while(i%factor!=0&&factor<=i){  

			factor+=1;    			

			if(factor/i==1){  

				printf("%d",i);

				printf(" ");

				factor=2;

				break;

			} 

			if(i%factor==0){ 

				factor=2;

				break;

			}	

		}

	}

	system("pause");

	return 0;  

}
