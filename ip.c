#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char ipstr[15];
    printf("\nEnter the IP Address:");
    scanf("%s",ipstr);
    char buffer[20];
    int ip = atoi(ipstr);

    if(ip>=1 && ip<=127){
        printf("\nAddress belongs to class A");
    }
    else if(ip>=128 && ip<=191){
        printf("\nAddress belongs to class B");
    }
    else if(ip>=192 && ip <=223){
        printf("\nAddress belongs to class C");
    }
    else if(ip>=224 && ip <=239){
        printf("\nAddress belongs to class D");
    }
    else{
        printf("\nAddress belongs to class E");
    }
}
