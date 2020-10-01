#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

double ** multi_v1(double **A, double **C, int n);
double * multi_v2(double *A, double *C, int n);



double ** gen_matrix(int n){
	double **C = new double*[n];
        for (int i = 0; i < n; ++i){
                C[i] = new double[n];
                for (int j = 0; j < n; ++j){
                        C[i][j] = rand() / RAND_MAX;
                }
        }
	return C;
}



double * gen_matrix2(int n){
        double *C = new double[n * n];
        for (int i = 0; i < n; ++i){
		for (int j = 0; j < n; ++j){
                        C[i + j * n] = rand() / RAND_MAX;
                }
        }
	return C;
}


int main(int argc, char* argv[]){
	int n = 512;
	double *A, *B, *C;
	A = gen_matrix2(n);
	B = gen_matrix2(n);
	clock_t start = clock();
	C = multi_v2(A, B, n);
	clock_t finish = clock();
	std::cout << (finish - start) / ((double) CLOCKS_PER_SEC) << endl;
	return 0;
}
