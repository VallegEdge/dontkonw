// #include <stdio.h>
// #include <string.h>
// int main(void){

//     const char word[] = "welcome to bit!!!!!!!";
//     const char fill = '#';

//     int len = (int)strlen(word);
//     for (int k = 0; k <= len/2; k++){
//         for(int i = 0; i< k; i++){
//             printf("%c", word[i]);
//         }
//         for(int i = 0; i < len-2*k; i++){
//             printf("%c", fill);

//         }
//         for(int i = len-k; i<len; i++){
//             printf("%c", word[i]);
//         }   printf("\n");
//     }
//     return 0;
// } 
#include <stdio.h>
#include <string.h>

int main(void)
{
    const char word[] = "welcome to bit!!!!!!";
    const char fill   = '#';              /* 一个字符足够，不用开数组 */
    int len = (int)strlen(word);          /* 20，真正的列数 */

    for (int k = 0; k <= len / 2; k++) {   /* k = 0..10，共 11 帧 */
        for (int i = 0; i < k; i++)              /* 左边 k 个 */
            putchar(word[i]);

        for (int i = 0; i < len - 2 * k; i++)    /* 中间 len-2k 个 '#' */
            putchar(fill);

        for (int i = len - k; i < len; i++)      /* 右边 k 个，到 len-1 为止 */
            putchar(word[i]);

        putchar('\n');
    }
    return 0;
}