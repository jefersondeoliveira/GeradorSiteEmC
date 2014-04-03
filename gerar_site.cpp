#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <windows.h>
#include <time.h>

//Jeferson de Oliveira Lopes

int main()
{
 //variaveis
 char nome[10], sobrenome[30], cidade[30], estado[10], sobre[1000], email[50], twitter[20], facebook[20], youtube[20], nomeTema[5],style[3500],html[2500],idade[20],imgRangeS[5];
 int numTema,imgRange;
 FILE *arq;

    //Apresentacao do software
    printf("                                                        \n");  
    printf("                                                        \n");  
    printf("                                                        \n");  
    printf("                                                        \n");  
    printf("                                                        \n");
    printf("                                ____________________ _ _ _ _ _ _ _ _ _ _ _ _ _\n");   
    printf("                               /                          \n");
    printf("______________________________/     Gerador de Pagina Pessoal 1.0\n");
    printf("                                                     \n");
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n"); 
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n"); 
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");      
    printf("              [ Siga os passos de 1 a 4 para gerar o seu site ]  \n");
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");                
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");        
    printf("                                                        \n");  
    printf("                                                        \n");  
    printf("                                                        \n");  
    printf("                                                        \n");  
    printf("                                                        \n");  
    printf("                                                        \n");  
    printf("                                                        \n");  
    printf("                                                        \n");  
    printf("                                ____________________ _ _ _ _ _ _ _ _ _ _ _ _ _\n");   
    printf("                               /                          \n");
    printf("______________________________/  Pressione ENTER para continuar \n");
    system("pause>null");
    
    //Escolhendo o tema
   while((numTema!= 1)&&(numTema!= 2)&&(numTema!= 3)&&(numTema!= 4)){
                                 system("cls");
        printf("                                                        \n");  
        printf("                                                        \n");  
        printf("                                                        \n");  
        printf("                                                        \n");  
        printf("                                                        \n");
        printf("                                ____________________ _ _ _ _ _ _ _ _ _ _ _ _ _\n");   
        printf("    Passo 1/4                  /                          \n");
        printf("______________________________/   ESCOLHA UM TEMA PARA O SITE\n");    
        printf("                                                        \n");
        printf("                                                        \n");    
        printf("                                                        \n");
        printf("                                                        \n"); 
        printf("                                                        \n");
        printf("                                                        \n");    
        printf("                                                        \n");
        printf("                                                        \n");
        printf("                                                        \n");      
        printf("                                 (1) - BLACK            \n");
        printf("                                                        \n");
        printf("                                                        \n");
        printf("                                 (2) - BLUE             \n");
        printf("                                                        \n");
        printf("                                                        \n");    
        printf("                                 (3) - GREEN            \n");
        printf("                                                        \n");
        printf("                                                        \n");    
        printf("                                 (4) - RED              \n");
        printf("                                                        \n");
        printf("                                                        \n");
        printf("                                                        \n");
        printf("                                                        \n");                
        printf("                                                        \n");
        printf("                                                        \n");
        printf("                                                        \n");
        printf("                                                        \n");        
        printf("                                                        \n");  
        printf("                                                        \n");  
        printf("                                ____________________ _ _ _ _ _ _ _ _ _ _ _ _ _\n");   
        printf("                               /                          \n");
        printf("______________________________/  NUMERO DO TEMA ESCOLHIDO: ");
        scanf("%i",&numTema);
        //definindo nome do tema
         if(numTema==1)
            strcpy(nomeTema,"black");
         if(numTema==2)
            strcpy(nomeTema,"blue");
         if(numTema==3)
            strcpy(nomeTema,"green");
         if(numTema==4)
            strcpy(nomeTema,"red");
   }
   
     //Dados pessoais - NOME
                             system("cls");
    printf("                                                        \n");  
    printf("                                                        \n");  
    printf("                                                        \n");  
    printf("                                                        \n");  
    printf("                                                        \n");
    printf("                                ____________________ _ _ _ _ _ _ _ _ _ _ _ _ _\n");   
    printf("    Passo 2/4                  /                        \n");
    printf("______________________________/   DADOS PESSOAIS        \n");    
    printf("                                                        \n");
    printf("    TEMA: %s                                            \n",nomeTema);    
    printf("                                                        \n");
    printf("                                                        \n"); 
    printf("                                                        \n");
    printf("                                                        \n");    
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");      
    printf("                                 NOME:                  \n");
    printf("                                                        \n");
    printf("                            SOBRENOME:                  \n");
    printf("                                                        \n");
    printf("                                IDADE:                  \n");
    printf("                                                        \n");    
    printf("                               CIDADE:                  \n");
    printf("                                                        \n");
    printf("                               ESTADO:                  \n"); 
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");                
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");        
    printf("                                                        \n");  
    printf("                                                        \n");  
    printf("                                ____________________ _ _ _ _ _ _ _ _ _ _ _ _ _\n");   
    printf("                               /                          \n");
    printf("______________________________/  PRIMEIRO NOME: ");
    fflush(stdin);//limpesa de variavel
    scanf("%[^\n]",&nome);  
    
    //Dados pessoais - SOBRENOME
                             system("cls");
    printf("                                                        \n");  
    printf("                                                        \n");  
    printf("                                                        \n");  
    printf("                                                        \n");  
    printf("                                                        \n");
    printf("                                ____________________ _ _ _ _ _ _ _ _ _ _ _ _ _\n");   
    printf("    Passo 2/4                  /                        \n");
    printf("______________________________/   DADOS PESSOAIS        \n");    
    printf("                                                        \n");
    printf("    TEMA: %s                                            \n",nomeTema);   
    printf("                                                        \n");
    printf("                                                        \n"); 
    printf("                                                        \n");
    printf("                                                        \n");    
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");      
    printf("                                 NOME: %s\n",nome);
    printf("                                                        \n");
    printf("                            SOBRENOME:                  \n");
    printf("                                                        \n");
    printf("                                IDADE:                  \n");
    printf("                                                        \n");    
    printf("                               CIDADE:                  \n");
    printf("                                                        \n");
    printf("                               ESTADO:                  \n"); 
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");                
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");        
    printf("                                                        \n");  
    printf("                                                        \n");  
    printf("                                ____________________ _ _ _ _ _ _ _ _ _ _ _ _ _\n");   
    printf("                               /                        \n");
    printf("______________________________/  SOBRENOME: ");
    fflush(stdin);//limpesa de variavel
    scanf("%[^\n]",&sobrenome); 
    
    //Dados pessoais - IDADE
                             system("cls");
    printf("                                                        \n");  
    printf("                                                        \n");  
    printf("                                                        \n");  
    printf("                                                        \n");  
    printf("                                                        \n");
    printf("                                ____________________ _ _ _ _ _ _ _ _ _ _ _ _ _\n");   
    printf("    Passo 2/4                  /                        \n");
    printf("______________________________/   DADOS PESSOAIS        \n");    
    printf("                                                        \n");
    printf("    TEMA: %s                                            \n",nomeTema);   
    printf("                                                        \n");
    printf("                                                        \n"); 
    printf("                                                        \n");
    printf("                                                        \n");    
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");      
    printf("                                 NOME: %s\n",nome);
    printf("                                                        \n");
    printf("                            SOBRENOME: %s\n",sobrenome);
    printf("                                                        \n");
    printf("                                IDADE:                  \n");
    printf("                                                        \n");    
    printf("                               CIDADE:                  \n");
    printf("                                                        \n");
    printf("                               ESTADO:                  \n"); 
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");                
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");        
    printf("                                                        \n");  
    printf("                                                        \n");  
    printf("                                ____________________ _ _ _ _ _ _ _ _ _ _ _ _ _\n");   
    printf("                               /                        \n");
    printf("______________________________/  IDADE: ");
    fflush(stdin);//limpesa de variavel
    scanf("%s",&idade);   

    //Dados pessoais - CIDADE
                             system("cls");
    printf("                                                        \n");  
    printf("                                                        \n");  
    printf("                                                        \n");  
    printf("                                                        \n");  
    printf("                                                        \n");
    printf("                                ____________________ _ _ _ _ _ _ _ _ _ _ _ _ _\n");   
    printf("    Passo 2/4                  /                        \n");
    printf("______________________________/   DADOS PESSOAIS        \n");    
    printf("                                                        \n");
    printf("    TEMA: %s                                            \n",nomeTema);   
    printf("                                                        \n");
    printf("                                                        \n"); 
    printf("                                                        \n");
    printf("                                                        \n");    
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");      
    printf("                                 NOME: %s\n",nome);
    printf("                                                        \n");
    printf("                            SOBRENOME: %s\n",sobrenome);
    printf("                                                        \n");
    printf("                                IDADE: %s\n",idade);
    printf("                                                        \n");    
    printf("                               CIDADE:                  \n");
    printf("                                                        \n");
    printf("                               ESTADO:                  \n"); 
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");                
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");        
    printf("                                                        \n");  
    printf("                                                        \n");  
    printf("                                ____________________ _ _ _ _ _ _ _ _ _ _ _ _ _\n");   
    printf("                               /                          \n");
    printf("______________________________/  CIDADE: ");
    fflush(stdin);//limpesa de variavel
    scanf("%[^\n]",&cidade); 
    
    //Dados pessoais - ESTADO
                             system("cls");
    printf("                                                        \n");  
    printf("                                                        \n");  
    printf("                                                        \n");  
    printf("                                                        \n");  
    printf("                                                        \n");
    printf("                                ____________________ _ _ _ _ _ _ _ _ _ _ _ _ _\n");   
    printf("    Passo 2/4                  /                        \n");
    printf("______________________________/   DADOS PESSOAIS        \n");    
    printf("                                                        \n");
    printf("    TEMA: %s                                            \n",nomeTema);   
    printf("                                                        \n");
    printf("                                                        \n"); 
    printf("                                                        \n");
    printf("                                                        \n");    
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");      
    printf("                                 NOME: %s\n",nome);
    printf("                                                        \n");
    printf("                            SOBRENOME: %s\n",sobrenome);
    printf("                                                        \n");
    printf("                                IDADE: %s\n",idade);
    printf("                                                        \n");    
    printf("                               CIDADE: %s\n",cidade);
    printf("                                                        \n");
    printf("                               ESTADO:                  \n"); 
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");                
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");        
    printf("                                                        \n");  
    printf("                                                        \n");  
    printf("                                ____________________ _ _ _ _ _ _ _ _ _ _ _ _ _\n");   
    printf("                               /                          \n");
    printf("______________________________/  ESTADO: ");
    fflush(stdin);//limpesa de variavel
    scanf("%[^\n]",&estado);  
    
    //Dados pessoais - CONFIRMANDO
                             system("cls");
    printf("                                                        \n");  
    printf("                                                        \n");  
    printf("                                                        \n");  
    printf("                                                        \n");  
    printf("                                                        \n");
    printf("                                ____________________ _ _ _ _ _ _ _ _ _ _ _ _ _\n");   
    printf("    Passo 2/4                  /                        \n");
    printf("______________________________/   DADOS PESSOAIS        \n");    
    printf("                                                        \n");
    printf("    TEMA: %s                                            \n",nomeTema);   
    printf("                                                        \n");
    printf("                                                        \n"); 
    printf("                                                        \n");
    printf("                                                        \n");    
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");      
    printf("                                 NOME: %s\n",nome);
    printf("                                                        \n");
    printf("                            SOBRENOME: %s\n",sobrenome);
    printf("                                                        \n");
    printf("                                IDADE: %s\n",idade);
    printf("                                                        \n");    
    printf("                               CIDADE: %s\n",cidade);
    printf("                                                        \n");
    printf("                               ESTADO: %s\n",estado); 
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");                
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");        
    printf("                                                        \n");  
    printf("                                                        \n");  
    printf("                                ____________________ _ _ _ _ _ _ _ _ _ _ _ _ _\n");   
    printf("                               /                          \n");
    printf("______________________________/  Pressione ENTER para ir para o proximo passo ");
    system("pause>null");
   
    //Descrição
                             system("cls");
    printf("                                                        \n");  
    printf("                                                        \n");  
    printf("                                                        \n");  
    printf("                                                        \n");  
    printf("                                                        \n");
    printf("                                ____________________ _ _ _ _ _ _ _ _ _ _ _ _ _\n");   
    printf("    Passo 3/4                  /                        \n");
    printf("______________________________/   SOBRE VOCE            \n");    
    printf("                                                        \n");
    printf("    TEMA: %s                                            \n",nomeTema);   
    printf("                                                        \n");
    printf("                                                        \n"); 
    printf("                                                        \n");
    printf("                                                        \n");    
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");      
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                           [ Fale um pouco sobre voce ]  \n");  
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");                
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");        
    printf("                                                        \n");  
    printf("                                                        \n");  
    printf("                                ____________________ _ _ _ _ _ _ _ _ _ _ _ _ _\n");   
    printf("                               /                          \n");
    printf("______________________________/   ");
    fflush(stdin);//limpesa de variavel
    scanf("%[^\n]",&sobre); 
    
    //Dados sociais - EMAIL
                             system("cls");
    printf("                                                        \n");  
    printf("                                                        \n");  
    printf("                                                        \n");  
    printf("                                                        \n");  
    printf("                                                        \n");
    printf("                                ____________________ _ _ _ _ _ _ _ _ _ _ _ _ _\n");   
    printf("    Passo 4/4                  /                        \n");
    printf("______________________________/   DADOS SOCIAIS         \n");    
    printf("                                                        \n");
    printf("    TEMA: %s                                            \n",nomeTema);    
    printf("                                                        \n");
    printf("                                                        \n"); 
    printf("                                                        \n");
    printf("                                                        \n");    
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");      
    printf("                                EMAIL:                  \n");
    printf("                                                        \n");
    printf("                              TWITTER:                  \n");
    printf("                                                        \n");
    printf("                             FACEBOOK:                  \n");
    printf("                                                        \n");    
    printf("                              YOUTUBE:                  \n");
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");                
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");        
    printf("                                                        \n");  
    printf("                                                        \n");  
    printf("                                ____________________ _ _ _ _ _ _ _ _ _ _ _ _ _\n");   
    printf("                               /                          \n");
    printf("______________________________/  SEU EMAIL: ");
    fflush(stdin);//limpesa de variavel
    scanf("%[^\n]",&email); 
    
    //Dados sociais - TWITTER
                             system("cls");
    printf("                                                        \n");  
    printf("                                                        \n");  
    printf("                                                        \n");  
    printf("                                                        \n");  
    printf("                                                        \n");
    printf("                                ____________________ _ _ _ _ _ _ _ _ _ _ _ _ _\n");   
    printf("    Passo 4/4                  /                        \n");
    printf("______________________________/   DADOS SOCIAIS         \n");    
    printf("                                                        \n");
    printf("    TEMA: %s                                            \n",nomeTema);    
    printf("                                                        \n");
    printf("                                                        \n"); 
    printf("                                                        \n");
    printf("                                                        \n");    
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");      
    printf("                                EMAIL: %s\n",email);
    printf("                                                        \n");
    printf("                              TWITTER:                  \n");
    printf("                                                        \n");
    printf("                             FACEBOOK:                  \n");
    printf("                                                        \n");    
    printf("                              YOUTUBE:                  \n");
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                         Se voce nao tem TWITTER digite [x] \n");
    printf("                                                        \n");                
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");        
    printf("                                                        \n");  
    printf("                                                        \n");  
    printf("                                ____________________ _ _ _ _ _ _ _ _ _ _ _ _ _\n");   
    printf("                               /                          \n");
    printf("______________________________/  www.twitter.com/");
    fflush(stdin);//limpesa de variavel
    scanf("%[^\n]",&twitter); 
    
    //Dados sociais - FACEBOOK
                             system("cls");
    printf("                                                        \n");  
    printf("                                                        \n");  
    printf("                                                        \n");  
    printf("                                                        \n");  
    printf("                                                        \n");
    printf("                                ____________________ _ _ _ _ _ _ _ _ _ _ _ _ _\n");   
    printf("    Passo 4/4                  /                        \n");
    printf("______________________________/   DADOS SOCIAIS         \n");    
    printf("                                                        \n");
    printf("    TEMA: %s                                            \n",nomeTema);    
    printf("                                                        \n");
    printf("                                                        \n"); 
    printf("                                                        \n");
    printf("                                                        \n");    
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");      
    printf("                                EMAIL: %s\n",email);
    printf("                                                        \n");
    printf("                              TWITTER: %s\n",twitter);
    printf("                                                        \n");
    printf("                             FACEBOOK:                  \n");
    printf("                                                        \n");    
    printf("                              YOUTUBE:                  \n");
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                         Se voce nao tem FACEBOOK digite [x] \n");
    printf("                                                        \n");                
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");        
    printf("                                                        \n");  
    printf("                                                        \n");  
    printf("                                ____________________ _ _ _ _ _ _ _ _ _ _ _ _ _\n");   
    printf("                               /                          \n");
    printf("______________________________/  www.facebook.com/");
    fflush(stdin);//limpesa de variavel
    scanf("%[^\n]",&facebook);
    
    //Dados sociais - YOUTUBE
                             system("cls");
    printf("                                                        \n");  
    printf("                                                        \n");  
    printf("                                                        \n");  
    printf("                                                        \n");  
    printf("                                                        \n");
    printf("                                ____________________ _ _ _ _ _ _ _ _ _ _ _ _ _\n");   
    printf("    Passo 4/4                  /                        \n");
    printf("______________________________/   DADOS SOCIAIS         \n");    
    printf("                                                        \n");
    printf("    TEMA: %s                                            \n",nomeTema);    
    printf("                                                        \n");
    printf("                                                        \n"); 
    printf("                                                        \n");
    printf("                                                        \n");    
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");      
    printf("                                EMAIL: %s\n",email);
    printf("                                                        \n");
    printf("                              TWITTER: %s\n",twitter);
    printf("                                                        \n");
    printf("                             FACEBOOK: %s\n",facebook);
    printf("                                                        \n");    
    printf("                              YOUTUBE:                  \n");
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                   Se voce nao tem canal no YOUTUBE digite [x] \n");
    printf("                                                        \n");                
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");        
    printf("                                                        \n");  
    printf("                                                        \n");  
    printf("                                ____________________ _ _ _ _ _ _ _ _ _ _ _ _ _\n");   
    printf("                               /                          \n");
    printf("______________________________/  www.youtube.com.br/");
    fflush(stdin);//limpesa de variavel
    scanf("%[^\n]",&youtube);
    
    //Dados sociais - FINALIZANDO
                             system("cls");
    printf("                                                        \n");  
    printf("                                                        \n");  
    printf("                                                        \n");  
    printf("                                                        \n");  
    printf("                                                        \n");
    printf("                                ____________________ _ _ _ _ _ _ _ _ _ _ _ _ _\n");   
    printf("    Passo 4/4                  /                        \n");
    printf("______________________________/   DADOS SOCIAIS         \n");    
    printf("                                                        \n");
    printf("    TEMA: %s                                            \n",nomeTema);    
    printf("                                                        \n");
    printf("                                                        \n"); 
    printf("                                                        \n");
    printf("                                                        \n");    
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");      
    printf("                                EMAIL: %s\n",email);
    printf("                                                        \n");
    printf("                              TWITTER: %s\n",twitter);
    printf("                                                        \n");
    printf("                             FACEBOOK: %s\n",facebook);
    printf("                                                        \n");    
    printf("                              YOUTUBE: %s\n",youtube);
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");        
    printf("                                                        \n");                
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");
    printf("                                                        \n");        
    printf("                                                        \n");  
    printf("                                                        \n");  
    printf("                                ____________________ _ _ _ _ _ _ _ _ _ _ _ _ _\n");   
    printf("                               /                          \n");
    printf("______________________________/  Pressione ENTER para gerar o seu site ");
    system("pause>null");
    
    
    //LIMPANDO E CRIANDO A PASTA SITEGERADO
    system("RD sitegerado/S/Q"); // apaga todo o diretorio 
    system("MD sitegerado"); // cria a pasta
    
    //CRIANDO ARQUIVOS DE CSS
    arq = fopen("sitegerado/style.css", "wt");
    strcpy(style,"*{padding:0;margin:0}");
    strcat(style,"html    { overflow-x:hidden;overflow-y:scroll; }");
    strcat(style,".menu{position:absolute;right:50px;top:0}");
    strcat(style,".menu ul li{float:left;list-style:none;}");
    if(numTema == 1){ //TEMA BLACK
        strcat(style,".menu ul li a{float: left;text-transform: uppercase;text-decoration: none;font: 16px Arial, Helvetica, sans-serif;color: #FFF;");
        strcat(style,"				font-weight: bold;padding:10px;text-shadow: 0 0 5px #000;border-radius: 0px 0px 5px 5px;-webkit-transition: all 0.4s ease-in-out;");
        strcat(style,"				-moz-transition: all 0.4s ease-in-out;-ms-transition: all 0.4s ease-in-out;-o-transition: all 0.4s ease-in-out;transition: all 0.4s ease-in-out;}");
        strcat(style,".menu ul li a:hover{text-shadow: 0 0 5px #f1f1f1;color: #000}");
        strcat(style,".menu ul li .ativo{text-shadow: 0 0 5px #f1f1f1;color: #000;background:#FFF}");
        strcat(style,".conteudo .home_texto{width:340px;background:url(img/bg_transp.png);font: 16px Arial, Helvetica, sans-serif;padding:20px;float:left;");
        strcat(style,"					margin-top:5px;border-radius:5px;color:#FFF;font-weight:bold;text-shadow: 0 0 5px #000;box-shadow: 2px 2px 5px 0px #000;}");
        strcat(style,".conteudo .sobre_texto{width:500px;background:url(img/bg_transp.png);font: 16px Arial, Helvetica, sans-serif;padding:20px;float:left;");
        strcat(style,"					margin:5px 0 0 25px;border-radius:5px;color:#FFF;font-weight:bold;text-shadow: 0 0 5px #000;box-shadow: 2px 2px 5px 0px #000;}");
    }
    if(numTema == 2){ //TEMA BLUE
        strcat(style,".menu ul li a{float: left;text-transform: uppercase;text-decoration: none;font: 16px Arial, Helvetica, sans-serif;color: #FFF;");
        strcat(style,"				font-weight: bold;padding:10px;text-shadow: 0 0 5px #1B426B;border-radius: 0px 0px 5px 5px;-webkit-transition: all 0.4s ease-in-out;");
        strcat(style,"				-moz-transition: all 0.4s ease-in-out;-ms-transition: all 0.4s ease-in-out;-o-transition: all 0.4s ease-in-out;transition: all 0.4s ease-in-out;}");
        strcat(style,".menu ul li a:hover{text-shadow: 0 0 5px #f1f1f1;color: #1B426B}");
        strcat(style,".menu ul li .ativo{text-shadow: 0 0 5px #f1f1f1;color: #1B426B;background:#FFF}");
        strcat(style,".conteudo .home_texto{width:340px;background:url(img/bg_transp.png);font: 16px Arial, Helvetica, sans-serif;padding:20px;float:left;");
        strcat(style,"					margin-top:5px;border-radius:5px;color:#FFF;font-weight:bold;text-shadow: 0 0 5px #1B426B;box-shadow: 2px 2px 5px 0px #1B426B;}");
        strcat(style,".conteudo .sobre_texto{width:500px;background:url(img/bg_transp.png);font: 16px Arial, Helvetica, sans-serif;padding:20px;float:left;");
        strcat(style,"					margin:5px 0 0 25px;border-radius:5px;color:#FFF;font-weight:bold;text-shadow: 0 0 5px #1B426B;box-shadow: 2px 2px 5px 0px #1B426B;}");
    }
    if(numTema == 3){ //TEMA GREEN
        strcat(style,".menu ul li a{float: left;text-transform: uppercase;text-decoration: none;font: 16px Arial, Helvetica, sans-serif;color: #FFF;");
        strcat(style,"				font-weight: bold;padding:10px;text-shadow: 0 0 5px #1C5229;border-radius: 0px 0px 5px 5px;-webkit-transition: all 0.4s ease-in-out;");
        strcat(style,"				-moz-transition: all 0.4s ease-in-out;-ms-transition: all 0.4s ease-in-out;-o-transition: all 0.4s ease-in-out;transition: all 0.4s ease-in-out;}");
        strcat(style,".menu ul li a:hover{text-shadow: 0 0 5px #f1f1f1;color: #1C5229}");
        strcat(style,".menu ul li .ativo{text-shadow: 0 0 5px #f1f1f1;color: #1C5229;background:#FFF}");
        strcat(style,".conteudo .home_texto{width:340px;background:url(img/bg_transp.png);font: 16px Arial, Helvetica, sans-serif;padding:20px;float:left;");
        strcat(style,"					margin-top:5px;border-radius:5px;color:#FFF;font-weight:bold;text-shadow: 0 0 5px #1C5229;box-shadow: 2px 2px 5px 0px #1C5229;}");
        strcat(style,".conteudo .sobre_texto{width:500px;background:url(img/bg_transp.png);font: 16px Arial, Helvetica, sans-serif;padding:20px;float:left;");
        strcat(style,"					margin:5px 0 0 25px;border-radius:5px;color:#FFF;font-weight:bold;text-shadow: 0 0 5px #1C5229;box-shadow: 2px 2px 5px 0px #1C5229;}");
    }
    if(numTema == 4){ //TEMA RED
        strcat(style,".menu ul li a{float: left;text-transform: uppercase;text-decoration: none;font: 16px Arial, Helvetica, sans-serif;color: #FFF;");
        strcat(style,"				font-weight: bold;padding:10px;text-shadow: 0 0 5px #622320;border-radius: 0px 0px 5px 5px;-webkit-transition: all 0.4s ease-in-out;");
        strcat(style,"				-moz-transition: all 0.4s ease-in-out;-ms-transition: all 0.4s ease-in-out;-o-transition: all 0.4s ease-in-out;transition: all 0.4s ease-in-out;}");
        strcat(style,".menu ul li a:hover{text-shadow: 0 0 5px #f1f1f1;color: #622320}");
        strcat(style,".menu ul li .ativo{text-shadow: 0 0 5px #f1f1f1;color: #622320;background:#FFF}");
        strcat(style,".conteudo .home_texto{width:340px;background:url(img/bg_transp.png);font: 16px Arial, Helvetica, sans-serif;padding:20px;float:left;");
        strcat(style,"					margin-top:5px;border-radius:5px;color:#FFF;font-weight:bold;text-shadow: 0 0 5px #622320;box-shadow: 2px 2px 5px 0px #622320;}");
        strcat(style,".conteudo .sobre_texto{width:500px;background:url(img/bg_transp.png);font: 16px Arial, Helvetica, sans-serif;padding:20px;float:left;");
        strcat(style,"					margin:5px 0 0 25px;border-radius:5px;color:#FFF;font-weight:bold;text-shadow: 0 0 5px #622320;box-shadow: 2px 2px 5px 0px #622320;}");
    }
    strcat(style,".conteudo{width:600px;margin:130px auto 0;}");
    strcat(style,".conteudo .perfil{float:left;margin:0 25px 0}");
    strcat(style,".conteudo .rede_twitter{width:128px;height:114px;float:left;text-indent:-1999px;background:url(img/contato_twitter.png) no-repeat;margin:10px;");
    strcat(style,"					-webkit-transition: all 0.4s ease-in-out;-moz-transition: all 0.4s ease-in-out;-ms-transition: all 0.4s ease-in-out;-o-transition: all 0.4s ease-in-out;transition: all 0.4s ease-in-out;}");
    strcat(style,".conteudo .rede_twitter:hover{-moz-transform: rotate(-5deg);-webkit-transform: rotate(-5deg);-ms-transform: rotate(-5deg);-o-transform: rotate(-5deg);transform: rotate(-5deg);}	");
    strcat(style,".conteudo .rede_facebook{width:128px;height:114px;float:left;text-indent:-1999px;background:url(img/contato_facebook.png) no-repeat;margin:10px;");
    strcat(style,"					-webkit-transition: all 0.4s ease-in-out;-moz-transition: all 0.4s ease-in-out;-ms-transition: all 0.4s ease-in-out;-o-transition: all 0.4s ease-in-out;transition: all 0.4s ease-in-out;}");
    strcat(style,".conteudo .rede_facebook:hover{-moz-transform: rotate(-5deg);-webkit-transform: rotate(-5deg);-ms-transform: rotate(-5deg);-o-transform: rotate(-5deg);transform: rotate(-5deg);}");
    strcat(style,".conteudo .rede_youtube{width:128px;height:114px;float:left;text-indent:-1999px;background:url(img/contato_youtube.png) no-repeat;margin:10px;");
    strcat(style,"					-webkit-transition: all 0.4s ease-in-out;-moz-transition: all 0.4s ease-in-out;-ms-transition: all 0.4s ease-in-out;-o-transition: all 0.4s ease-in-out;transition: all 0.4s ease-in-out;}");
    strcat(style,".conteudo .rede_youtube:hover{-moz-transform: rotate(-5deg);-webkit-transform: rotate(-5deg);-ms-transform: rotate(-5deg);-o-transform: rotate(-5deg);transform: rotate(-5deg);}");
    strcat(style,".conteudo .rede_contato{width:128px;height:114px;float:left;text-indent:-1999px;background:url(img/contato_email.png) no-repeat;margin:10px;");
    strcat(style,"					-webkit-transition: all 0.4s ease-in-out;-moz-transition: all 0.4s ease-in-out;-ms-transition: all 0.4s ease-in-out;-o-transition: all 0.4s ease-in-out;transition: all 0.4s ease-in-out;}");
    strcat(style,".conteudo .rede_contato:hover{-moz-transform: rotate(-5deg);-webkit-transform: rotate(-5deg);-ms-transform: rotate(-5deg);-o-transform: rotate(-5deg);transform: rotate(-5deg);}");
    strcat(style,".clear{clear:both}");
    fputs(style, arq);
    fclose(arq);
    
    //ARRAY IMGs 
    srand(time(NULL));
    imgRange = 22;
    itoa(rand() % imgRange, imgRangeS, 10);
    //CRIANDO PAGINA INDEX.HTML
    arq = fopen("sitegerado/index.html", "wt");
    strcpy(html,"<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 Transitional//EN\" \"http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd\">");
    strcat(html,"<html xmlns=\"http://www.w3.org/1999/xhtml\">");
    strcat(html,"<head>");
    strcat(html,"<meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\" />");
    strcat(html,"<title>Inicio - ");
    strcat(html,nome);
    strcat(html," ");
    strcat(html,sobrenome);
    strcat(html,"</title>");
    strcat(html,"<script type=\"text/javascript\" src=\"js/jquery.js\" charset=\"utf-8\"></script>");
    strcat(html,"<script type=\"text/javascript\" src=\"js/jquery.maximage.js\" charset=\"utf-8\"></script>");
    strcat(html,"<script type=\"text/javascript\" src=\"js/jquery.maximage.func.js\" charset=\"utf-8\"></script>");
    strcat(html,"<link type=\"text/css\" rel=\"stylesheet\" href=\"style.css\"/>");
    strcat(html,"</head>");
    strcat(html,"<body>");
    if(numTema == 1){ //TEMA BLACK
        strcat(html,"<img src=\"img/black.jpg\" class=\"maximage\" />");
    }
    if(numTema == 2){ //TEMA BLUE
        strcat(html,"<img src=\"img/blue.jpg\" class=\"maximage\" />");
    }
    if(numTema == 3){ //TEMA GREEN
        strcat(html,"<img src=\"img/green.jpg\" class=\"maximage\" />");
    }
    if(numTema == 4){ //TEMA RED
        strcat(html,"<img src=\"img/red.jpg\" class=\"maximage\" />");
    }
    strcat(html,"<div class=\"menu\">");
    strcat(html,"	<ul>");
    strcat(html,"		<li><a href=\"index.html\" title=\"Inicio\" class=\"ativo\">Inicio</a></li>");
    strcat(html,"		<li><a href=\"perfil.html\" title=\"Perfil\">Perfil</a></li>");
    strcat(html,"		<li><a href=\"sobre.html\" title=\"Sobre\">Sobre</a></li>");
    strcat(html,"		<li><a href=\"contato.html\" title=\"Contato\">Contato</a></li>");
    strcat(html,"	</ul>");
    strcat(html,"</div>");
    strcat(html,"<div class=\"conteudo\">");
    strcat(html,"	<img src=\"img/");
    strcat(html,imgRangeS);
    strcat(html,".png\" class=\"perfil\" />");
    strcat(html,"	<div class=\"home_texto\">");
    strcat(html,"		Ola, bem vindo a minha pagina pessoal.<br/>");
    strcat(html,"		Meu nome e ");
    strcat(html,nome);
    strcat(html," e eu moro em ");
    strcat(html,cidade);
    strcat(html,".");
    strcat(html,"		Visite as outras paginas e ");
    strcat(html,"		saiba um pouco mais sobre mim.");
    strcat(html,"	</div>");
    strcat(html,"	<div class=\"clear\"></div>");
    strcat(html,"</div>");
    strcat(html,"</body>");
    strcat(html,"</html>");
    fputs(html, arq);
    fclose(arq);
    
    //CRIANDO PAGINA PERFIL.HTML
    arq = fopen("sitegerado/perfil.html", "wt");
    strcpy(html,"<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 Transitional//EN\" \"http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd\">");
    strcat(html,"<html xmlns=\"http://www.w3.org/1999/xhtml\">");
    strcat(html,"<head>");
    strcat(html,"<meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\" />");
    strcat(html,"<title>Perfil - ");
    strcat(html,nome);
    strcat(html," ");
    strcat(html,sobrenome);
    strcat(html,"</title>");
    strcat(html,"<script type=\"text/javascript\" src=\"js/jquery.js\" charset=\"utf-8\"></script>");
    strcat(html,"<script type=\"text/javascript\" src=\"js/jquery.maximage.js\" charset=\"utf-8\"></script>");
    strcat(html,"<script type=\"text/javascript\" src=\"js/jquery.maximage.func.js\" charset=\"utf-8\"></script>");
    strcat(html,"<link type=\"text/css\" rel=\"stylesheet\" href=\"style.css\"/>");
    strcat(html,"</head>");
    strcat(html,"<body>");
    if(numTema == 1){ //TEMA BLACK
        strcat(html,"<img src=\"img/black.jpg\" class=\"maximage\" />");
    }
    if(numTema == 2){ //TEMA BLUE
        strcat(html,"<img src=\"img/blue.jpg\" class=\"maximage\" />");
    }
    if(numTema == 3){ //TEMA GREEN
        strcat(html,"<img src=\"img/green.jpg\" class=\"maximage\" />");
    }
    if(numTema == 4){ //TEMA RED
        strcat(html,"<img src=\"img/red.jpg\" class=\"maximage\" />");
    }
    strcat(html,"<div class=\"menu\">");
    strcat(html,"	<ul>");
    strcat(html,"		<li><a href=\"index.html\" title=\"Inicio\">Inicio</a></li>");
    strcat(html,"		<li><a href=\"perfil.html\" title=\"Perfil\" class=\"ativo\">Perfil</a></li>");
    strcat(html,"		<li><a href=\"sobre.html\" title=\"Sobre\">Sobre</a></li>");
    strcat(html,"		<li><a href=\"contato.html\" title=\"Contato\">Contato</a></li>");
    strcat(html,"	</ul>");
    strcat(html,"</div>");
    strcat(html,"<div class=\"conteudo\">");
    strcat(html,"	<div class=\"sobre_texto\">");
    strcat(html,"		Nome: ");
    strcat(html,nome);
    strcat(html," ");
    strcat(html,sobrenome);
    strcat(html,".<br/>");
    strcat(html,"		Idade: ");
    strcat(html,idade);
    strcat(html," anos.<br/>");
    strcat(html,"Cidade: ");
    strcat(html,cidade);
    strcat(html,".<br/>");
    strcat(html,"Estado: ");
    strcat(html,estado);
    strcat(html,".<br/>");
    strcat(html,"	</div>");
    strcat(html,"	<div class=\"clear\"></div>");
    strcat(html,"</div>");
    strcat(html,"</body>");
    strcat(html,"</html>");
    fputs(html, arq);
    fclose(arq);
    
    //CRIANDO PAGINA SOBRE.HTML
    arq = fopen("sitegerado/sobre.html", "wt");
    strcpy(html,"<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 Transitional//EN\" \"http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd\">");
    strcat(html,"<html xmlns=\"http://www.w3.org/1999/xhtml\">");
    strcat(html,"<head>");
    strcat(html,"<meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\" />");
    strcat(html,"<title>Sobre - ");
    strcat(html,nome);
    strcat(html," ");
    strcat(html,sobrenome);
    strcat(html,"</title>");
    strcat(html,"<script type=\"text/javascript\" src=\"js/jquery.js\" charset=\"utf-8\"></script>");
    strcat(html,"<script type=\"text/javascript\" src=\"js/jquery.maximage.js\" charset=\"utf-8\"></script>");
    strcat(html,"<script type=\"text/javascript\" src=\"js/jquery.maximage.func.js\" charset=\"utf-8\"></script>");
    strcat(html,"<link type=\"text/css\" rel=\"stylesheet\" href=\"style.css\"/>");
    strcat(html,"</head>");
    strcat(html,"<body>");
    if(numTema == 1){ //TEMA BLACK
        strcat(html,"<img src=\"img/black.jpg\" class=\"maximage\" />");
    }
    if(numTema == 2){ //TEMA BLUE
        strcat(html,"<img src=\"img/blue.jpg\" class=\"maximage\" />");
    }
    if(numTema == 3){ //TEMA GREEN
        strcat(html,"<img src=\"img/green.jpg\" class=\"maximage\" />");
    }
    if(numTema == 4){ //TEMA RED
        strcat(html,"<img src=\"img/red.jpg\" class=\"maximage\" />");
    }
    strcat(html,"<div class=\"menu\">");
    strcat(html,"	<ul>");
    strcat(html,"		<li><a href=\"index.html\" title=\"Inicio\">Inicio</a></li>");
    strcat(html,"		<li><a href=\"perfil.html\" title=\"Perfil\">Perfil</a></li>");
    strcat(html,"		<li><a href=\"sobre.html\" title=\"Sobre\" class=\"ativo\">Sobre</a></li>");
    strcat(html,"		<li><a href=\"contato.html\" title=\"Contato\">Contato</a></li>");
    strcat(html,"	</ul>");
    strcat(html,"</div>");
    strcat(html,"<div class=\"conteudo\">");
    strcat(html,"	<div class=\"sobre_texto\">");
    strcat(html,"Sobre: ");
    strcat(html,sobre);
    strcat(html,".");
    strcat(html,"	</div>");
    strcat(html,"	<div class=\"clear\"></div>");
    strcat(html,"</div>");
    strcat(html,"</body>");
    strcat(html,"</html>");
    fputs(html, arq);
    fclose(arq);
    
    //CRIANDO PAGINA CONTATO.HTML
    arq = fopen("sitegerado/contato.html", "wt");
    strcpy(html,"<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 Transitional//EN\" \"http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd\">");
    strcat(html,"<html xmlns=\"http://www.w3.org/1999/xhtml\">");
    strcat(html,"<head>");
    strcat(html,"<meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\" />");
    strcat(html,"<title>Contato - ");
    strcat(html,nome);
    strcat(html," ");
    strcat(html,sobrenome);
    strcat(html,"</title>");
    strcat(html,"<script type=\"text/javascript\" src=\"js/jquery.js\" charset=\"utf-8\"></script>");
    strcat(html,"<script type=\"text/javascript\" src=\"js/jquery.maximage.js\" charset=\"utf-8\"></script>");
    strcat(html,"<script type=\"text/javascript\" src=\"js/jquery.maximage.func.js\" charset=\"utf-8\"></script>");
    strcat(html,"<link type=\"text/css\" rel=\"stylesheet\" href=\"style.css\"/>");
    strcat(html,"</head>");
    strcat(html,"<body>");
    if(numTema == 1){ //TEMA BLACK
        strcat(html,"<img src=\"img/black.jpg\" class=\"maximage\" />");
    }
    if(numTema == 2){ //TEMA BLUE
        strcat(html,"<img src=\"img/blue.jpg\" class=\"maximage\" />");
    }
    if(numTema == 3){ //TEMA GREEN
        strcat(html,"<img src=\"img/green.jpg\" class=\"maximage\" />");
    }
    if(numTema == 4){ //TEMA RED
        strcat(html,"<img src=\"img/red.jpg\" class=\"maximage\" />");
    }
    strcat(html,"<div class=\"menu\">");
    strcat(html,"	<ul>");
    strcat(html,"		<li><a href=\"index.html\" title=\"Inicio\">Inicio</a></li>");
    strcat(html,"		<li><a href=\"perfil.html\" title=\"Perfil\">Perfil</a></li>");
    strcat(html,"		<li><a href=\"sobre.html\" title=\"Sobre\">Sobre</a></li>");
    strcat(html,"		<li><a href=\"contato.html\" title=\"Contato\" class=\"ativo\">Contato</a></li>");
    strcat(html,"	</ul>");
    strcat(html,"</div>");
    strcat(html,"<div class=\"conteudo\">");
    if((strcmp (twitter,"x") != 0)&&(strcmp (twitter,"X") != 0)){
        strcat(html,"	<a href=\"https://twitter.com/");
        strcat(html,twitter);
        strcat(html,"\" title=\"Perfil no Twitter\" class=\"rede_twitter\" target=\"_BLANK\">Twitter</a>");
    }
    if((strcmp (facebook,"x") != 0)&&(strcmp (facebook,"X") != 0)){    
        strcat(html,"	<a href=\"https://www.facebook.com/");
        strcat(html,facebook);
        strcat(html,"\" title=\"Perfil no Facebook\" class=\"rede_facebook\" target=\"_BLANK\">Facebook</a>");
    }
    if((strcmp (youtube,"x") != 0)&&(strcmp (youtube,"X") != 0)){  
        strcat(html,"	<a href=\"http://www.youtube.com/");
        strcat(html,youtube);
        strcat(html,"\" title=\"Canal no Youtube\" class=\"rede_youtube\" target=\"_BLANK\">Youtube</a>");
    }    
        strcat(html,"	<a href=\"mailto:");
        strcat(html,email);
        strcat(html,"\" title=\"Enviar Email para ");
        strcat(html,email);
        strcat(html,"\" class=\"rede_contato\">Contato</a>");
    strcat(html,"	<div class=\"clear\"></div>");
    strcat(html,"</div>");
    strcat(html,"</body>");
    strcat(html,"</html>");
    fputs(html, arq);
    fclose(arq);
    
    system ("cls");
    system("XCOPY system/E/S sitegerado"); //copiando a pasta com arquivos padrao
    
    //LOAD FINALIZANDO SITE
   system ("cls");
   printf ("\n\nFinalizando...");
   Sleep (2000);
   printf ("\r \t\t\t SITE CRIADO COM SUCESSO\n\n\n");      
   printf ("\t\t  Pressione ENTER para sair do sistema\n\n\n\n");

 system("pause>null");   
 return 0;   
}    
