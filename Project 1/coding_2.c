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
// Gets the distance from one letter to the other and making sure
// that letters are in cyclic order;
int distanceLetters(char a, char b) {
    int letterInt = abs((int) a - (int) b);
    if (letterInt > 13)
    {
        letterInt = 26 - letterInt;
    }
    return letterInt;
}

int solution(char *S, char *F) {
    /*Complete this function*/
    int minValue = 0;
    for (int i = 0; S[i] != '\0' ; i++)
    {
        char mainLetter = S[i];
        int minDistance = distanceLetters(mainLetter, F[0]);
        for (int j = 1; F[j] != '\0'; j++) {
            if (minDistance > distanceLetters(mainLetter, F[j])){
                minDistance = distanceLetters(mainLetter, F[j]);
            }
        }
        minValue += minDistance;
    }
    return minValue;
}

int main(int argc, char *argv[]) {
    int t;
    String s1 = {malloc(10), 0, 10},
            s2 = {malloc(10), 0, 10};
    t = atoi(getLine(&s1));
    for (int i = 1; i <= t; ++i) {
        getLine(&s1);
        getLine(&s2);

        if (argc == 1) {
            printf("Case #%d: %d\n", i, solution(s1.s, s2.s));
        } else if (atoi(argv[1]) == i) {
            printf("s1: %s\n", s1.s);
            printf("s2: %s\n", s2.s);
        }
        s1.len = 0;
        s2.len = 0;
    }
    return 0;
}
