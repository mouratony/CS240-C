#include <stdio.h>
#include <stdlib.h>

// int prefixSum(int *p) {

// }

int solution(int A[], int N){
    int ans = 0;
    for(int i = 0; i < N; i++) {
        int cur_sum = 0;
        for(int j = i; j < N; j++) {
            cur_sum += A[j];
            if(cur_sum < 0){
                break;
            }
            ans += cur_sum;
        }
    }
    return ans;
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
        int result = solution(A, N);
        if (argc == 1) {
            printf("Case #%d: %d\n", i, result);
        }
        //    for (int j = 0; j < N; j++)
        //    {
        //         printf("%d ", A[j]);
        //    }
        //    printf("\n");
    }



    return 0;
}