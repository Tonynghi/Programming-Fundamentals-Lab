bool isPrime(int n)
{
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int specialCells(int arr[][1000], int row, int col)
{
    int count = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            int rowSum = 0, colSum = 0;
            for (int k = 0; k < col; k++)
            {
                rowSum += arr[i][k];
            }
            for (int k = 0; k < row; k++)
            {
                colSum += arr[k][j];
            }
            if (isPrime(rowSum) && isPrime(colSum))
            {
                count++;
            }
        }
    }
    return count;
}