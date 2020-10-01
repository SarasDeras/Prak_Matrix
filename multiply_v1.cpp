double **multi_v1(double **A, double **B, int n){
        double **C = new double*[n];
        for (int i = 0; i < n; ++i){
                C[i] = new double[n];
                for (int j = 0; j < n; ++j){
                        C[i][j] = 0;
                }
        }
        for (int i = 0; i < n; ++i){
                for (int j = 0; j < n; ++j){
                        for (int k = 0; k < n; ++k){
                                C[i][j] += A[i][k] * B[k][j];
                        }
                }
        }
        return C;
}

double *multi_v2(double *A, double *B, int n){
	double *C = new double[n * n];
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < n; ++j){
			for (int k = 0; k < n; ++k){
				C[i + j * n] += A[i + k * n] * B[k + j* n];
			}
		}
	}
	return C;
}
