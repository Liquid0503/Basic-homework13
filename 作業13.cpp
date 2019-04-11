#include<stdio.h>  

#include<iostream> 



int main()

{

    int sex51,age51; 

    printf("如果男性請輸入1,女性請輸入2。\n"); 

    printf("請輸入性別和年齡：");

 	scanf("%d%d",&sex51,&age51); 

    if( sex51==1 && age51>=18 )  

    {

    printf("你可以結婚\n");

    }

    if( sex51==1 && age51<18 )

    {

    printf("你不可以結婚\n");

    }

    if( sex51==2 && age51>=16 )

    {

    printf("妳可以結婚\n");

    }

    if( sex51==2 && age51<16 )

    {

    printf("妳不可以結婚\n");

    }

    return 0; 

}
