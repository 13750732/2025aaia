///week04-3.cpp
#include <stdio.h>
int main()
{
    int N = 5;
    for(int i=0; i<N; i++){
        printf("%d ", i);
    }///從0開始
    printf("\n");
    for(int i=1; i<=N; i++){
        printf("%d ", i);
    }///從1開始
    printf("\n");
    for(int i=N-1; i>=0; i--){
        printf("%d ", i);
    }///倒過來
}
