#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	int N, k, para = 0, i;

	scanf("%d", &N);

	while(N--) {
		scanf("%d", &k);
		char idioma[k][21];
		for(i = 0; i < k; i++) {
			scanf("%s", idioma[i]);
		}

		i = 1;

		while(i < k) {
			if(strcmp(idioma[0], idioma[i]) != 0) {
				para = 1;
				break;
			}
			para = 0;
			i++;
		}

		if(para == 0) {
			printf("%s\n", idioma[0]);
		}else {
			printf("ingles\n");
		}
	}

	return 0;
}
