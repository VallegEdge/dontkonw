#include <stdio.h>



int main(){
   
    int max;
    scanf("%d", &max);
    int num[max+1];
    for(int n = 0; n <= max; n++){
        scanf("%d", &num[n]);
    }

    int min = 0;
    int stu = 0;
    for(int n = 0; n <= max; n++){
        stu = stu + num[n];
        
        while(stu < n+1&&n<=max-1){
            stu += 1;
        }
    }   
    int total = 0;
    for(int n = 0; n<=max; n++){
        total = total + num[n];
    }
    min = stu - total;
    printf("%d", min);

return 0;
}