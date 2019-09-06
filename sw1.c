#include<stdio.h>

int main(){
    int ch;
    printf("Who do you think is the captain of Indian Cricket Team? ");
    scanf("%d",&ch);
    switch(ch){
        case 0: printf("Wrong! Dhoni was the old Captain of India. He was replaced by Virat Kohli in 2014");
        break;
        case 1: printf("Right! Virat Kohli is the current captain of India's Cricket Team. ");
        break;
        case 2: printf("Wrong!Hardik Pandya was never the captain of India's cricket Team. He is a batsman");
        break;
        default:printf("Wrong Choice! Enter from 0-2");

   }
    return 0;
}
