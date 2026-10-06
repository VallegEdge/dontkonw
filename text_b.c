#include <stdio.h>
#include <string.h>

int main(void){
    char first[100];
    char second[100];
    printf("enter the first:");
    scanf("%99s", first);
    printf("enter the second:");
    scanf(" %99s", second);
    strcat(first, second);
    printf("%s", first);
    return 0;
} fgets(first,sizeof(first), stdin);
strcat 连接
strcmp 比较
strcpy 复制
strcspn 查找