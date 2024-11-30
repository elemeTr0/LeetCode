void rotate(int** matrix, int matrixSize, int* matrixColSize) {
    int r=0 ,c;
    int temp[matrixSize][matrixSize];
    for (int i=0; i < matrixSize; i++){
        for (int j=0; j<matrixSize; j++)
        temp[i][j]=matrix[i][j];
    }
    for (int j=0; j<matrixSize; j++)
    {
        c=0;
        for(int i=matrixSize-1; i>=0; i--){
            matrix[r][c]=temp[i][j];
        c++;
        }
        r++;
    }
}