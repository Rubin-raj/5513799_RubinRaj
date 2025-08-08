#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char s[1001],t[1001];
    scanf("%s",s);
    scanf("%s",t);
    int n= strlen(s);
    for(int i=0;i<n;i++){
        if(s[i]==t[i])
            printf("0");
        else
            printf("1");
    }
    printf("\n");
    
    return 0;