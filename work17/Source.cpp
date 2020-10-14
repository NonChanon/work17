#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int* ptMat1, * ptMat2;
	int mat1[3][3];
	int mat2[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &mat1[i][j]);
		}
	}
	ptMat1 = &mat1[0][0];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &mat2[i][j]);
		}
	}
	ptMat2 = &mat2[0][0];
	for (int i = 0; i < 9; i++) {
		printf("%2d ", *(ptMat1 + i) + *(ptMat2 + i));
		printf((i+1) % 3 == 0 ? "\n":"");
	}
	return 0;
}