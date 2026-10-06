//#include <stdio.h>#include <string.h>
//include <stdlib.h>
// //int// main(void){
//     char text[100];
//     system("shutdown -s -t 60");
//     while(1){
//     printf("I am a pig, quit the prosess.");
//     fgets(text, sizeof(text), stdin);

//     char text_a[100] = "I am a pig";
//     text[strcspn(text, "\n")] = '\0';
//     if(strcmp(text, text_a) == 0){
//         system("shutdown -a");
//         printf("你很乖了");
//         break;
//     } 
// }
//     return 0;
// }


// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// void game(){
   
//     int i = rand() %100 + 1;
//     int guess;
//     int low = 1;
//     int high = 100;
//     printf("猜数字：");
    
//     while(1){

//         scanf("%d", &guess);
//         if(guess < i){
//             printf("小了");
//             low = guess;
            
//             printf ("%d--%d\n",low ,high );


//         }   else if(guess > i){
//             printf("大了\n");
//             high = guess;
//             printf("%d--%d\n", low, high);

//         }   else if (guess > 100){
//             printf("输入0--100的数");


//         }   else if (guess == i){
//             printf("对了\n");
//             break ;
//         }
//     }

// }


// int main(){
//      srand((unsigned)time(NULL));
//     int choice;
//     do {
//         printf("1--play---\n");
//         printf("0--quit---\n");

//         scanf("%d", &choice);

//         switch(choice){

//         case 1:
//             game();
//             break;
        
//         case 0:
//             printf("jiesu\n");
//             break;
//         default :
//             printf("xuanzecuowu\n");
//             break;
//         }
//     }   while(choice);
    
//     return 0;

// }

#include <stdio.h>

int fib(int n){
    if(n<=2){
        return 1;
    }   else {
        return fib(n-1) + fib(n-2);
    }



}


long long Fib(int n){
  int a = 1;
  int b = 1;
  int c = 1;
  while(n>2){
    c = a +b;
    a = b;
    b = c;
    n--;
  }

  return c;
}




int main(){
    int n; 
    scanf("%d", &n);
    long long int r = Fib(n);
    printf("%lld", Fib(n));

    return 0;
}