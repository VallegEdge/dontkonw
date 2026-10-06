#include <stdio.h>

    int max(int numbur[], int length) {
        int max_value = number[0];
        for(int i =1; i < 5; i++){
            if ( max_value < numbe[i] ){
                max_value = number[i]

            }  
        
        }   return max_value;
    }
 int main(void){       
    
    int number[5]
    printf("5number:");
    for(i = 0; i < 5; i++){
        scanf("%d", &number[i]);
    }
    int result = max(number, 5);
    printf("max=%d", result);
    return 0;
}
    double average(int number[ ], int length){
        int total = 0;
         for( int i = 0; i < length; i++){
            total = total + number[i];
            
         }  double average_value = (double)total / length;
            return average_value;
         
    }
    int string_text(char text[]){
        int length = 0;
        while ( text[length] != '\0'){
            length++;
        }
        
        return length;
        
    }