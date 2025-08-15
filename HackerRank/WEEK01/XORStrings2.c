#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

char* strings_xor(char *s, char *t){
    int len = strlen(s);
    char *res = malloc(len + 1);
    
    for (int i = 0; i < len; i++){
        res[i] = (s[i] == t[i]) ? '0' : '1';
    }
    res[len] = '\0';
    return res;
}


int main() {
    char s[101], t[101];
    scanf("%100s",s);
    scanf("%100s",t);
    
    char *result = strings_xor(s,t);
    printf("%s\n", result);
    
    free(result);
    return 0;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

}