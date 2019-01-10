#include <stdio.h>

bool isprime(int a);

int main(){
    
    //int a;
    //scanf("%d", &a);
    
    bool answer;
    int i;
    for(i = 1; i < 200; i++){
        answer = isprime(i);
        
        if(!answer){
            printf("%d  ", i);
            printf("PRIME\n");
        }
        
        /*
        else{
            printf("NOT PRIME\n");
        }
        */
        
    }
}


bool isprime(int a){

    int i;
    for( i = 2; i*i <= a; i++){
        if( a % i == 0){
            return true;
        }
    }
    
    return false;
    
}

    
