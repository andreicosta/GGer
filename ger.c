#include <stdio.h>
#include <time.h>

#define max_value 10
#define dens 0.5

int main(){
	int i, j, n=10;
	FILE* arq = fopen("in.txt", "w");
	
	srand(time(NULL));
	
	fprintf(arq, "%d %d\n", n, rand()%n);
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if (i!=j){
				if ((rand()%(int)(1./dens))*dens < dens)
					fprintf(arq, "%d %d ", j, rand()%max_value);
			}
		}
		fprintf(arq, "\n");
	}
	
	fclose(arq);
	
	return 0;
}
