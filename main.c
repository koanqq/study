#include<stdio.h>
extern int add(int a, int b);

int main() {
    int a,b;
    printf("input a:"); 
    scanf("%d", &a);
    printf("input b:"); 
    scanf("%d", &b);
    int sum = add(a,b);
    printf("a+b=%d", sum);
    return 0;
}

// gcc main.c -o main  
