#include <stdio.h>
#include <time.h>

#define max_value 10
#define num_nodos 1000
#define dens 0.1
#define filename "in.txt"

int main(){
	int i, j;
	FILE* arq = fopen(filename, "w");
	
	srand(time(NULL));
	
	fprintf(arq, "%d %d\n", num_nodos, rand()%num_nodos);
	
	for(i=0;i<num_nodos;i++){
		for(j=0;j<num_nodos;j++){
			if (i!=j){
				if (dens == 1 || (rand()%(int)(1./dens))*dens < dens)
					fprintf(arq, "%d %d ", j, rand()%max_value+1);
			}
		}
		fprintf(arq, "\n");
	}
	
	fclose(arq);
	
	return 0;
}
