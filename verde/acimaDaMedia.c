#include <stdio.h>

int main(){

	int C, N;
	float media, totalNotas = 0, notasAcima = 0;

	scanf("%d", &C);
	float porcentagens[C];
	for(int i = 0; i < C; i++){
		scanf("%d", &N);

		int notas[N];
        
		totalNotas = 0;
        notasAcima = 0;

		for(int j = 0; j < N; j++){
		    scanf("%d", &notas[j]);
		    totalNotas += notas[j];
		}

		media = totalNotas / N;

		for(int j = 0; j < N; j++){
            if(notas[j] > media)
                notasAcima++;
		}

		porcentagens[i] = notasAcima / N * 100.0;
	}
	for(int i = 0; i < C; i++){
		printf("%.3f%%\n", porcentagens[i]);
	}
}
