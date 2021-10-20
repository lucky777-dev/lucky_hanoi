#ifndef HANOI
#define HANOI
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <stdlib.h>

struct board {
    int *stack_A, *stack_B, *stack_C;
    unsigned nb;
    char **tab;
    char *empty;
    char *base;
}; typedef struct board board;

int solve(int, int*, int*, int*);
void show();
void init();
void finish();

#endif