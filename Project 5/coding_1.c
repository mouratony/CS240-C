#include <stdio.h>
#include <stdlib.h>


int NumbOfPeaks(int *arr, int N) {
    int count = 0;
    for (int i = 1; i < N - 1; i++)
    {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
        {
            /* code */
            count++;
        }
        
    }
    return count;
    
}

int main(int argc, char *argv[]) {
    int t, N;
    scanf("%d", &t);
    for (int i = 1; i <= t; ++i)
    {
        scanf("%d", &N);
        int A[N];
        for (int j = 0; j < N; j++)
        {
            int element;
            scanf("%d", &element);
            A[j] = element;
        }
        int result = NumbOfPeaks(A, N);
        if (argc == 1) {
            printf("Case #%d: %d\n", i, result);
        }

    }



    return 0;
}