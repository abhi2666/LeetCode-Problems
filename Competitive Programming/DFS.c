//DFS - Depth First Search 
//using recursion

#include <stdio.h>

void print_mat(int a[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
        
    }
    
    
}

void DFS(int adj_mat[][8], int ele)
{
    static int visited[8] = {0};  //since we are using recursion
    if(visited[ele] == 0)
    { 
        //not visited yet, make a visit
        printf("%d ", ele);
        visited[ele] = 1;
    }
    for (int i = 0; i < 8; i++)
    {
        if(adj_mat[ele][i] == 1 && visited[i] != 1)
        {
            DFS(adj_mat, i);
        }
    }
    
}

int main()
{
    int A[8][8] = {{0, 0, 0, 0, 0, 0, 0, 0},
                   {0, 0, 1, 1, 1, 0, 0, 0},
                   {0, 1, 0, 1, 0, 0, 0, 0},
                   {0, 1, 1, 0, 1, 1, 0, 0},
                   {0, 1, 0, 1, 0, 1, 0, 0},
                   {0, 0, 0, 1, 1, 0, 1, 1},
                   {0, 0, 0, 0, 0, 1, 0, 0},
                   {0, 0, 0, 0, 0, 1, 0, 0}};

    DFS(A, 4);

    return 0;
}