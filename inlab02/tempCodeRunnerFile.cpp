int **readArray()
{
    int **array = new int *[10];

    for (int i = 0; i < 10; i++)
    {
        array[i] = new int[10];
    }

    for (int row = 0; row < 10; row++)
    {
        for (int col = 0; col < 10; col++)
        {
            cin >> array[row][col];
            if (array[row][col] == 0)
            {
                for (int restCol = col + 1; restCol < 10; restCol++)
                {
                    array[row][restCol] = 0;
                }
                break;
            }
        }
    }
};