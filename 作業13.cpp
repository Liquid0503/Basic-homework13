#include<stdio.h>  

#include<iostream> 



int main()

{

    int sex51,age51; 

    printf("�p�G�k�ʽп�J1,�k�ʽп�J2�C\n"); 

    printf("�п�J�ʧO�M�~�֡G");

 	scanf("%d%d",&sex51,&age51); 

    if( sex51==1 && age51>=18 )  

    {

    printf("�A�i�H���B\n");

    }

    if( sex51==1 && age51<18 )

    {

    printf("�A���i�H���B\n");

    }

    if( sex51==2 && age51>=16 )

    {

    printf("�p�i�H���B\n");

    }

    if( sex51==2 && age51<16 )

    {

    printf("�p���i�H���B\n");

    }

    return 0; 

}
