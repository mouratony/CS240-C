//
// Created by haoyu on 9/18/2022.
//
#include <stdlib.h>
#include <stdio.h>

typedef struct string {
    char *s;
    int len, cap;
} String;


String *append_string(String *s, char c) {
    if (s->cap == s->len) {
        s->cap <<= 1;
        s->s = (char *) realloc(s->s, s->cap);
    }
    s->s[s->len++] = c;
    s->s[s->len] = 0;
    return s;
}

char *getLine(String *s) {
    s->len = 0;
    char c;
    while (1) {
        c = getchar();
        if (c == -1 || c == '\n') return s->s;
        append_string(s, c);
    }
}
int compareValues(char a, char b) {
    return (int) a < (int) b;
}

int *solution(int L, char *S, int *res) {
    /*Complete this function*/
    for  (int i = 0; i < L; i++)
    {
        int count = 1;
        for (int j = i; j > 0; j--)
        {
            
            if (compareValues(S[j - 1], S[j]) == 1)
            {
                count += 1;
            } else
            {
                break;
            }
        }
        res[i] = count;

        
    }
    

    return res;
}

int main(int argc, char *argv[]) {
    int t, D, C, M, L;
    int *res = (int *) calloc(200000, sizeof(int));
    String s1 = {(char *) malloc(10), 0, 10},
            s2 = {(char *) malloc(10), 0, 10};
    t = atoi(getLine(&s1));
    for (int i = 1; i <= t; ++i) {
        getLine(&s1);
        getLine(&s2);
        sscanf(s1.s, "%d", &L);
        if (argc == 1) {
            for (int i = 0; i < L; i++) res[i] = 0;
            printf("Case #%d:", i);
            solution(L, s2.s, res);
            for (int i = 0; i < L; i++)
                printf(" %d", res[i]);
            printf("\n");
        } else if (atoi(argv[1]) == i) {
            printf("s1: %s\n", s1.s);
            printf("s2: %s\n", s2.s);
        }
        s1.len = 0;
        s2.len = 0;
    }
    free(res);
    return 0;
}
