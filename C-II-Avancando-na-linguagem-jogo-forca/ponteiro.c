#include <stdio.h>

void calcula(int* c2) {
	//printf("calcula %d %d", c, &c);
	printf("calcula %d %d\n", (*c2), c2);
	(*c2)++;
	printf("calcula %d %d\n", (*c2), c2);
}

void soma(int* num, int a, int b) {
    *num = a + b;
}


int main() {
	int c = 10;

	printf("main %d %d\n", c, &c);
	calcula(&c);
	printf("main %d %d\n", c, &c);


	int num = 0;
	soma(&num, 1, 3);

	printf("soma %d\n", num);

}
