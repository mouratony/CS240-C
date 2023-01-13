#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct withdraws
{
    int K;
    int pos;
}temp;


int main() {
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        int N, X;
        scanf("%d %d",&N,&X);
        struct withdraws queue[N];
        for (int j = 0; j < N; j++) {
            int A;
            scanf("%d",&A);
            queue[j].K = A / X + (A % X != 0);//x / y + (x % y != 0) ceiling
            queue[j].pos= j + 1;
        }
        // Sorting the queue in the ascending order of K.
        for (int l = 1; l < N; l++)
            for (int j = 0; j < N - l; j++)
            {
                if (queue[j].K > queue[j + 1].K)
                {
                    temp = queue[j];
                    queue[j] = queue[j + 1];
                    queue[j + 1] = temp;
                }
            }
        printf("Case #%d: ", i + 1);
        for(int j = 0;j < N; j++)
        {
            printf("%d ",queue[j].pos);
        }
        printf("\n");
    }
    return 0;
}