#include <stdlib.h>
#include <stdio.h>


long solution(int N, int K, int S) {
    long answer1 = (long) N + (long) K;
    long answer2 = 2 * ((long) K) - 2 * ((long) S) + (long) N;
    if (answer1 < answer2)
    {
        /* code */
        return answer1;
    }
    return answer2;
}

int main(int argc, char *argv[]) {
    int T, N, K, S;
    scanf("%d", &T);
    for (int i = 0; i < T; ++i)
    {
        scanf("%d %d %d", &N, &K, &S);
        long ans = solution(N, K, S);
        printf("Case #%d: %ld \n", i + 1, ans);
    }
    
    return 0;
}
