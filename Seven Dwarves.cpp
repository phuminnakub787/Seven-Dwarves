#include<stdio.h>
int main(){
	int dwarves[9];
	int i=0;
	int j=0;
	int sum=0;
	int k=0;
	while(i!=9){
	
		scanf("%d",&dwarves[i]);
		sum+=dwarves[i];
		i++;
	}
	i=0;
	while(i!=9){
//		printf("%d\n",i);
		
		while(j!=9){
//			printf("%d\n",j);
			
			if(sum-dwarves[i]-dwarves[j]==100){
				dwarves[i]=-1;
				dwarves[j]=-1;
				while(k!=9){
					
					if(dwarves[k]!=-1){
						printf("%d\n",dwarves[k]);
					}
					k++;
				}
				return(0);
			}
			j++;
		}
		j=0;
		i++;
	}
}
