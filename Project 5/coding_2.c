#include <stdio.h>
#include <stdlib.h>


// scanf N - length of the array
// i is the index of array


// contigious subarray is an m-stopwatch if arr[m] = {m, m - 1, m - 2, m - 3, ...}
// example 3-stopwacth = {3, 2, 1}

// count number of k-stopwatch subarrays in an array.



/** 1- initialize count to 0
 * 2- thus look for K in the array
 * 3 - then finding k look if the next elements follow the k-stopwatch rule, until k - (k - 1).
 * if it does follow count++ (can use nested for loop)
 * **/

int solution(int *arr, int N, int K) {
    int answer = 0;
    for (int i = 0; i < N; i++)
    {

        if (arr[i] == K)
        {
            int count = 0;
            for (int j = i; j < N; j++)
            {
                /* code */
                if (arr[j] > arr[j + 1] && j < N - 1)
                {
                    count++;
                } else if (arr[j] == 1 && count >= K - 1)
                {
                    answer++;
                    break;
                }
                else
                {
                    count = 0;
                    break;
                }



            }

        }

    }
    return answer;
}

int main(int argc, char *argv[]) {
    int t, N, K;
    scanf("%d", &t);
    for (int i = 1; i <= t; ++i)
    {
        scanf("%d %d", &N, &K);
        int A[N];
        for (int j = 0; j < N; j++)
        {
            int element;
            scanf("%d", &element);
            A[j] = element;
        }
        int result = solution(A, N, K);
        if (argc == 1) {
            printf("Case #%d: %d\n", i, result);
        }

    }



    return 0;
}