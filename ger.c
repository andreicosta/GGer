#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define max_value 100
#define num_nodos 2000
#define dens 0.1
#define prec 100000
#define filename "in.txt"

int main(){
	int i, j;
	FILE* arq = fopen(filename, "w");
	
	srand(time(NULL));
	
	fprintf(arq, "%d %d\n", num_nodos, rand()%num_nodos);
	
	for(i=0;i<num_nodos;i++){
		for(j=0;j<num_nodos;j++){
			if (i!=j && (dens == 1 || (rand()%prec) < dens*prec))
				fprintf(arq, "%d %d ", j, rand()%max_value+1);
		}
		fprintf(arq, "\n");
	}
	
	fclose(arq);
	
	return 0;
}
