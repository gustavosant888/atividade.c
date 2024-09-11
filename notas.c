#include <stdio.h>

float main(){
 float n1,n2,n3,n4,media; 

    printf("digite a primeira nota do aluno:\n");
    scanf("%f", &n1);
    
     printf("digite a segunda do aluno:\n");
     scanf("%f", &n2);
     
    printf("digite a terceira nota do aluno\n");
    scanf("%f", &n3);

     printf("digite a quarta nota do aluno\n");
    scanf("%f", &n4);

 media=(n1+n2+n3+n4 )/ 4;

  if(media >=6) { 
    printf("o aluno foi aprovado:\n");
    }
    else
     {
    printf("o aluno não foi aprovado:\n");

    }

return 0;

 }


     

       



    




