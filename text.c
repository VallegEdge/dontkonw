#include <stdio.h>

int count_char(char text[], char target){
    int count = 0;
    for(int i = 0; text[i] !=  '\0'; i++){
        if(text[i] == target){
            count++;
        }
    }
    return count;
}

int main(void){
    char text[100];
    printf("enter your char:");
    fgets(text, sizeof(text), stdin);
    printf("%d", count_char(text, 'a'));

    return 0;

}