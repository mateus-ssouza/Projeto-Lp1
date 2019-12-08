#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#define CCONGRE 2
typedef struct{
    char nome[20];
    char curso[40];
    char email[40];
    int matricula,rg;
    int quantP , quantC , quantO;
}CADASTRO;

typedef struct elemento{
    CADASTRO dados;
    struct elemento *ant;
    struct elemento *prox;
}ELEM;

typedef struct{
    struct elemento *inicio;
}LISTAD;

typedef struct{
    int hora, minuto;
}HORA;

typedef struct{
    char palestrante[20];
    char local[30];
    char tema[50];
    int cargaH;
    HORA horario;
    char membro1[20];
    char membro2[20];
    char membro3[20];
    char membro4[20];
    char membro5[20];
    int quantMembros;
}EVENTO;

typedef struct arquivo{
    EVENTO dados;
    struct arquivo *ant;
    struct arquivo *prox;
}ARQ;

typedef struct{
    struct arquivo *inicio;
}LISTAE;

typedef struct{
    char congre[20];
    char pales[10][50];
    char grupoD[10][50];
    char curso[20];
    char oficina[20];
    int numpa,numgp,numCr,numOf;

}INSCRICAO;

typedef struct inscricao{
    INSCRICAO dados;
    struct inscricao *ant;
    struct inscricao *prox;
}INS;

typedef struct{
    struct inscricao *inicio;
}LISTAI;

void menu_final(){
    int i;
    system("cls");
    printf("\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t\t\t######## ##    ##  ######  ########  ######\n");
    printf("\t\t\t\t\t\t\t\t##       ###   ## ##    ## ##       ##    ##\n");
    printf("\t\t\t\t\t\t\t\t##       ####  ## ##       ##       ##       \n");
    printf("\t\t\t\t\t\t\t\t######   ## ## ## ##       ######   ##       \n");
    printf("\t\t\t\t\t\t\t\t##       ##  #### ##       ##       ##       \n");
    printf("\t\t\t\t\t\t\t\t##       ##   ### ##    ## ##       ##    ## \n");
    printf("\t\t\t\t\t\t\t\t######## ##    ##  ######  ########  ######  \n");
    printf("\n\n");
    printf("\t\t\t\t\t\t\t\tFINALIZANDO");
    for(i=0;i<3;i++){
        printf(".");
        Sleep(1000);
    }
}
void menu_principal(){
int i;
printf("\n\n\n\n\n\n");
printf("\t\t\t\t\t\t\t\t######## ##    ##  ######  ########  ######\n");
printf("\t\t\t\t\t\t\t\t##       ###   ## ##    ## ##       ##    ##\n");
printf("\t\t\t\t\t\t\t\t##       ####  ## ##       ##       ##       \n");
printf("\t\t\t\t\t\t\t\t######   ## ## ## ##       ######   ##       \n");
printf("\t\t\t\t\t\t\t\t##       ##  #### ##       ##       ##       \n");
printf("\t\t\t\t\t\t\t\t##       ##   ### ##    ## ##       ##    ## \n");
printf("\t\t\t\t\t\t\t\t######## ##    ##  ######  ########  ######  \n");
printf("\n\n");
printf("\t\t\t\t\t\t\t\tCARREGANDO");
for(i=0;i<3;i++){
    printf(".");
    Sleep(1000);
}
}
void menu_palestrante(){
    printf("\n\n\n");
    printf("\t\t\t\t\t\t\t\t*-------------------------------------------*\n");
    printf("\t\t\t\t\t\t\t\t|         PALESTRANTE - SISTEMA DO ENCEC    |\n");
    printf("\t\t\t\t\t\t\t\t|                                           |\n");
    printf("\t\t\t\t\t\t\t\t|    1 - Cadastrar                          |\n");
    printf("\t\t\t\t\t\t\t\t|    2 - Listar                             |\n");
    printf("\t\t\t\t\t\t\t\t|    3 - Editar                             |\n");
    printf("\t\t\t\t\t\t\t\t|    4 - Remover                            |\n");
    printf("\t\t\t\t\t\t\t\t|    5 - Sair                               |\n");
    printf("\t\t\t\t\t\t\t\t|                                           |\n");
    printf("\t\t\t\t\t\t\t\t|                                           |\n");
    printf("\t\t\t\t\t\t\t\t*-------------------------------------------*\n");
    printf("\t\t\t\t\t\t\t\t-->> ");

}
void menu_congressista(){
    printf("\n\n\n");
    printf("\t\t\t\t\t\t\t\t*-------------------------------------------*\n");
    printf("\t\t\t\t\t\t\t\t|        CONGRESSISTA - SISTEMA DO ENCEC    |\n");
    printf("\t\t\t\t\t\t\t\t|                                           |\n");
    printf("\t\t\t\t\t\t\t\t|    1 - Cadastrar                          |\n");
    printf("\t\t\t\t\t\t\t\t|    2 - Listar                             |\n");
    printf("\t\t\t\t\t\t\t\t|    3 - Editar                             |\n");
    printf("\t\t\t\t\t\t\t\t|    4 - Remover                            |\n");
    printf("\t\t\t\t\t\t\t\t|    5 - Sair                               |\n");
    printf("\t\t\t\t\t\t\t\t|                                           |\n");
    printf("\t\t\t\t\t\t\t\t|                                           |\n");
    printf("\t\t\t\t\t\t\t\t*-------------------------------------------*\n");
    printf("\t\t\t\t\t\t\t\t-->> ");


}
void menu_organizadores(){

    printf("\n\n\n");
    printf("\t\t\t\t\t\t\t\t*-------------------------------------------*\n");
    printf("\t\t\t\t\t\t\t\t|       ORGANIZADORES - SISTEMA DO ENCEC    |\n");
    printf("\t\t\t\t\t\t\t\t|                                           |\n");
    printf("\t\t\t\t\t\t\t\t|    1 - Cadastrar                          |\n");
    printf("\t\t\t\t\t\t\t\t|    2 - Listar                             |\n");
    printf("\t\t\t\t\t\t\t\t|    3 - Editar                             |\n");
    printf("\t\t\t\t\t\t\t\t|    4 - Remover                            |\n");
    printf("\t\t\t\t\t\t\t\t|    5 - Sair                               |\n");
    printf("\t\t\t\t\t\t\t\t|                                           |\n");
    printf("\t\t\t\t\t\t\t\t|                                           |\n");
    printf("\t\t\t\t\t\t\t\t*-------------------------------------------*\n");
    printf("\t\t\t\t\t\t\t\t-->> ");


}
void menu_eventos(){
    printf("\n\n\n");
    printf("\t\t\t\t\t\t\t\t*-------------------------------------------*\n");
    printf("\t\t\t\t\t\t\t\t|         EVENTOS - SISTEMA DO ENCEC        |\n");
    printf("\t\t\t\t\t\t\t\t|                                           |\n");
    printf("\t\t\t\t\t\t\t\t|    1 - Palestra                           |\n");
    printf("\t\t\t\t\t\t\t\t|    2 - Cursos                             |\n");
    printf("\t\t\t\t\t\t\t\t|    3 - Grupos de Discussoes               |\n");
    printf("\t\t\t\t\t\t\t\t|    4 - Oficinas                           |\n");
    printf("\t\t\t\t\t\t\t\t|    5 - Sair                               |\n");
    printf("\t\t\t\t\t\t\t\t|                                           |\n");
    printf("\t\t\t\t\t\t\t\t|                                           |\n");
    printf("\t\t\t\t\t\t\t\t*-------------------------------------------*\n");
    printf("\t\t\t\t\t\t\t\t-->> ");


}
void menu_incial(){
    printf("\n\n\n");
    printf("\t\t\t\t\t\t\t\t*-------------------------------------------*\n");
    printf("\t\t\t\t\t\t\t\t|         BEM VINDO! - SISTEMA DO ENCEC     |\n");
    printf("\t\t\t\t\t\t\t\t|                                           |\n");
    printf("\t\t\t\t\t\t\t\t|    1 - Congressistas                      |\n");
    printf("\t\t\t\t\t\t\t\t|    2 - Palestrantes                       |\n");
    printf("\t\t\t\t\t\t\t\t|    3 - Organizadores                      |\n");
    printf("\t\t\t\t\t\t\t\t|    4 - Eventos                            |\n");
    printf("\t\t\t\t\t\t\t\t|    5 - Inscricoes                         |\n");
    printf("\t\t\t\t\t\t\t\t|    6 - Sair                               |\n");
    printf("\t\t\t\t\t\t\t\t|                                           |\n");
    printf("\t\t\t\t\t\t\t\t*-------------------------------------------*\n");
    printf("\t\t\t\t\t\t\t\t-->> ");

}
void menu_palestra(){
    printf("\n\n\n");
    printf("\t\t\t\t\t\t\t\t*-------------------------------------------*\n");
    printf("\t\t\t\t\t\t\t\t|       PALESTRA - SISTEMA DO ENCEC         |\n");
    printf("\t\t\t\t\t\t\t\t|                                           |\n");
    printf("\t\t\t\t\t\t\t\t|    1 - Cadastrar                          |\n");
    printf("\t\t\t\t\t\t\t\t|    2 - Listar                             |\n");
    printf("\t\t\t\t\t\t\t\t|    3 - Editar                             |\n");
    printf("\t\t\t\t\t\t\t\t|    4 - Remover                            |\n");
    printf("\t\t\t\t\t\t\t\t|    5 - Sair                               |\n");
    printf("\t\t\t\t\t\t\t\t|                                           |\n");
    printf("\t\t\t\t\t\t\t\t|                                           |\n");
    printf("\t\t\t\t\t\t\t\t*-------------------------------------------*\n");
    printf("\t\t\t\t\t\t\t\t-->> ");
}
void menu_grupoD(){
    printf("\n\n\n");
    printf("\t\t\t\t\t\t\t\t*-------------------------------------------*\n");
    printf("\t\t\t\t\t\t\t\t|  GRUPOS DE DISCUSSOES - SISTEMA DO ENCEC  |\n");
    printf("\t\t\t\t\t\t\t\t|                                           |\n");
    printf("\t\t\t\t\t\t\t\t|    1 - Cadastrar                          |\n");
    printf("\t\t\t\t\t\t\t\t|    2 - Listar                             |\n");
    printf("\t\t\t\t\t\t\t\t|    3 - Editar                             |\n");
    printf("\t\t\t\t\t\t\t\t|    4 - Remover                            |\n");
    printf("\t\t\t\t\t\t\t\t|    5 - Sair                               |\n");
    printf("\t\t\t\t\t\t\t\t|                                           |\n");
    printf("\t\t\t\t\t\t\t\t|                                           |\n");
    printf("\t\t\t\t\t\t\t\t*-------------------------------------------*\n");
    printf("\t\t\t\t\t\t\t\t-->> ");
}
void menu_curso(){
    printf("\n\n\n");
    printf("\t\t\t\t\t\t\t\t*-------------------------------------------*\n");
    printf("\t\t\t\t\t\t\t\t|       CURSO - SISTEMA DO ENCEC            |\n");
    printf("\t\t\t\t\t\t\t\t|                                           |\n");
    printf("\t\t\t\t\t\t\t\t|    1 - Cadastrar                          |\n");
    printf("\t\t\t\t\t\t\t\t|    2 - Listar                             |\n");
    printf("\t\t\t\t\t\t\t\t|    3 - Editar                             |\n");
    printf("\t\t\t\t\t\t\t\t|    4 - Remover                            |\n");
    printf("\t\t\t\t\t\t\t\t|    5 - Sair                               |\n");
    printf("\t\t\t\t\t\t\t\t|                                           |\n");
    printf("\t\t\t\t\t\t\t\t|                                           |\n");
    printf("\t\t\t\t\t\t\t\t*-------------------------------------------*\n");
    printf("\t\t\t\t\t\t\t\t-->> ");

}
void menu_oficina(){
    printf("\n\n\n");
    printf("\t\t\t\t\t\t\t\t*-------------------------------------------*\n");
    printf("\t\t\t\t\t\t\t\t|       OFICINA - SISTEMA DO ENCEC          |\n");
    printf("\t\t\t\t\t\t\t\t|                                           |\n");
    printf("\t\t\t\t\t\t\t\t|    1 - Cadastrar                          |\n");
    printf("\t\t\t\t\t\t\t\t|    2 - Listar                             |\n");
    printf("\t\t\t\t\t\t\t\t|    3 - Editar                             |\n");
    printf("\t\t\t\t\t\t\t\t|    4 - Remover                            |\n");
    printf("\t\t\t\t\t\t\t\t|    5 - Sair                               |\n");
    printf("\t\t\t\t\t\t\t\t|                                           |\n");
    printf("\t\t\t\t\t\t\t\t|                                           |\n");
    printf("\t\t\t\t\t\t\t\t*-------------------------------------------*\n");
    printf("\t\t\t\t\t\t\t\t-->> ");
}
void menu_inscricoes(){
    printf("\n\n\n");
    printf("\t\t\t\t\t\t\t\t*-------------------------------------------*\n");
    printf("\t\t\t\t\t\t\t\t|       INSCRICAO - SISTEMA DO ENCEC        |\n");
    printf("\t\t\t\t\t\t\t\t|                                           |\n");
    printf("\t\t\t\t\t\t\t\t|    1 - Inscrever                          |\n");
    printf("\t\t\t\t\t\t\t\t|    2 - Listar                             |\n");
    printf("\t\t\t\t\t\t\t\t|    3 - Cancelar                           |\n");
    printf("\t\t\t\t\t\t\t\t|    4 - Sair                               |\n");
    printf("\t\t\t\t\t\t\t\t|                                           |\n");
    printf("\t\t\t\t\t\t\t\t|                                           |\n");
    printf("\t\t\t\t\t\t\t\t*-------------------------------------------*\n");
    printf("\t\t\t\t\t\t\t\t-->> ");
}


void mostrarCongressista(LISTAD *ld){  //Funcao de listagem dos congressistas cadastrados

    if(ld == NULL){
    }
    else{
        if(ld->inicio==NULL){
            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
            printf("\n\t\t\t\t\t\t\t\t SEM CONGRESSISTAS CADASTRADOS!");
            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
        }
        else{
            ELEM* aux = ld->inicio;
            printf("\n\n\t\t\t\t\t\t\t\tLISTA CONGRESSISTAS: \n");
            while(aux != NULL){
                printf("\n\n\t\t\t\t\t\t\t\t-----------------------------------\n");
                printf("\n\t\t\t\t\t\t\t\t CONGRESSISTA: %s\n",aux->dados.nome);
                printf("\n\t\t\t\t\t\t\t\t IDENTIDADE (RG): %d\n",aux->dados.rg);
                printf("\n\t\t\t\t\t\t\t\t EMAIL: %s\n",aux->dados.email);
                printf("\n\t\t\t\t\t\t\t\t CURSO: %s\n",aux->dados.curso);
                printf("\n\t\t\t\t\t\t\t\t MATRICULA: %d\n",aux->dados.matricula);
                printf("\n\t\t\t\t\t\t\t\t-----------------------------------\n");
                aux = aux->prox;
            }
        }
    }
}

void mostrarPalestrante(LISTAD *ld){  //Funcao de listagem dos congressistas cadastrados

    if(ld == NULL){
    }
    else{
        if(ld->inicio==NULL){
            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
            printf("\n\t\t\t\t\t\t\t\t SEM PALESTRANTES CADASTRADOS!");
            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
        }
        else{
            ELEM* aux = ld->inicio;
            printf("\n\n\t\t\t\t\t\t\t\tLISTA PALESTRANTES: \n");
            while(aux != NULL){
                printf("\n\n\t\t\t\t\t\t\t\t-----------------------------------\n");
                printf("\n\t\t\t\t\t\t\t\t PALESTRANTE: %s\n",aux->dados.nome);
                printf("\n\t\t\t\t\t\t\t\t IDENTIDADE (RG): %d\n",aux->dados.rg);
                printf("\n\t\t\t\t\t\t\t\t EMAIL: %s\n",aux->dados.email);
                printf("\n\t\t\t\t\t\t\t\t MATRICULA: %d\n",aux->dados.matricula);
                printf("\n\t\t\t\t\t\t\t\t-----------------------------------\n");
                aux = aux->prox;
            }
        }
    }
}

void mostrarOrganizador(LISTAD *ld){  //Funcao de listagem dos congressistas cadastrados

    if(ld == NULL){
    }
    else{
        if(ld->inicio==NULL){
            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
            printf("\n\t\t\t\t\t\t\t\t SEM ORGANIZADORES CADASTRADOS!");
            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
        }
        else{
            ELEM* aux = ld->inicio;
            printf("\n\n\t\t\t\t\t\t\t\tLISTA ORGANIZADORES: \n");
            while(aux != NULL){
                printf("\n\n\t\t\t\t\t\t\t\t-----------------------------------\n");
                printf("\n\t\t\t\t\t\t\t\t ORGANIZADOR: %s\n",aux->dados.nome);
                printf("\n\t\t\t\t\t\t\t\t IDENTIDADE (RG): %d\n",aux->dados.rg);
                printf("\n\t\t\t\t\t\t\t\t EMAIL: %s\n",aux->dados.email);
                printf("\n\t\t\t\t\t\t\t\t MATRICULA: %d\n",aux->dados.matricula);
                printf("\n\t\t\t\t\t\t\t\t-----------------------------------\n");
                aux = aux->prox;
            }
        }
    }
}

LISTAD* criar(){
    LISTAD *ld = (LISTAD*) malloc(sizeof(LISTAD));  //Funcao para alocar a memoria para o usa de uma lista
    if(ld!=NULL){
        ld->inicio = NULL;
    }
    return ld;
}

void inserir(LISTAD *ld , CADASTRO a){   //Funcao para inserir os dados na lista de cadastros
    if(ld==NULL){
    }
    else{
        ELEM *novo = (ELEM*) malloc(sizeof(ELEM));
        if(novo!=NULL){
            novo->dados = a;
            if(ld->inicio==NULL){
                novo->ant=NULL;
                novo->prox =NULL;
                ld->inicio = novo;
            }
            else{
                if(strcmp(ld->inicio->dados.nome,novo->dados.nome)>0){//Inserir no comeco da lista
                    novo->ant=NULL;
                    novo->prox=ld->inicio;
                    ld->inicio->ant=novo;
                    ld->inicio=novo;
                }else{//Inserir no meio ou no fim na lista
                    ELEM *ante,*aux=ld->inicio;
                    while((aux!=NULL)&&(strcmp(aux->dados.nome,novo->dados.nome)<=0)){
                        ante=aux;
                        aux=aux->prox;
                    }
                    ante->prox=novo;
                    novo->ant=ante;
                    novo->prox=aux;
                    if(aux!=NULL)
                        aux->ant=novo;
                }

            }
            system("cls");
            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
            printf("\n\t\t\t\t\t\t\t\t USUARIO CADASTRADO!");
            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
        }
    }
}

void inserirAlterado(LISTAD *ld , CADASTRO a){   //Funcao para inserir os dados na lista de cadastros
    if(ld==NULL){
    }
    else{
        ELEM *novo = (ELEM*) malloc(sizeof(ELEM));
        if(novo!=NULL){
            novo->dados = a;
            if(ld->inicio==NULL){
                novo->ant=NULL;
                novo->prox =NULL;
                ld->inicio = novo;
            }
            else{
                if(strcmp(ld->inicio->dados.nome,novo->dados.nome)>0){//Inserir no comeco da lista
                    novo->ant=NULL;
                    novo->prox=ld->inicio;
                    ld->inicio->ant=novo;
                    ld->inicio=novo;
                }else{//Inserir no meio ou no fim na lista
                    ELEM *ante,*aux=ld->inicio;
                    while((aux!=NULL)&&(strcmp(aux->dados.nome,novo->dados.nome)<=0)){
                        ante=aux;
                        aux=aux->prox;
                    }
                    ante->prox=novo;
                    novo->ant=ante;
                    novo->prox=aux;
                    if(aux!=NULL)
                        aux->ant=novo;
                }

            }
        }
    }
}
void removerAlterado(LISTAD *ld, char nomeBusca[]){ //Funcao de remover um dado alterado para que posteriormente
                                            //o dado venha a ser ordenado em outra situacao
    ELEM *aux = ld->inicio;
        if(strcmp(nomeBusca,aux->dados.nome)== 0){//Se o dado estiver no inicio
            ld->inicio=aux->prox;
            if(aux->prox!=NULL)
                aux->prox->ant=NULL;
            free(aux);
        }else{//Se o dado esta no meio ou no final da lista
            ELEM *ant;
            while((aux!=NULL) && strcmp(nomeBusca,aux->dados.nome)!=0){
                ant=aux;
                aux=aux->prox;
            }
            if(aux==NULL){
                return;
            }
            ant->prox = aux->prox;
            if(aux->prox!=NULL)
                aux->prox->ant=ant;
            free(aux);
            }
}

void alterarCongressista(LISTAD *ld){  //Funcao responsavel em editar os dados de uma lista
    char nomeBusca[20], nomeNovo[20], cursoNovo[40];
    char emailNovo[40];
    int opAlterar , achei = 0;
    CADASTRO x;
    if(ld==NULL){
            return;
    }
    else{
        if(ld->inicio == NULL){ //Caso nao tenha nada na lista
            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
            printf("\n\t\t\t\t\t\t\t\t SEM USUARIOS CADASTRADOS!");
            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
        }
        else{
            printf("\n\n\t\t\t\t\t\t\t\t--------------------------------------------\n");
            printf("\n\n\t\t\t\t\t\t\t\tDIGITE O USUARIO QUE DESEJA ALTERAR: \n\n");
            printf("\n\n\t\t\t\t\t\t\t\tNOME DO USUARIO: ");
            setbuf(stdin,NULL);
            fgets(nomeBusca,19,stdin);
            strupr(nomeBusca);
            ELEM *aux = ld->inicio;
            while(aux!=NULL){       //Busca pelo nome digitado
                if(strcmp(nomeBusca,aux->dados.nome)==0){ //Caso ache o nome opcoes de alteracoes
                        achei = 1;
                        system("cls");
                        printf("\n\n\t\t\t\t\t\t\t\t--------------------------------------------\n");
                        printf("\n\n\t\t\t\t\t\t\t\tDIGITE O QUE DESEJA ALTERAR: \n\n");
                        printf("\t\t\t\t\t\t\t\t1 - NOME\n\t\t\t\t\t\t\t\t2 - CURSO");
                        printf("\n\t\t\t\t\t\t\t\t3 - EMAIL\n\t\t\t\t\t\t\t\t4 - IDENTIDADE (RG)\n\t\t\t\t\t\t\t\t>> ");
                        scanf("%d",&opAlterar);
                    while(opAlterar<1 || opAlterar>4){
                        system("cls");
                        printf("\n\n\t\t\t\t\t\t\t\t--------------------------------------------\n");
                        printf("\n\n\t\t\t\t\t\t\t\tDIGITE O QUE DESEJA ALTERAR: \n\n");
                        printf("\t\t\t\t\t\t\t\t1 - NOME\n\t\t\t\t\t\t\t\t2 - CURSO");
                        printf("\n\t\t\t\t\t\t\t\t3 - EMAIL\n\t\t\t\t\t\t\t\t4 - IDENTIDADE (RG)\n\t\t\t\t\t\t\t\t>> ");
                        scanf("%d",&opAlterar);
                    }
                    switch(opAlterar){
                        case 1: //Opcao para mudar o nome

                            system("cls");
                            printf("\n\n\t\t\t\t\t\t\t\t--------------------------------------------\n");
                            printf("\n\n\t\t\t\t\t\t\t\t DIGITE O NOVO NOME: \n\n");
                            printf("\t\t\t\t\t\t\t\tNOME: ");
                            setbuf(stdin,NULL);
                            fgets(nomeNovo,19,stdin);
                            strupr(nomeNovo);
                            ELEM *aux2 = ld->inicio;
                            while(aux2!=NULL){
                                if(strcmp(nomeNovo,aux2->dados.nome)==0){ //Caso edite para um nome ja cadastrado
                                    system("cls");
                                    printf("\n\t\t\t\t\t\t\t\t---------------------------");
                                    printf("\n\t\t\t\t\t\t\t\tNome ja esta cadastrado!");
                                    printf("\n\t\t\t\t\t\t\t\t---------------------------\n\n");
                                    return;
                                }
                                aux2=aux2->prox;
                            }
                            strcpy(aux->dados.nome,nomeNovo);
                            x = aux->dados; //Variavel responsavel em guardar onde o dado foi alterado
                            system("cls");
                            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
                            printf("\n\t\t\t\t\t\t\t\t USUARIO ALTERADO!");
                            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
                            break;
                        case 2: //Opcao para mudar o curso
                            system("cls");
                            printf("\n\n\t\t\t\t\t\t\t\t--------------------------------------------\n");
                            printf("\n\n\t\t\t\t\t\t\t\t DIGITE O NOVO CURSO: \n\n");
                            printf("\t\t\t\t\t\t\t\tCURSO: ");
                            setbuf(stdin,NULL);
                            fgets(cursoNovo,39,stdin);
                            strupr(cursoNovo);
                            strcpy(aux->dados.curso,cursoNovo);
                            system("cls");
                            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
                            printf("\n\t\t\t\t\t\t\t\t USUARIO ALTERADO!");
                            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
                            break;
                        case 3:
                            system("cls");
                            printf("\n\n\t\t\t\t\t\t\t\t--------------------------------------------\n");
                            printf("\n\n\t\t\t\t\t\t\t\t DIGITE O NOVO EMAIL: \n\n");
                            printf("\t\t\t\t\t\t\t\tEMAIL: ");
                            setbuf(stdin,NULL);
                            fgets(emailNovo,39,stdin);
                            strcpy(aux->dados.email,emailNovo);
                            system("cls");
                            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
                            printf("\n\t\t\t\t\t\t\t\t USUARIO ALTERADO!");
                            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");

                            break;
                        default:
                            system("cls");
                            printf("\n\n\t\t\t\t\t\t\t\t--------------------------------------------\n");
                            printf("\n\n\t\t\t\t\t\t\t\t DIGITE A NOVA IDENTIDADE(RG): \n\n");
                            printf("\t\t\t\t\t\t\t\tIDENTIDADE(RG): ");
                            scanf("%d",&aux->dados.rg);
                            while(aux->dados.rg<1000000 || aux->dados.rg>9999999){
                            system("cls");
                            printf("\n\t\t\t\t\t\t\t\t---------------------------");
                            printf("\n\t\t\t\t\t\t\t\tIdentidade invalida!");
                            printf("\n\t\t\t\t\t\t\t\t---------------------------\n\n");
                            system("pause");
                            system("cls");
                            printf("\n\n\t\t\t\t\t\t\t\t--------------------------------------------\n");
                            printf("\n\t\t\t\t\t\t\t\tDIGITE NUMERO DA IDENTIDADE(RG): ");
                            scanf("%d",&aux->dados.rg);
                            }
                            system("cls");
                            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
                            printf("\n\t\t\t\t\t\t\t\t USUARIO ALTERADO!");
                            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");

                            break;
                    }
                }
                aux=aux->prox;
            }
            if(achei == 0){
                system("cls");
                printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
                printf("\n\t\t\t\t\t\t\t\t SEM USUARIOS COM ESTE NOME!");
                printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
            }
        }
    }
    if(opAlterar==1){ //Caso eu altere o nome entra aqui no if
        removerAlterado(ld,nomeNovo);//Removo o dado que alterei
        inserirAlterado(ld,x);//E o adiciono novamente para orderna-lo na lista
    }
}

void alterarPalestrante(LISTAD *ld){  //Funcao responsavel em editar os dados de uma lista
    char nomeBusca[20], nomeNovo[20];
    char emailNovo[40];
    int opAlterar , achei = 0;
    CADASTRO x;
    if(ld==NULL){
            return;
    }
    else{
        if(ld->inicio == NULL){ //Caso nao tenha nada na lista
            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
            printf("\n\t\t\t\t\t\t\t\t SEM USUARIOS CADASTRADOS!");
            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
        }
        else{
            printf("\n\n\t\t\t\t\t\t\t\t--------------------------------------------\n");
            printf("\n\n\t\t\t\t\t\t\t\t DIGITE O USUARIO QUE DESEJA ALTERAR: \n\n");
            printf("\n\n\t\t\t\t\t\t\t\t NOME DO USUARIO: ");
            setbuf(stdin,NULL);
            fgets(nomeBusca,19,stdin);
            strupr(nomeBusca);
            ELEM *aux = ld->inicio;
            while(aux!=NULL){       //Busca pelo nome digitado
                if(strcmp(nomeBusca,aux->dados.nome)==0){ //Caso ache o nome opcoes de alteracoes
                        achei = 1;
                        system("cls");
                        printf("\n\n\t\t\t\t\t\t\t\t--------------------------------------------\n");
                        printf("\n\n\t\t\t\t\t\t\t\tDIGITE O QUE DESEJA ALTERAR: \n\n");
                        printf("\t\t\t\t\t\t\t\t1 - NOME\n\t\t\t\t\t\t\t\t2 - EMAIL");
                        printf("\n\t\t\t\t\t\t\t\t3 - IDENTIDADE (RG)\n\t\t\t\t\t\t\t\t>> ");
                        scanf("%d",&opAlterar);
                    while(opAlterar<1 || opAlterar>3){
                        system("cls");
                        printf("\n\n\t\t\t\t\t\t\t\t--------------------------------------------\n");
                        printf("\n\n\t\t\t\t\t\t\t\tDIGITE O QUE DESEJA ALTERAR: \n\n");
                        printf("\t\t\t\t\t\t\t\t1 - NOME\n\t\t\t\t\t\t\t\t2 - EMAIL");
                        printf("\n\t\t\t\t\t\t\t\t3 - IDENTIDADE (RG)\n\t\t\t\t\t\t\t\t>> ");
                        scanf("%d",&opAlterar);
                    }
                    switch(opAlterar){
                        case 1: //Opcao para mudar o nome

                            system("cls");
                            printf("\n\n\t\t\t\t\t\t\t\t--------------------------------------------\n");
                            printf("\n\n\t\t\t\t\t\t\t\t DIGITE O NOVO NOME: \n\n");
                            printf("\t\t\t\t\t\t\t\t NOME: ");
                            setbuf(stdin,NULL);
                            fgets(nomeNovo,19,stdin);
                            strupr(nomeNovo);
                            ELEM *aux2 = ld->inicio;
                            while(aux2!=NULL){
                                if(strcmp(nomeNovo,aux2->dados.nome)==0){ //Caso edite para um nome ja cadastrado
                                    system("cls");
                                    printf("\n\t\t\t\t\t\t\t\t---------------------------");
                                    printf("\n\t\t\t\t\t\t\t\tNome ja esta cadastrado!");
                                    printf("\n\t\t\t\t\t\t\t\t---------------------------\n\n");
                                    return;
                                }
                                aux2=aux2->prox;
                            }
                            strcpy(aux->dados.nome,nomeNovo);
                            x = aux->dados; //Variavel responsavel em guardar onde o dado foi alterado
                            system("cls");
                            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
                            printf("\n\t\t\t\t\t\t\t\t USUARIO ALTERADO!");
                            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
                            break;
                        case 2:
                            system("cls");
                            printf("\n\n\t\t\t\t\t\t\t\t--------------------------------------------\n");
                            printf("\n\n\t\t\t\t\t\t\t\t DIGITE O NOVO EMAIL: \n\n");
                            printf("\t\t\t\t\t\t\t\t EMAIL: ");
                            setbuf(stdin,NULL);
                            fgets(emailNovo,39,stdin);
                            strcpy(aux->dados.email,emailNovo);
                            system("cls");
                            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
                            printf("\n\t\t\t\t\t\t\t\t USUARIO ALTERADO!");
                            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");

                            break;
                        default:
                            system("cls");
                            printf("\n\n\t\t\t\t\t\t\t\t--------------------------------------------\n");
                            printf("\n\n\t\t\t\t\t\t\t\t DIGITE A NOVA IDENTIDADE(RG): \n\n");
                            printf("\t\t\t\t\t\t\t\t IDENTIDADE(RG): ");
                            scanf("%d",&aux->dados.rg);
                            while(aux->dados.rg<1000000 || aux->dados.rg>9999999){
                            system("cls");
                            printf("\n\t\t\t\t\t\t\t\t---------------------------");
                            printf("\n\t\t\t\t\t\t\t\tIdentidade invalida!");
                            printf("\n\t\t\t\t\t\t\t\t---------------------------\n\n");
                            system("pause");
                            system("cls");
                            printf("\n\n\t\t\t\t\t\t\t\t--------------------------------------------\n");
                            printf("\n\t\t\t\t\t\t\t\t DIGITE NUMERO DA IDENTIDADE(RG): ");
                            scanf("%d",&aux->dados.rg);
                            }
                            system("cls");
                            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
                            printf("\n\t\t\t\t\t\t\t\t USUARIO ALTERADO!");
                            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");

                            break;
                    }
                }
                aux=aux->prox;
            }
            if(achei == 0){
                system("cls");
                printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
                printf("\n\t\t\t\t\t\t\t\t SEM USUARIOS COM ESTE NOME!");
                printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
            }
        }
    }
    if(opAlterar==1){ //Caso eu altere o nome entra aqui no if
        removerAlterado(ld,nomeNovo);//Removo o dado que alterei
        inserirAlterado(ld,x);//E o adiciono novamente para orderna-lo na lista
    }
}
void remover(LISTAD *ld){ //Funcao para remover dados na lista
    char nomeBusca[20];
    if(ld==NULL){
    }
    else{
        if(ld->inicio == NULL){
            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
            printf("\n\t\t\t\t\t\t\t\t SEM USUARIOS CADASTRADOS!");
            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
        }
        else{
            printf("\n\n\t\t\t\t\t\t\t\t--------------------------------------------\n");
            printf("\n\n\t\t\t\t\t\t\t\tDIGITE O USUARIO QUE DESEJA REMOVER: \n\n");
            printf("\n\n\t\t\t\t\t\t\t\tNOME DO USUARIO: ");
            setbuf(stdin,NULL);
            fgets(nomeBusca,19,stdin);
            strupr(nomeBusca);

            ELEM *aux = ld->inicio;
            if(strcmp(nomeBusca,aux->dados.nome)== 0){//Se estiver no inicio da lista
                ld->inicio=aux->prox;
                if(aux->prox!=NULL)
                    aux->prox->ant=NULL;
                free(aux);
            }
            else{//Se estiver no meio ou no fim
                ELEM *ant;
                while((aux!=NULL) && strcmp(nomeBusca,aux->dados.nome)!=0){
                    ant=aux;
                    aux=aux->prox;
                }
                if(aux==NULL){ //Caso o nome digitado nao esteja na lista
                    system("cls");
                    printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
                    printf("\n\t\t\t\t\t\t\t\t USUARIO NAO ENCONTRADO!");
                    printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
                    return;
                }
                ant->prox = aux->prox;
                if(aux->prox!=NULL)             //Remorcao do dado.
                    aux->prox->ant=ant;
                free(aux);
            }
            system("cls");
            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
            printf("\n\t\t\t\t\t\t\t\t USUARIO REMOVIDO!");
            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
        }
    }

}

int removerCongressista(LISTAD *ld){ //Funcao para remover dados na lista
    char nomeBusca[20];
    if(ld==NULL){
    }
    else{
        if(ld->inicio == NULL){
            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
            printf("\n\t\t\t\t\t\t\t\t SEM USUARIOS CADASTRADOS!");
            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
            return 0;
        }
        else{
            printf("\n\n\t\t\t\t\t\t\t\t--------------------------------------------\n");
            printf("\n\n\t\t\t\t\t\t\t\tDIGITE O USUARIO QUE DESEJA REMOVER: \n\n");
            printf("\n\n\t\t\t\t\t\t\t\tNOME DO USUARIO: ");
            setbuf(stdin,NULL);
            fgets(nomeBusca,19,stdin);
            strupr(nomeBusca);

            ELEM *aux = ld->inicio;
            if(strcmp(nomeBusca,aux->dados.nome)== 0){//Se estiver no inicio da lista
                ld->inicio=aux->prox;
                if(aux->prox!=NULL)
                    aux->prox->ant=NULL;
                free(aux);
            }
            else{//Se estiver no meio ou no fim
                ELEM *ant;
                while((aux!=NULL) && strcmp(nomeBusca,aux->dados.nome)!=0){
                    ant=aux;
                    aux=aux->prox;
                }
                if(aux==NULL){ //Caso o nome digitado nao esteja na lista
                    system("cls");
                    printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
                    printf("\n\t\t\t\t\t\t\t\t USUARIO NAO ENCONTRADO!");
                    printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
                    return 0;
                }
                ant->prox = aux->prox;
                if(aux->prox!=NULL)             //Remorcao do dado.
                    aux->prox->ant=ant;
                free(aux);
            }
            system("cls");
            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
            printf("\n\t\t\t\t\t\t\t\t USUARIO REMOVIDO!");
            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
            return 1;
        }
    }

}

void liberar(LISTAD *ld){//Liberar a memoria da lista
    if(ld !=NULL){
        ELEM * aux;
        while(ld->inicio!=NULL)
        {
            aux = ld->inicio;
            ld->inicio = ld->inicio->prox;
            free(aux);
        }
        free(ld);
        printf("\nLista liberada\n");
    }
}

int cadastroCongressista(LISTAD *ld , CADASTRO *c , int m){ //Funcao de coleta de dados para serem inseridos na lista
    char nome[20] , curso[40];
    int busca = 0;
    if(ld==NULL){
    }
    else{
        if(ld->inicio == NULL){
            system("cls");
            printf("\n\t\t\t\t\t\t\t\t---------------------------\n");
            printf("\n\t\t\t\t\t\t\t\tCADASTRO CONGRESSISTA: \n\n");
            printf("\t\t\t\t\t\t\t\tDIGITE O NOME: ");
            setbuf(stdin,NULL);
            fgets(nome,19,stdin);
            strupr(nome);
            strcpy(c->nome,nome);
            printf("\n\t\t\t\t\t\t\t\tDIGITE O CURSO: ");
            fgets(curso,39,stdin);
            strupr(curso);
            strcpy(c->curso,curso);
            printf("\n\t\t\t\t\t\t\t\tDIGITE O EMAIL: ");
            fgets(c->email,39,stdin);
            printf("\n\t\t\t\t\t\t\t\tDIGITE NUMERO DA IDENTIDADE(RG): ");
            scanf("%d",&c->rg);
            while(c->rg<1000000 || c->rg>9999999){
                system("cls");
                printf("\n\t\t\t\t\t\t\t\t---------------------------");
                printf("\n\t\t\t\t\t\t\t\tIdentidade invalida!");
                printf("\n\t\t\t\t\t\t\t\t---------------------------\n\n");
                system("pause");
                system("cls");
                printf("\n\n\t\t\t\t\t\t\t\t--------------------------------------------\n");
                printf("\n\t\t\t\t\t\t\t\t DIGITE NUMERO DA IDENTIDADE(RG): ");
                scanf("%d",&c->rg);
            }
            c->matricula = m;
            return 1;
        }
        else{
            system("cls");
            printf("\n\t\t\t\t\t\t\t\t---------------------------\n");
            printf("\n\t\t\t\t\t\t\t\tCADASTRO CONGRESSISTA: \n\n");
            printf("\t\t\t\t\t\t\t\tDIGITE O NOME: ");
            setbuf(stdin,NULL);
            fgets(nome,19,stdin);
            strupr(nome);
            strcpy(c->nome,nome);

            ELEM *aux = ld->inicio;
            while(aux!=NULL){
                if(strcmp(nome,aux->dados.nome) == 0){
                    busca++;
                }
                aux = aux->prox;
            }
            if(busca > 0){
                system("cls");
                printf("\n\t\t\t\t\t\t\t\t---------------------------");
                printf("\n\t\t\t\t\t\t\t\tNome ja esta cadastrado!");
                printf("\n\t\t\t\t\t\t\t\t---------------------------\n\n");
                return 0;
            }
            else{
                printf("\n\t\t\t\t\t\t\t\tDIGITE O CURSO: ");
                setbuf(stdin,NULL);
                fgets(curso,39,stdin);
                strupr(curso);
                strcpy(c->curso,curso);
                printf("\n\t\t\t\t\t\t\t\tDIGITE O EMAIL: ");
                fgets(c->email,39,stdin);
                printf("\n\t\t\t\t\t\t\t\tDIGITE NUMERO DA IDENTIDADE(RG): ");
                scanf("%d",&c->rg);
                while(c->rg<1000000 || c->rg>9999999){
                    system("cls");
                    printf("\n\t\t\t\t\t\t\t\t---------------------------");
                    printf("\n\t\t\t\t\t\t\t\tIdentidade invalida!");
                    printf("\n\t\t\t\t\t\t\t\t---------------------------\n\n");
                    system("pause");
                    system("cls");
                    printf("\n\n\t\t\t\t\t\t\t\t--------------------------------------------\n");
                    printf("\n\t\t\t\t\t\t\t\t DIGITE NUMERO DA IDENTIDADE(RG): ");
                    scanf("%d",&c->rg);
                }
                c->matricula = m;
                return 1;
            }
        }
    }
}

int cadastroPalestrante(LISTAD *ld , CADASTRO *c , int m){ //Funcao de coleta de dados para serem inseridos na lista
    char nome[20];
    int busca = 0;
    if(ld==NULL){
    }
    else{
        if(ld->inicio == NULL){
            system("cls");
            printf("\n\t\t\t\t\t\t\t\t---------------------------\n");
            printf("\n\t\t\t\t\t\t\t\tCADASTRO PALESTRANTE: \n\n");
            printf("\t\t\t\t\t\t\t\tDIGITE O NOME: ");
            setbuf(stdin,NULL);
            fgets(nome,19,stdin);
            strupr(nome);
            strcpy(c->nome,nome);
            printf("\n\t\t\t\t\t\t\t\tDIGITE O EMAIL: ");
            fgets(c->email,39,stdin);
            printf("\n\t\t\t\t\t\t\t\tDIGITE NUMERO DA IDENTIDADE(RG): ");
            scanf("%d",&c->rg);
            while(c->rg<1000000 || c->rg>9999999){
                system("cls");
                printf("\n\t\t\t\t\t\t\t\t---------------------------");
                printf("\n\t\t\t\t\t\t\t\tIdentidade invalida!");
                printf("\n\t\t\t\t\t\t\t\t---------------------------\n\n");
                system("pause");
                system("cls");
                printf("\n\n\t\t\t\t\t\t\t\t--------------------------------------------\n");
                printf("\n\t\t\t\t\t\t\t\t DIGITE NUMERO DA IDENTIDADE(RG): ");
                scanf("%d",&c->rg);
            }
            c->matricula = m;
            return 1;
        }
        else{
            system("cls");
            printf("\n\t\t\t\t\t\t\t\t---------------------------\n");
            printf("\n\t\t\t\t\t\t\t\tCADASTRO PALESTRANTE: \n\n");
            printf("\t\t\t\t\t\t\t\tDIGITE O NOME: ");
            setbuf(stdin,NULL);
            fgets(nome,19,stdin);
            strupr(nome);
            strcpy(c->nome,nome);

            ELEM *aux = ld->inicio;
            while(aux!=NULL){
                if(strcmp(nome,aux->dados.nome) == 0){
                    busca++;
                }
                aux = aux->prox;
            }
            if(busca > 0){
                system("cls");
                printf("\n\t\t\t\t\t\t\t\t---------------------------");
                printf("\n\t\t\t\t\t\t\t\tNome ja esta cadastrado!");
                printf("\n\t\t\t\t\t\t\t\t---------------------------\n\n");
                return 0;
            }
            else{
                printf("\n\t\t\t\t\t\t\t\tDIGITE O EMAIL: ");
                fgets(c->email,39,stdin);
                printf("\n\t\t\t\t\t\t\t\tDIGITE NUMERO DA IDENTIDADE(RG): ");
                scanf("%d",&c->rg);
                while(c->rg<1000000 || c->rg>9999999){
                    system("cls");
                    printf("\n\t\t\t\t\t\t\t\t---------------------------");
                    printf("\n\t\t\t\t\t\t\t\tIdentidade invalida!");
                    printf("\n\t\t\t\t\t\t\t\t---------------------------\n\n");
                    system("pause");
                    system("cls");
                    printf("\n\n\t\t\t\t\t\t\t\t--------------------------------------------\n");
                    printf("\n\t\t\t\t\t\t\t\t DIGITE NUMERO DA IDENTIDADE(RG): ");
                    scanf("%d",&c->rg);
                }
                c->matricula = m;
                return 1;
            }
        }
    }
}

int cadastroOrganizador(LISTAD *ld , CADASTRO *c , int m){ //Funcao de coleta de dados para serem inseridos na lista
    char nome[20];
    int busca = 0;
    if(ld==NULL){
    }
    else{
        if(ld->inicio == NULL){
            system("cls");
            printf("\n\t\t\t\t\t\t\t\t---------------------------\n");
            printf("\n\t\t\t\t\t\t\t\tCADASTRO ORGANIZADOR: \n\n");
            printf("\t\t\t\t\t\t\t\tDIGITE O NOME: ");
            setbuf(stdin,NULL);
            fgets(nome,19,stdin);
            strupr(nome);
            strcpy(c->nome,nome);
            printf("\n\t\t\t\t\t\t\t\tDIGITE O EMAIL: ");
            fgets(c->email,39,stdin);
            printf("\n\t\t\t\t\t\t\t\tDIGITE NUMERO DA IDENTIDADE(RG): ");
            scanf("%d",&c->rg);
            while(c->rg<1000000 || c->rg>9999999){
                system("cls");
                printf("\n\t\t\t\t\t\t\t\t---------------------------");
                printf("\n\t\t\t\t\t\t\t\tIdentidade invalida!");
                printf("\n\t\t\t\t\t\t\t\t---------------------------\n\n");
                system("pause");
                system("cls");
                printf("\n\n\t\t\t\t\t\t\t\t--------------------------------------------\n");
                printf("\n\t\t\t\t\t\t\t\tDIGITE NUMERO DA IDENTIDADE(RG): ");
                scanf("%d",&c->rg);
            }
            c->matricula = m;
            return 1;
        }
        else{
            system("cls");
            printf("\n\t\t\t\t\t\t\t\t---------------------------\n");
            printf("\n\t\t\t\t\t\t\t\tCADASTRO ORGANIZADOR: \n\n");
            printf("\t\t\t\t\t\t\t\tDIGITE O NOME: ");
            setbuf(stdin,NULL);
            fgets(nome,19,stdin);
            strupr(nome);
            strcpy(c->nome,nome);

            ELEM *aux = ld->inicio;
            while(aux!=NULL){
                if(strcmp(nome,aux->dados.nome) == 0){
                    busca++;
                }
                aux = aux->prox;
            }
            if(busca > 0){
                system("cls");
                printf("\n\t\t\t\t\t\t\t\t---------------------------");
                printf("\n\t\t\t\t\t\t\t\tNome ja esta cadastrado!");
                printf("\n\t\t\t\t\t\t\t\t---------------------------\n\n");
                return 0;
            }
            else{
                printf("\n\t\t\t\t\t\t\t\tDIGITE O EMAIL: ");
                fgets(c->email,39,stdin);
                printf("\n\t\t\t\t\t\t\t\tDIGITE NUMERO DA IDENTIDADE(RG): ");
                scanf("%d",&c->rg);
                while(c->rg<1000000 || c->rg>9999999){
                    system("cls");
                    printf("\n\t\t\t\t\t\t\t\t---------------------------");
                    printf("\n\t\t\t\t\t\t\t\tIdentidade invalida!");
                    printf("\n\t\t\t\t\t\t\t\t---------------------------\n\n");
                    system("pause");
                    system("cls");
                    printf("\n\n\t\t\t\t\t\t\t\t--------------------------------------------\n");
                    printf("\n\t\t\t\t\t\t\t\tDIGITE NUMERO DA IDENTIDADE(RG): ");
                    scanf("%d",&c->rg);
                }
                c->matricula = m;
                return 1;
            }
        }
    }
}


LISTAE* criarEventos(){
    LISTAE *ld = (LISTAE*) malloc(sizeof(LISTAE));  //Funcao para alocar a memoria para o usa de uma lista
    if(ld!=NULL){
        ld->inicio = NULL;
    }
    return ld;
}

void inserirEvento(LISTAE *le , EVENTO a){   //Funcao para inserir os dados na lista de cadastros
    if(le==NULL){
    }
    else{
        ARQ *novo = (ARQ*) malloc(sizeof(ARQ));
        if(novo!=NULL){
            novo->dados = a;
            if(le->inicio==NULL){
                novo->ant=NULL;
                novo->prox =NULL;
                le->inicio = novo;
            }
            else{
                if(strcmp(le->inicio->dados.tema,novo->dados.tema)>0){//Inserir no comeco da lista
                    novo->ant=NULL;
                    novo->prox=le->inicio;
                    le->inicio->ant=novo;
                    le->inicio=novo;
                }else{//Inserir no meio ou no fim na lista
                    ARQ *ante,*aux=le->inicio;
                    while((aux!=NULL)&&(strcmp(aux->dados.tema,novo->dados.tema)<=0)){
                        ante=aux;
                        aux=aux->prox;
                    }
                    ante->prox=novo;
                    novo->ant=ante;
                    novo->prox=aux;
                    if(aux!=NULL)
                        aux->ant=novo;
                }

            }
            system("cls");
            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
            printf("\n\t\t\t\t\t\t\t\t EVENTO CADASTRADO!");
            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
        }
    }
}


int cadastroEvento(LISTAE *le , EVENTO *e, LISTAD *ld){
    char locais[8][30] = {"AUD 1","AUD 2","AUD 3","SALA 1","SALA 2","SALA 3","LAB 1","LAB 2"};
    int opcaoLocal, i = 1 , busca = 0;
    char nome[20];

    if(le == NULL){
        return 0;
    }
    else{
        if(ld->inicio!=NULL){
            if(le->inicio == NULL){
            system("cls");
            printf("\n\t\t\t\t\t\t\t\t---------------------------\n");
            printf("\n\t\t\t\t\t\t\t\t CADASTRO DO EVENTO: \n\n");
            printf("\t\t\t\t\t\t\t\t DIGITE O TEMA: ");
            setbuf(stdin,NULL);
            fgets(e->tema,49,stdin);
            strupr(e->tema);
            system("cls");
            printf("\n\t\t\t\t\t\t\t\t---------------------------\n");
            printf("\t\t\t\t\t\t\t\t ESCOLHA O LOCAL DO EVENTO: \n");
            printf("\n\t\t\t\t\t\t\t\t 1 - AUD 1\n\t\t\t\t\t\t\t\t 2 - AUD 2\n\t\t\t\t\t\t\t\t 3 - AUD 3");
            printf("\n\t\t\t\t\t\t\t\t 4 - SALA 1\n\t\t\t\t\t\t\t\t 5 - SALA 2\n\t\t\t\t\t\t\t\t 6 - SALA 3");
            printf("\n\t\t\t\t\t\t\t\t 7 - LAB 1\n\t\t\t\t\t\t\t\t 8 - LAB 2\n\t\t\t\t\t\t\t\t >> ");
            scanf("%d",&opcaoLocal);

            while(opcaoLocal<1 || opcaoLocal>8){
            system("cls");
            printf("\n\t\t\t\t\t\t\t\t---------------------------\n");
            printf("\t\t\t\t\t\t\t\t ESCOLHA O LOCAL DO EVENTO: \n");
            printf("\n\t\t\t\t\t\t\t\t 1 - AUD 1\n\t\t\t\t\t\t\t\t 2 - AUD 2\n\t\t\t\t\t\t\t\t 3 - AUD 3");
            printf("\n\t\t\t\t\t\t\t\t 4 - SALA 1\n\t\t\t\t\t\t\t\t 5 - SALA 2\n\t\t\t\t\t\t\t\t 6 - SALA 3");
            printf("\n\t\t\t\t\t\t\t\t 7 - LAB 1\n\t\t\t\t\t\t\t\t 8 - LAB 2\n\t\t\t\t\t\t\t\t >> ");
            scanf("%d",&opcaoLocal);
            }
            switch(opcaoLocal){
            case 1:
                strcpy(e->local,locais[0]);
                break;
            case 2:
                strcpy(e->local,locais[1]);
                break;
            case 3:
                strcpy(e->local,locais[2]);
                break;
            case 4:
                strcpy(e->local,locais[3]);
                break;
            case 5:
                strcpy(e->local,locais[4]);
                break;
            case 6:
                strcpy(e->local,locais[5]);
                break;
            case 7:
                strcpy(e->local,locais[6]);
                break;
            default:
                strcpy(e->local,locais[7]);
                break;

            }

            system("cls");
            printf("\n\t\t\t\t\t\t\t\t------------------------------\n");
            printf("\t\t\t\t\t\t\t\t CARGA HORARIA DO EVENTO: ");
            scanf("%d",&e->cargaH);

            while(e->cargaH < 20 || e->cargaH >60){
                system("cls");
                printf("\n\t\t\t\t\t\t\t\t------------------------------\n");
                printf("\t\t\t\t\t\t\t\t CARGA HORARIA DO EVENTO: ");
                scanf("%d",&e->cargaH);
            }

            system("cls");
            printf("\n\t\t\t\t\t\t\t\t------------------------------\n");
            printf("\n\t\t\t\t\t\t\t\t HORARIO DO EVENTO: ");
            setbuf(stdin,NULL);
            scanf("%d %d",&e->horario.hora,&e->horario.minuto);
            while(e->horario.hora<8 || e->horario.hora > 12 || e->horario.minuto < 0 || e->horario.minuto > 59){
                system("cls");
                printf("\n\t\t\t\t\t\t\t\t---------------------------");
                printf("\n\t\t\t\t\t\t\t\t Horario invalido!");
                printf("\n\t\t\t\t\t\t\t\t---------------------------\n\n");
                system("pause");
                system("cls");
                printf("\n\t\t\t\t\t\t\t\t---------------------------\n");
                printf("\t\t\t\t\t\t\t\t HORARIO DO EVENTO: ");
                setbuf(stdin,NULL);
                scanf("%d %d",&e->horario.hora,&e->horario.minuto);
            }

            system("cls");
            printf("\n\t\t\t\t\t\t\t\t-------------------------------------------\n");
            printf("\t\t\t\t\t\t\t\t LISTA DE PALESTRANTES: \n");

            ELEM *aux = ld->inicio;
            while(aux!=NULL){
                printf("\n\t\t\t\t\t\t\t\t %d - %s",i,aux->dados.nome);
                i++;
                aux = aux->prox;
            }

            printf("\n\n\t\t\t\t\t\t\t\t ESCOLHA O PALESTRANTE (DIGITE O NOME): ");
            setbuf(stdin,NULL);
            fgets(nome,19,stdin);
            strupr(nome);

            ELEM *aux2 = ld->inicio;
            while(aux2!=NULL){
                if(strcmp(nome,aux2->dados.nome)==0){
                    strcpy(e->palestrante,nome);
                    return 1;
                }
                aux2 = aux2->prox;
            }

            system("cls");
                printf("\n\t\t\t\t\t\t\t\t---------------------------");
                printf("\n\t\t\t\t\t\t\t\t NOME NAO ESTA NA LISTA!");
                printf("\n\t\t\t\t\t\t\t\t---------------------------\n\n");
            }

            else{

            system("cls");
            printf("\n\t\t\t\t\t\t\t\t---------------------------\n");
            printf("\n\t\t\t\t\t\t\t\t CADASTRO DO EVENTO: \n\n");
            printf("\t\t\t\t\t\t\t\t DIGITE O TEMA: ");
            setbuf(stdin,NULL);
            fgets(e->tema,49,stdin);
            strupr(e->tema);

            ARQ *buscaTema = le->inicio;
            while(buscaTema!=NULL){
                if(strcmp(e->tema,buscaTema->dados.tema) == 0){
                    busca++;
                }
                buscaTema = buscaTema->prox;
            }
            if(busca > 0){
                system("cls");
                printf("\n\t\t\t\t\t\t\t\t---------------------------");
                printf("\n\t\t\t\t\t\t\t\t Tema ja esta cadastrado!");
                printf("\n\t\t\t\t\t\t\t\t---------------------------\n\n");
                return 0;
            }

            system("cls");
            printf("\n\t\t\t\t\t\t\t\t---------------------------\n");
            printf("\t\t\t\t\t\t\t\t ESCOLHA O LOCAL DO EVENTO: \n");
            printf("\n\t\t\t\t\t\t\t\t 1 - AUD 1\n\t\t\t\t\t\t\t\t 2 - AUD 2\n\t\t\t\t\t\t\t\t 3 - AUD 3");
            printf("\n\t\t\t\t\t\t\t\t 4 - SALA 1\n\t\t\t\t\t\t\t\t 5 - SALA 2\n\t\t\t\t\t\t\t\t 6 - SALA 3");
            printf("\n\t\t\t\t\t\t\t\t 7 - LAB 1\n\t\t\t\t\t\t\t\t 8 - LAB 2\n\t\t\t\t\t\t\t\t >> ");
            scanf("%d",&opcaoLocal);

            while(opcaoLocal<1 || opcaoLocal>8){
            system("cls");
            printf("\n\t\t\t\t\t\t\t\t---------------------------\n");
            printf("\t\t\t\t\t\t\t\t ESCOLHA O LOCAL DO EVENTO: \n");
            printf("\n\t\t\t\t\t\t\t\t 1 - AUD 1\n\t\t\t\t\t\t\t\t 2 - AUD 2\n\t\t\t\t\t\t\t\t 3 - AUD 3");
            printf("\n\t\t\t\t\t\t\t\t 4 - SALA 1\n\t\t\t\t\t\t\t\t 5 - SALA 2\n\t\t\t\t\t\t\t\t 6 - SALA 3");
            printf("\n\t\t\t\t\t\t\t\t 7 - LAB 1\n\t\t\t\t\t\t\t\t 8 - LAB 2\n\t\t\t\t\t\t\t\t >> ");
            scanf("%d",&opcaoLocal);
            }
            switch(opcaoLocal){
            case 1:
                strcpy(e->local,locais[0]);
                break;
            case 2:
                strcpy(e->local,locais[1]);
                break;
            case 3:
                strcpy(e->local,locais[2]);
                break;
            case 4:
                strcpy(e->local,locais[3]);
                break;
            case 5:
                strcpy(e->local,locais[4]);
                break;
            case 6:
                strcpy(e->local,locais[5]);
                break;
            case 7:
                strcpy(e->local,locais[6]);
                break;
            default:
                strcpy(e->local,locais[7]);
                break;

            }

            system("cls");
            printf("\n\t\t\t\t\t\t\t\t------------------------------\n");
            printf("\t\t\t\t\t\t\t\t CARGA HORARIA DO EVENTO: ");
            scanf("%d",&e->cargaH);

            while(e->cargaH < 20 || e->cargaH >60){
                system("cls");
                printf("\n\t\t\t\t\t\t\t\t------------------------------\n");
                printf("\t\t\t\t\t\t\t\t CARGA HORARIA DO EVENTO: ");
                scanf("%d",&e->cargaH);
            }

            system("cls");
            printf("\n\t\t\t\t\t\t\t\t------------------------------\n");
            printf("\n\t\t\t\t\t\t\t\t HORARIO DO EVENTO: ");
            setbuf(stdin,NULL);
            scanf("%d %d",&e->horario.hora,&e->horario.minuto);
            while(e->horario.hora<8 || e->horario.hora > 12 || e->horario.minuto < 0 || e->horario.minuto > 59){
                system("cls");
                printf("\n\t\t\t\t\t\t\t\t---------------------------");
                printf("\n\t\t\t\t\t\t\t\t Horario invalido!");
                printf("\n\t\t\t\t\t\t\t\t---------------------------\n\n");
                system("pause");
                system("cls");
                printf("\n\t\t\t\t\t\t\t\t---------------------------\n");
                printf("\t\t\t\t\t\t\t\t HORARIO DO EVENTO: ");
                setbuf(stdin,NULL);
                scanf("%d %d",&e->horario.hora,&e->horario.minuto);
            }

            system("cls");
            printf("\n\t\t\t\t\t\t\t\t-------------------------------------------\n");
            printf("\t\t\t\t\t\t\t\t LISTA DE PALESTRANTES: \n");

            ELEM *aux = ld->inicio;
            while(aux!=NULL){
                printf("\n\t\t\t\t\t\t\t\t %d - %s",i,aux->dados.nome);
                i++;
                aux = aux->prox;
            }

            printf("\n\n\t\t\t\t\t\t\t\t ESCOLHA O PALESTRANTE (DIGITE O NOME): ");
            setbuf(stdin,NULL);
            fgets(nome,19,stdin);
            strupr(nome);

            ELEM *aux2 = ld->inicio;
            while(aux2!=NULL){
                if(strcmp(nome,aux2->dados.nome)==0){
                    strcpy(e->palestrante,nome);
                    return 1;
                }
                aux2 = aux2->prox;
            }

            system("cls");
                printf("\n\t\t\t\t\t\t\t\t---------------------------");
                printf("\n\t\t\t\t\t\t\t\t NOME NAO ESTA NA LISTA!");
                printf("\n\t\t\t\t\t\t\t\t---------------------------\n\n");
            }

        }
        else{
                system("cls");
                printf("\n\t\t\t\t\t\t\t\t---------------------------------");
                printf("\n\t\t\t\t\t\t\t\t NAO HA PALESTRANTES CADASTRADOS");
                printf("\n\t\t\t\t\t\t\t\t---------------------------------\n\n");
                return 0;
        }
    }
}

int cadastroEventoT(LISTAE *le , EVENTO *e, LISTAD *ld){
    char locais[8][30] = {"AUD 1","AUD 2","AUD 3","SALA 1","SALA 2","SALA 3","LAB 1","LAB 2"};
    int opcaoLocal, i = 1 , busca = 0;
    char nome[20];

    if(le == NULL){
        return 0;
    }
    else{
        if(ld->inicio!=NULL){
            if(le->inicio == NULL){

                system("cls");
                printf("\n\t\t\t\t\t\t\t\t---------------------------\n");
                printf("\n\t\t\t\t\t\t\t\t CADASTRO DO EVENTO: \n\n");
                printf("\t\t\t\t\t\t\t\t DIGITE O TEMA: ");
                setbuf(stdin,NULL);
                fgets(e->tema,49,stdin);
                strupr(e->tema);
                system("cls");
                printf("\n\t\t\t\t\t\t\t\t---------------------------\n");
                printf("\t\t\t\t\t\t\t\t ESCOLHA O LOCAL DO EVENTO: \n");
                printf("\n\t\t\t\t\t\t\t\t 1 - AUD 1\n\t\t\t\t\t\t\t\t 2 - AUD 2\n\t\t\t\t\t\t\t\t 3 - AUD 3");
                printf("\n\t\t\t\t\t\t\t\t 4 - SALA 1\n\t\t\t\t\t\t\t\t 5 - SALA 2\n\t\t\t\t\t\t\t\t 6 - SALA 3");
                printf("\n\t\t\t\t\t\t\t\t 7 - LAB 1\n\t\t\t\t\t\t\t\t 8 - LAB 2\n\t\t\t\t\t\t\t\t >> ");
                scanf("%d",&opcaoLocal);

                while(opcaoLocal<1 || opcaoLocal>8){
                system("cls");
                printf("\n\t\t\t\t\t\t\t\t---------------------------\n");
                printf("\t\t\t\t\t\t\t\t ESCOLHA O LOCAL DO EVENTO: \n");
                printf("\n\t\t\t\t\t\t\t\t 1 - AUD 1\n\t\t\t\t\t\t\t\t 2 - AUD 2\n\t\t\t\t\t\t\t\t 3 - AUD 3");
                printf("\n\t\t\t\t\t\t\t\t 4 - SALA 1\n\t\t\t\t\t\t\t\t 5 - SALA 2\n\t\t\t\t\t\t\t\t 6 - SALA 3");
                printf("\n\t\t\t\t\t\t\t\t 7 - LAB 1\n\t\t\t\t\t\t\t\t 8 - LAB 2\n\t\t\t\t\t\t\t\t >> ");
                scanf("%d",&opcaoLocal);
                }
                switch(opcaoLocal){
                case 1:
                    strcpy(e->local,locais[0]);
                break;
                case 2:
                    strcpy(e->local,locais[1]);
                    break;
                case 3:
                    strcpy(e->local,locais[2]);
                    break;
                case 4:
                    strcpy(e->local,locais[3]);
                    break;
                case 5:
                    strcpy(e->local,locais[4]);
                    break;
                case 6:
                    strcpy(e->local,locais[5]);
                    break;
                case 7:
                    strcpy(e->local,locais[6]);
                    break;
                default:
                    strcpy(e->local,locais[7]);
                    break;

                }

                system("cls");
                printf("\n\t\t\t\t\t\t\t\t------------------------------\n");
                printf("\t\t\t\t\t\t\t\t CARGA HORARIA DO EVENTO: ");
                scanf("%d",&e->cargaH);

                while(e->cargaH < 20 || e->cargaH >60){
                    system("cls");
                    printf("\n\t\t\t\t\t\t\t\t------------------------------\n");
                    printf("\t\t\t\t\t\t\t\t CARGA HORARIA DO EVENTO: ");
                    scanf("%d",&e->cargaH);
                }

                system("cls");
                printf("\n\t\t\t\t\t\t\t\t------------------------------\n");
                printf("\n\t\t\t\t\t\t\t\t HORARIO DO EVENTO: ");
                setbuf(stdin,NULL);
                scanf("%d %d",&e->horario.hora,&e->horario.minuto);
                while(e->horario.hora<11 || e->horario.hora > 17 || e->horario.minuto < 0 || e->horario.minuto > 59){
                    system("cls");
                    printf("\n\t\t\t\t\t\t\t\t---------------------------");
                    printf("\n\t\t\t\t\t\t\t\t Horario invalido!");
                    printf("\n\t\t\t\t\t\t\t\t---------------------------\n\n");
                    system("pause");
                    system("cls");
                    printf("\n\t\t\t\t\t\t\t\t---------------------------\n");
                    printf("\t\t\t\t\t\t\t\t HORARIO DO EVENTO: ");
                    setbuf(stdin,NULL);
                    scanf("%d %d",&e->horario.hora,&e->horario.minuto);
                }

                system("cls");
                printf("\n\t\t\t\t\t\t\t\t-------------------------------------------\n");
                printf("\t\t\t\t\t\t\t\t LISTA DE PALESTRANTES: \n");

                ELEM *aux = ld->inicio;
                while(aux!=NULL){
                    printf("\n\t\t\t\t\t\t\t\t %d - %s",i,aux->dados.nome);
                    i++;
                    aux = aux->prox;
                }

                printf("\n\n\t\t\t\t\t\t\t\t ESCOLHA O PALESTRANTE (DIGITE O NOME): ");
                setbuf(stdin,NULL);
                fgets(nome,19,stdin);
                strupr(nome);

                    ELEM *aux2 = ld->inicio;
                while(aux2!=NULL){
                    if(strcmp(nome,aux2->dados.nome)==0){
                        strcpy(e->palestrante,nome);
                        return 1;
                    }
                    aux2 = aux2->prox;
                }

                system("cls");
                printf("\n\t\t\t\t\t\t\t\t---------------------------");
                printf("\n\t\t\t\t\t\t\t\t NOME NAO ESTA NA LISTA!");
                printf("\n\t\t\t\t\t\t\t\t---------------------------\n\n");
            }
            else{

                system("cls");
                printf("\n\t\t\t\t\t\t\t\t---------------------------\n");
                printf("\n\t\t\t\t\t\t\t\t CADASTRO DO EVENTO: \n\n");
                printf("\t\t\t\t\t\t\t\t DIGITE O TEMA: ");
                setbuf(stdin,NULL);
                fgets(e->tema,49,stdin);
                strupr(e->tema);

                ARQ *buscaTema = le->inicio;
                while(buscaTema!=NULL){
                    if(strcmp(e->tema,buscaTema->dados.tema) == 0){
                        busca++;
                    }
                    buscaTema = buscaTema->prox;
                }
                if(busca > 0){
                    system("cls");
                    printf("\n\t\t\t\t\t\t\t\t---------------------------");
                    printf("\n\t\t\t\t\t\t\t\t Tema ja esta cadastrado!");
                    printf("\n\t\t\t\t\t\t\t\t---------------------------\n\n");
                    return 0;
                }

                system("cls");
                printf("\n\t\t\t\t\t\t\t\t---------------------------\n");
                printf("\t\t\t\t\t\t\t\t ESCOLHA O LOCAL DO EVENTO: \n");
                printf("\n\t\t\t\t\t\t\t\t 1 - AUD 1\n\t\t\t\t\t\t\t\t 2 - AUD 2\n\t\t\t\t\t\t\t\t 3 - AUD 3");
                printf("\n\t\t\t\t\t\t\t\t 4 - SALA 1\n\t\t\t\t\t\t\t\t 5 - SALA 2\n\t\t\t\t\t\t\t\t 6 - SALA 3");
                printf("\n\t\t\t\t\t\t\t\t 7 - LAB 1\n\t\t\t\t\t\t\t\t 8 - LAB 2\n\t\t\t\t\t\t\t\t >> ");
                scanf("%d",&opcaoLocal);

                while(opcaoLocal<1 || opcaoLocal>8){
                    system("cls");
                    printf("\n\t\t\t\t\t\t\t\t---------------------------\n");
                    printf("\t\t\t\t\t\t\t\t ESCOLHA O LOCAL DO EVENTO: \n");
                    printf("\n\t\t\t\t\t\t\t\t 1 - AUD 1\n\t\t\t\t\t\t\t\t 2 - AUD 2\n\t\t\t\t\t\t\t\t 3 - AUD 3");
                    printf("\n\t\t\t\t\t\t\t\t 4 - SALA 1\n\t\t\t\t\t\t\t\t 5 - SALA 2\n\t\t\t\t\t\t\t\t 6 - SALA 3");
                    printf("\n\t\t\t\t\t\t\t\t 7 - LAB 1\n\t\t\t\t\t\t\t\t 8 - LAB 2\n\t\t\t\t\t\t\t\t >> ");
                    scanf("%d",&opcaoLocal);
                }
                switch(opcaoLocal){
                case 1:
                    strcpy(e->local,locais[0]);
                    break;
                case 2:
                    strcpy(e->local,locais[1]);
                    break;
                case 3:
                    strcpy(e->local,locais[2]);
                    break;
                case 4:
                    strcpy(e->local,locais[3]);
                    break;
                case 5:
                    strcpy(e->local,locais[4]);
                    break;
                case 6:
                    strcpy(e->local,locais[5]);
                    break;
                case 7:
                    strcpy(e->local,locais[6]);
                    break;
                default:
                    strcpy(e->local,locais[7]);
                    break;

                }

                system("cls");
                printf("\n\t\t\t\t\t\t\t\t------------------------------\n");
                printf("\t\t\t\t\t\t\t\t CARGA HORARIA DO EVENTO: ");
                scanf("%d",&e->cargaH);

                while(e->cargaH < 20 || e->cargaH >60){
                    system("cls");
                    printf("\n\t\t\t\t\t\t\t\t------------------------------\n");
                    printf("\t\t\t\t\t\t\t\t CARGA HORARIA DO EVENTO: ");
                    scanf("%d",&e->cargaH);
                }

                system("cls");
                printf("\n\t\t\t\t\t\t\t\t------------------------------\n");
                printf("\n\t\t\t\t\t\t\t\t HORARIO DO EVENTO: ");
                setbuf(stdin,NULL);
                scanf("%d %d",&e->horario.hora,&e->horario.minuto);
                while(e->horario.hora<11 || e->horario.hora > 17 || e->horario.minuto < 0 || e->horario.minuto > 59){
                    system("cls");
                    printf("\n\t\t\t\t\t\t\t\t---------------------------");
                    printf("\n\t\t\t\t\t\t\t\t Horario invalido!");
                    printf("\n\t\t\t\t\t\t\t\t---------------------------\n\n");
                    system("pause");
                    system("cls");
                    printf("\n\t\t\t\t\t\t\t\t---------------------------\n");
                    printf("\t\t\t\t\t\t\t\t HORARIO DO EVENTO: ");
                    setbuf(stdin,NULL);
                    scanf("%d %d",&e->horario.hora,&e->horario.minuto);
                }

                system("cls");
                printf("\n\t\t\t\t\t\t\t\t-------------------------------------------\n");
                printf("\t\t\t\t\t\t\t\t LISTA DE PALESTRANTES: \n");

                ELEM *aux = ld->inicio;
                while(aux!=NULL){
                    printf("\n\t\t\t\t\t\t\t\t %d - %s",i,aux->dados.nome);
                    i++;
                    aux = aux->prox;
                }

                printf("\n\n\t\t\t\t\t\t\t\t ESCOLHA O PALESTRANTE (DIGITE O NOME): ");
                setbuf(stdin,NULL);
                fgets(nome,19,stdin);
                strupr(nome);

                ELEM *aux2 = ld->inicio;
                while(aux2!=NULL){
                    if(strcmp(nome,aux2->dados.nome)==0){
                        strcpy(e->palestrante,nome);
                        return 1;
                    }
                    aux2 = aux2->prox;
                }

                system("cls");
                printf("\n\t\t\t\t\t\t\t\t---------------------------");
                printf("\n\t\t\t\t\t\t\t\t NOME NAO ESTA NA LISTA!");
                printf("\n\t\t\t\t\t\t\t\t---------------------------\n\n");

            }
        }
        else{
                system("cls");
                printf("\n\t\t\t\t\t\t\t\t---------------------------------");
                printf("\n\t\t\t\t\t\t\t\t NAO HA PALESTRANTES CADASTRADOS");
                printf("\n\t\t\t\t\t\t\t\t---------------------------------\n\n");
                return 0;
        }
    }
}

int cadastroEventoG(LISTAE *le , EVENTO *e, LISTAD *ld){
    char locais[8][30] = {"AUD 1","AUD 2","AUD 3","SALA 1","SALA 2","SALA 3","LAB 1","LAB 2"};
    int opcaoLocal, i = 1, busca = 0, quantMembros = 0, numMembros;
    char membro[20];

    if(le == NULL){
        return 0;
    }
    else{
        if(ld->inicio!=NULL){
        if(le->inicio == NULL){
            ELEM *membros = ld->inicio;
            while(membros!=NULL){
                quantMembros++;
                membros = membros->prox;
            }

            system("cls");
            printf("\n\t\t\t\t\t\t\t\t---------------------------\n");
            printf("\n\t\t\t\t\t\t\t\t CADASTRO DO EVENTO: \n\n");
            printf("\t\t\t\t\t\t\t\t DIGITE O TEMA: ");
            setbuf(stdin,NULL);
            fgets(e->tema,49,stdin);
            strupr(e->tema);
            system("cls");
            printf("\n\t\t\t\t\t\t\t\t---------------------------\n");
            printf("\t\t\t\t\t\t\t\t ESCOLHA O LOCAL DO EVENTO: \n");
            printf("\n\t\t\t\t\t\t\t\t 1 - AUD 1\n\t\t\t\t\t\t\t\t 2 - AUD 2\n\t\t\t\t\t\t\t\t 3 - AUD 3");
            printf("\n\t\t\t\t\t\t\t\t 4 - SALA 1\n\t\t\t\t\t\t\t\t 5 - SALA 2\n\t\t\t\t\t\t\t\t 6 - SALA 3");
            printf("\n\t\t\t\t\t\t\t\t 7 - LAB 1\n\t\t\t\t\t\t\t\t 8 - LAB 2\n\t\t\t\t\t\t\t\t >> ");
            scanf("%d",&opcaoLocal);

            while(opcaoLocal<1 || opcaoLocal>8){
            system("cls");
            printf("\n\t\t\t\t\t\t\t\t---------------------------\n");
            printf("\t\t\t\t\t\t\t\t ESCOLHA O LOCAL DO EVENTO: \n");
            printf("\n\t\t\t\t\t\t\t\t 1 - AUD 1\n\t\t\t\t\t\t\t\t 2 - AUD 2\n\t\t\t\t\t\t\t\t 3 - AUD 3");
            printf("\n\t\t\t\t\t\t\t\t 4 - SALA 1\n\t\t\t\t\t\t\t\t 5 - SALA 2\n\t\t\t\t\t\t\t\t 6 - SALA 3");
            printf("\n\t\t\t\t\t\t\t\t 7 - LAB 1\n\t\t\t\t\t\t\t\t 8 - LAB 2\n\t\t\t\t\t\t\t\t >> ");
            scanf("%d",&opcaoLocal);
            }
            switch(opcaoLocal){
            case 1:
                strcpy(e->local,locais[0]);
                break;
            case 2:
                strcpy(e->local,locais[1]);
                break;
            case 3:
                strcpy(e->local,locais[2]);
                break;
            case 4:
                strcpy(e->local,locais[3]);
                break;
            case 5:
                strcpy(e->local,locais[4]);
                break;
            case 6:
                strcpy(e->local,locais[5]);
                break;
            case 7:
                strcpy(e->local,locais[6]);
                break;
            default:
                strcpy(e->local,locais[7]);
                break;

            }

            system("cls");
            printf("\n\t\t\t\t\t\t\t\t------------------------------\n");
            printf("\t\t\t\t\t\t\t\t CARGA HORARIA DO EVENTO: ");
            scanf("%d",&e->cargaH);

            while(e->cargaH < 20 || e->cargaH >60){
                system("cls");
                printf("\n\t\t\t\t\t\t\t\t------------------------------\n");
                printf("\t\t\t\t\t\t\t\t CARGA HORARIA DO EVENTO: ");
                scanf("%d",&e->cargaH);
            }

            system("cls");
            printf("\n\t\t\t\t\t\t\t\t------------------------------\n");
            printf("\n\t\t\t\t\t\t\t\t HORARIO DO EVENTO: ");
            setbuf(stdin,NULL);
            scanf("%d %d",&e->horario.hora,&e->horario.minuto);
            while(e->horario.hora<11 || e->horario.hora > 17 || e->horario.minuto < 0 || e->horario.minuto > 59){
                system("cls");
                printf("\n\t\t\t\t\t\t\t\t---------------------------");
                printf("\n\t\t\t\t\t\t\t\t Horario invalido!");
                printf("\n\t\t\t\t\t\t\t\t---------------------------\n\n");
                system("pause");
                system("cls");
                printf("\n\t\t\t\t\t\t\t\t---------------------------\n");
                printf("\t\t\t\t\t\t\t\t HORARIO DO EVENTO: ");
                setbuf(stdin,NULL);
                scanf("%d %d",&e->horario.hora,&e->horario.minuto);
            }

            system("cls");
            printf("\n\t\t\t\t\t\t\t\t-------------------------------------------\n");
            printf("\t\t\t\t\t\t\t\t LISTA DE PALESTRANTES: \n");

            ELEM *aux = ld->inicio;
            while(aux!=NULL){
                printf("\n\t\t\t\t\t\t\t\t %d - %s",i,aux->dados.nome);
                i++;
                aux = aux->prox;
            }
            printf("\n\n\t\t\t\t\t\t\t\tDIGITE A QUANTIDADE DE MEMBROS: ");
            scanf("%d",&numMembros);
            while(numMembros < 0 || numMembros > quantMembros || numMembros > 5){
                system("cls");
                printf("\n\t\t\t\t\t\t\t\t-----------------------------");
                printf("\n\t\t\t\t\t\t\t\t Numero de membros invalido!");
                printf("\n\t\t\t\t\t\t\t\t-----------------------------\n\n");
                system("pause");
                system("cls");
                printf("\n\t\t\t\t\t\t\t\t-------------------------------------------\n");
                printf("\t\t\t\t\t\t\t\t LISTA DE PALESTRANTES: \n");
                ELEM *aux = ld->inicio;
                i = 1;
                while(aux!=NULL){
                    printf("\n\t\t\t\t\t\t\t\t %d - %s",i,aux->dados.nome);
                    i++;
                    aux = aux->prox;
                }
                printf("\n\n\t\t\t\t\t\t\t\tDIGITE A QUANTIDADE DE MEMBROS: ");
                scanf("%d",&numMembros);
            }
            int on = 1;
            switch(numMembros){
            case 1:

            while(on){
                    printf("\n\n\t\t\t\t\t\t\t\tDIGITE O NOME DO MEMBRO: ");
                    setbuf(stdin,NULL);
                    fgets(membro,19,stdin);
                    strupr(membro);

                    ELEM *busca = ld->inicio;
                    while(busca!=NULL){
                        if(strcmp(busca->dados.nome,membro)==0){
                            strcpy(e->membro1,membro);
                            strcpy(e->membro2,"NULO");
                            strcpy(e->membro3,"NULO");
                            strcpy(e->membro4,"NULO");
                            strcpy(e->membro5,"NULO");
                            return 1;
                        }
                        busca = busca->prox;
                    }
                    system("cls");
                    printf("\n\t\t\t\t\t\t\t\t-------------------------------------------\n");
                    printf("\t\t\t\t\t\t\t\t LISTA DE PALESTRANTES: \n");
                    ELEM *aux = ld->inicio;
                    while(aux!=NULL){
                        printf("\n\t\t\t\t\t\t\t\t - %s",aux->dados.nome);
                        aux = aux->prox;
                    }
            }

                break;

            case 2:
            while(on){
                    printf("\n\n\t\t\t\t\t\t\t\tDIGITE O NOME DO MEMBRO 1: ");
                    setbuf(stdin,NULL);
                    fgets(membro,19,stdin);
                    strupr(membro);

                    ELEM *busca = ld->inicio;
                    while(busca!=NULL){
                        if(strcmp(busca->dados.nome,membro)==0){
                            strcpy(e->membro1,membro);
                            on = 0;
                        }
                        busca = busca->prox;
                    }
                    system("cls");
                    printf("\n\t\t\t\t\t\t\t\t-------------------------------------------\n");
                    printf("\t\t\t\t\t\t\t\t LISTA DE PALESTRANTES: \n");
                    ELEM *aux = ld->inicio;
                    while(aux!=NULL){
                        printf("\n\t\t\t\t\t\t\t\t - %s",aux->dados.nome);
                        aux = aux->prox;
                    }
            }
            on = 1;
            while(on){
                    printf("\n\n\t\t\t\t\t\t\t\tDIGITE O NOME DO MEMBRO 2: ");
                    setbuf(stdin,NULL);
                    fgets(membro,19,stdin);
                    strupr(membro);

                    ELEM *busca = ld->inicio;
                    while(busca!=NULL){
                        if(strcmp(busca->dados.nome,membro)==0 && strcmp(e->membro1,membro)!=0){
                            strcpy(e->membro2,membro);
                            strcpy(e->membro3,"NULO");
                            strcpy(e->membro4,"NULO");
                            strcpy(e->membro5,"NULO");
                            return 1;
                        }
                        busca = busca->prox;
                    }
                    system("cls");
                    printf("\n\t\t\t\t\t\t\t\t-------------------------------------------\n");
                    printf("\t\t\t\t\t\t\t\t LISTA DE PALESTRANTES: \n");
                    ELEM *aux = ld->inicio;
                    while(aux!=NULL){
                        printf("\n\t\t\t\t\t\t\t\t - %s",aux->dados.nome);
                        aux = aux->prox;
                    }
            }

                break;

            case 3:
                while(on){
                    printf("\n\n\t\t\t\t\t\t\t\tDIGITE O NOME DO MEMBRO 1: ");
                    setbuf(stdin,NULL);
                    fgets(membro,19,stdin);
                    strupr(membro);

                    ELEM *busca = ld->inicio;
                    while(busca!=NULL){
                        if(strcmp(busca->dados.nome,membro)==0){
                            strcpy(e->membro1,membro);
                            on = 0;
                        }
                        busca = busca->prox;
                    }
                    system("cls");
                    printf("\n\t\t\t\t\t\t\t\t-------------------------------------------\n");
                    printf("\t\t\t\t\t\t\t\t LISTA DE PALESTRANTES: \n");
                    ELEM *aux = ld->inicio;
                    while(aux!=NULL){
                        printf("\n\t\t\t\t\t\t\t\t - %s",aux->dados.nome);
                        aux = aux->prox;
                    }
            }
            on = 1;
            while(on){
                    printf("\n\n\t\t\t\t\t\t\t\tDIGITE O NOME DO MEMBRO 2: ");
                    setbuf(stdin,NULL);
                    fgets(membro,19,stdin);
                    strupr(membro);

                    ELEM *busca = ld->inicio;
                    while(busca!=NULL){
                        if(strcmp(busca->dados.nome,membro)==0 && strcmp(e->membro1,membro)!=0){
                            strcpy(e->membro2,membro);
                            on = 0;
                        }
                        busca = busca->prox;
                    }

                    system("cls");
                    printf("\n\t\t\t\t\t\t\t\t-------------------------------------------\n");
                    printf("\t\t\t\t\t\t\t\t LISTA DE PALESTRANTES: \n");
                    ELEM *aux = ld->inicio;
                    while(aux!=NULL){
                        printf("\n\t\t\t\t\t\t\t\t - %s",aux->dados.nome);
                        aux = aux->prox;
                    }
            }
            on = 1;
            while(on){
                    printf("\n\n\t\t\t\t\t\t\t\tDIGITE O NOME DO MEMBRO 3: ");
                    setbuf(stdin,NULL);
                    fgets(membro,19,stdin);
                    strupr(membro);

                    ELEM *busca = ld->inicio;
                    while(busca!=NULL){
                        if(strcmp(busca->dados.nome,membro)==0 && strcmp(e->membro1,membro)!=0 && strcmp(e->membro2,membro)!=0){
                            strcpy(e->membro3,membro);
                            strcpy(e->membro4,"NULO");
                            strcpy(e->membro5,"NULO");
                            return 1;
                        }
                        busca = busca->prox;
                    }

                    system("cls");
                    printf("\n\t\t\t\t\t\t\t\t-------------------------------------------\n");
                    printf("\t\t\t\t\t\t\t\t LISTA DE PALESTRANTES: \n");
                    ELEM *aux = ld->inicio;
                    while(aux!=NULL){
                        printf("\n\t\t\t\t\t\t\t\t - %s",aux->dados.nome);
                        aux = aux->prox;
                    }
            }

                break;
            case 4:

                while(on){
                    printf("\n\n\t\t\t\t\t\t\t\tDIGITE O NOME DO MEMBRO 1: ");
                    setbuf(stdin,NULL);
                    fgets(membro,19,stdin);
                    strupr(membro);

                    ELEM *busca = ld->inicio;
                    while(busca!=NULL){
                        if(strcmp(busca->dados.nome,membro)==0){
                            strcpy(e->membro1,membro);
                            on = 0;
                        }
                        busca = busca->prox;
                    }
                    system("cls");
                    printf("\n\t\t\t\t\t\t\t\t-------------------------------------------\n");
                    printf("\t\t\t\t\t\t\t\t LISTA DE PALESTRANTES: \n");
                    ELEM *aux = ld->inicio;
                    while(aux!=NULL){
                        printf("\n\t\t\t\t\t\t\t\t - %s",aux->dados.nome);
                        aux = aux->prox;
                    }
            }
            on = 1;
            while(on){
                    printf("\n\n\t\t\t\t\t\t\t\tDIGITE O NOME DO MEMBRO 2: ");
                    setbuf(stdin,NULL);
                    fgets(membro,19,stdin);
                    strupr(membro);

                    ELEM *busca = ld->inicio;
                    while(busca!=NULL){
                        if(strcmp(busca->dados.nome,membro)==0 && strcmp(e->membro1,membro)!=0){
                            strcpy(e->membro2,membro);
                            on = 0;
                        }
                        busca = busca->prox;
                    }

                    system("cls");
                    printf("\n\t\t\t\t\t\t\t\t-------------------------------------------\n");
                    printf("\t\t\t\t\t\t\t\t LISTA DE PALESTRANTES: \n");
                    ELEM *aux = ld->inicio;
                    while(aux!=NULL){
                        printf("\n\t\t\t\t\t\t\t\t - %s",aux->dados.nome);
                        aux = aux->prox;
                    }
            }
            on = 1;
            while(on){
                    printf("\n\n\t\t\t\t\t\t\t\tDIGITE O NOME DO MEMBRO 3: ");
                    setbuf(stdin,NULL);
                    fgets(membro,19,stdin);
                    strupr(membro);

                    ELEM *busca = ld->inicio;
                    while(busca!=NULL){
                        if(strcmp(busca->dados.nome,membro)==0 && strcmp(e->membro1,membro)!=0 && strcmp(e->membro2,membro)!=0){
                            strcpy(e->membro3,membro);
                            on = 0;
                        }
                        busca = busca->prox;
                    }

                    system("cls");
                    printf("\n\t\t\t\t\t\t\t\t-------------------------------------------\n");
                    printf("\t\t\t\t\t\t\t\t LISTA DE PALESTRANTES: \n");
                    ELEM *aux = ld->inicio;
                    while(aux!=NULL){
                        printf("\n\t\t\t\t\t\t\t\t - %s",aux->dados.nome);
                        aux = aux->prox;
                    }
            }
            on = 1;
            while(on){
                    printf("\n\n\t\t\t\t\t\t\t\tDIGITE O NOME DO MEMBRO 3: ");
                    setbuf(stdin,NULL);
                    fgets(membro,19,stdin);
                    strupr(membro);

                    ELEM *busca = ld->inicio;
                    while(busca!=NULL){
                        if(strcmp(busca->dados.nome,membro)==0 && strcmp(e->membro1,membro)!=0 && strcmp(e->membro2,membro)!=0 && strcmp(e->membro3,membro)!=0){
                            strcpy(e->membro4,membro);
                            strcpy(e->membro5,"NULO");
                            return 1;
                        }
                        busca = busca->prox;
                    }

                    system("cls");
                    printf("\n\t\t\t\t\t\t\t\t-------------------------------------------\n");
                    printf("\t\t\t\t\t\t\t\t LISTA DE PALESTRANTES: \n");
                    ELEM *aux = ld->inicio;
                    while(aux!=NULL){
                        printf("\n\t\t\t\t\t\t\t\t - %s",aux->dados.nome);
                        aux = aux->prox;
                    }
            }

                break;

            default:
                while(on){
                    printf("\n\n\t\t\t\t\t\t\t\tDIGITE O NOME DO MEMBRO 1: ");
                    setbuf(stdin,NULL);
                    fgets(membro,19,stdin);
                    strupr(membro);

                    ELEM *busca = ld->inicio;
                    while(busca!=NULL){
                        if(strcmp(busca->dados.nome,membro)==0){
                            strcpy(e->membro1,membro);
                            on = 0;
                        }
                        busca = busca->prox;
                    }
                    system("cls");
                    printf("\n\t\t\t\t\t\t\t\t-------------------------------------------\n");
                    printf("\t\t\t\t\t\t\t\t LISTA DE PALESTRANTES: \n");
                    ELEM *aux = ld->inicio;
                    while(aux!=NULL){
                        printf("\n\t\t\t\t\t\t\t\t - %s",aux->dados.nome);
                        aux = aux->prox;
                    }
            }
                on = 1;
                while(on){
                        printf("\n\n\t\t\t\t\t\t\t\tDIGITE O NOME DO MEMBRO 2: ");
                        setbuf(stdin,NULL);
                        fgets(membro,19,stdin);
                        strupr(membro);

                        ELEM *busca = ld->inicio;
                        while(busca!=NULL){
                            if(strcmp(busca->dados.nome,membro)==0 && strcmp(e->membro1,membro)!=0){
                                strcpy(e->membro2,membro);
                                on = 0;
                            }
                            busca = busca->prox;
                        }

                        system("cls");
                        printf("\n\t\t\t\t\t\t\t\t-------------------------------------------\n");
                        printf("\t\t\t\t\t\t\t\t LISTA DE PALESTRANTES: \n");
                        ELEM *aux = ld->inicio;
                        while(aux!=NULL){
                            printf("\n\t\t\t\t\t\t\t\t - %s",aux->dados.nome);
                            aux = aux->prox;
                        }
                }
                on = 1;
                while(on){
                    printf("\n\n\t\t\t\t\t\t\t\tDIGITE O NOME DO MEMBRO 3: ");
                    setbuf(stdin,NULL);
                    fgets(membro,19,stdin);
                    strupr(membro);

                    ELEM *busca = ld->inicio;
                    while(busca!=NULL){
                        if(strcmp(busca->dados.nome,membro)==0 && strcmp(e->membro1,membro)!=0 && strcmp(e->membro2,membro)!=0){
                            strcpy(e->membro3,membro);
                            on = 0;
                        }
                        busca = busca->prox;
                    }

                    system("cls");
                    printf("\n\t\t\t\t\t\t\t\t-------------------------------------------\n");
                    printf("\t\t\t\t\t\t\t\t LISTA DE PALESTRANTES: \n");
                    ELEM *aux = ld->inicio;
                    while(aux!=NULL){
                        printf("\n\t\t\t\t\t\t\t\t - %s",aux->dados.nome);
                        aux = aux->prox;
                    }
                }
                on = 1;
                while(on){
                    printf("\n\n\t\t\t\t\t\t\t\tDIGITE O NOME DO MEMBRO 3: ");
                    setbuf(stdin,NULL);
                    fgets(membro,19,stdin);
                    strupr(membro);

                    ELEM *busca = ld->inicio;
                    while(busca!=NULL){
                        if(strcmp(busca->dados.nome,membro)==0 && strcmp(e->membro1,membro)!=0 && strcmp(e->membro2,membro)!=0 && strcmp(e->membro3,membro)!=0){
                            strcpy(e->membro4,membro);
                            on = 0;
                        }
                        busca = busca->prox;
                    }

                    system("cls");
                    printf("\n\t\t\t\t\t\t\t\t-------------------------------------------\n");
                    printf("\t\t\t\t\t\t\t\t LISTA DE PALESTRANTES: \n");
                    ELEM *aux = ld->inicio;
                    while(aux!=NULL){
                        printf("\n\t\t\t\t\t\t\t\t - %s",aux->dados.nome);
                        aux = aux->prox;
                    }
                }
                on = 1;
                while(on){
                    printf("\n\n\t\t\t\t\t\t\t\tDIGITE O NOME DO MEMBRO 3: ");
                    setbuf(stdin,NULL);
                    fgets(membro,19,stdin);
                    strupr(membro);

                    ELEM *busca = ld->inicio;
                    while(busca!=NULL){
                        if(strcmp(busca->dados.nome,membro)==0 && strcmp(e->membro1,membro)!=0 && strcmp(e->membro2,membro)!=0 && strcmp(e->membro3,membro)!=0 && strcmp(e->membro4,membro)!=0){
                            strcpy(e->membro5,membro);
                            return 1;
                        }
                        busca = busca->prox;
                    }

                    system("cls");
                    printf("\n\t\t\t\t\t\t\t\t-------------------------------------------\n");
                    printf("\t\t\t\t\t\t\t\t LISTA DE PALESTRANTES: \n");
                    ELEM *aux = ld->inicio;
                    while(aux!=NULL){
                        printf("\n\t\t\t\t\t\t\t\t - %s",aux->dados.nome);
                        aux = aux->prox;
                    }
                    busca = busca->prox;
                }


                break;

            }
        }
        else{


                system("cls");
                printf("\n\t\t\t\t\t\t\t\t---------------------------\n");
                printf("\n\t\t\t\t\t\t\t\t CADASTRO DO EVENTO: \n\n");
                printf("\t\t\t\t\t\t\t\t DIGITE O TEMA: ");
                setbuf(stdin,NULL);
                fgets(e->tema,49,stdin);
                strupr(e->tema);

            ARQ *buscaTema = le->inicio;
            while(buscaTema!=NULL){
                if(strcmp(e->tema,buscaTema->dados.tema) == 0){
                    busca++;
                }
                buscaTema = buscaTema->prox;
            }
            if(busca > 0){
                system("cls");
                printf("\n\t\t\t\t\t\t\t\t---------------------------");
                printf("\n\t\t\t\t\t\t\t\t Tema ja esta cadastrado!");
                printf("\n\t\t\t\t\t\t\t\t---------------------------\n\n");
                return 0;
            }


           ELEM *membros = ld->inicio;
            while(membros!=NULL){
                quantMembros++;
                membros = membros->prox;
            }

            system("cls");
            printf("\n\t\t\t\t\t\t\t\t---------------------------\n");
            printf("\t\t\t\t\t\t\t\t ESCOLHA O LOCAL DO EVENTO: \n");
            printf("\n\t\t\t\t\t\t\t\t 1 - AUD 1\n\t\t\t\t\t\t\t\t 2 - AUD 2\n\t\t\t\t\t\t\t\t 3 - AUD 3");
            printf("\n\t\t\t\t\t\t\t\t 4 - SALA 1\n\t\t\t\t\t\t\t\t 5 - SALA 2\n\t\t\t\t\t\t\t\t 6 - SALA 3");
            printf("\n\t\t\t\t\t\t\t\t 7 - LAB 1\n\t\t\t\t\t\t\t\t 8 - LAB 2\n\t\t\t\t\t\t\t\t >> ");
            scanf("%d",&opcaoLocal);

            while(opcaoLocal<1 || opcaoLocal>8){
            system("cls");
            printf("\n\t\t\t\t\t\t\t\t---------------------------\n");
            printf("\t\t\t\t\t\t\t\t ESCOLHA O LOCAL DO EVENTO: \n");
            printf("\n\t\t\t\t\t\t\t\t 1 - AUD 1\n\t\t\t\t\t\t\t\t 2 - AUD 2\n\t\t\t\t\t\t\t\t 3 - AUD 3");
            printf("\n\t\t\t\t\t\t\t\t 4 - SALA 1\n\t\t\t\t\t\t\t\t 5 - SALA 2\n\t\t\t\t\t\t\t\t 6 - SALA 3");
            printf("\n\t\t\t\t\t\t\t\t 7 - LAB 1\n\t\t\t\t\t\t\t\t 8 - LAB 2\n\t\t\t\t\t\t\t\t >> ");
            scanf("%d",&opcaoLocal);
            }
            switch(opcaoLocal){
            case 1:
                strcpy(e->local,locais[0]);
                break;
            case 2:
                strcpy(e->local,locais[1]);
                break;
            case 3:
                strcpy(e->local,locais[2]);
                break;
            case 4:
                strcpy(e->local,locais[3]);
                break;
            case 5:
                strcpy(e->local,locais[4]);
                break;
            case 6:
                strcpy(e->local,locais[5]);
                break;
            case 7:
                strcpy(e->local,locais[6]);
                break;
            default:
                strcpy(e->local,locais[7]);
                break;

            }

            system("cls");
            printf("\n\t\t\t\t\t\t\t\t------------------------------\n");
            printf("\t\t\t\t\t\t\t\t CARGA HORARIA DO EVENTO: ");
            scanf("%d",&e->cargaH);

            while(e->cargaH < 20 || e->cargaH >60){
                system("cls");
                printf("\n\t\t\t\t\t\t\t\t------------------------------\n");
                printf("\t\t\t\t\t\t\t\t CARGA HORARIA DO EVENTO: ");
                scanf("%d",&e->cargaH);
            }

            system("cls");
            printf("\n\t\t\t\t\t\t\t\t------------------------------\n");
            printf("\n\t\t\t\t\t\t\t\t HORARIO DO EVENTO: ");
            setbuf(stdin,NULL);
            scanf("%d %d",&e->horario.hora,&e->horario.minuto);
            while(e->horario.hora<11 || e->horario.hora > 17 || e->horario.minuto < 0 || e->horario.minuto > 59){
                system("cls");
                printf("\n\t\t\t\t\t\t\t\t---------------------------");
                printf("\n\t\t\t\t\t\t\t\t Horario invalido!");
                printf("\n\t\t\t\t\t\t\t\t---------------------------\n\n");
                system("pause");
                system("cls");
                printf("\n\t\t\t\t\t\t\t\t---------------------------\n");
                printf("\t\t\t\t\t\t\t\t HORARIO DO EVENTO: ");
                setbuf(stdin,NULL);
                scanf("%d %d",&e->horario.hora,&e->horario.minuto);
            }

            system("cls");
            printf("\n\t\t\t\t\t\t\t\t-------------------------------------------\n");
            printf("\t\t\t\t\t\t\t\t LISTA DE PALESTRANTES: \n");

            ELEM *aux = ld->inicio;
            while(aux!=NULL){
                printf("\n\t\t\t\t\t\t\t\t %d - %s",i,aux->dados.nome);
                i++;
                aux = aux->prox;
            }
            printf("\n\n\t\t\t\t\t\t\t\tDIGITE A QUANTIDADE DE MEMBROS: ");
            scanf("%d",&numMembros);
            while(numMembros < 0 || numMembros > quantMembros || numMembros > 5){
                system("cls");
                printf("\n\t\t\t\t\t\t\t\t-----------------------------");
                printf("\n\t\t\t\t\t\t\t\t Numero de membros invalido!");
                printf("\n\t\t\t\t\t\t\t\t-----------------------------\n\n");
                system("pause");
                system("cls");
                printf("\n\t\t\t\t\t\t\t\t-------------------------------------------\n");
                printf("\t\t\t\t\t\t\t\t LISTA DE PALESTRANTES: \n");
                ELEM *aux = ld->inicio;
                i = 1;
                while(aux!=NULL){
                    printf("\n\t\t\t\t\t\t\t\t %d - %s",i,aux->dados.nome);
                    i++;
                    aux = aux->prox;
                }
                printf("\n\n\t\t\t\t\t\t\t\tDIGITE A QUANTIDADE DE MEMBROS: ");
                scanf("%d",&numMembros);
            }
            int on = 1;
            switch(numMembros){
            case 1:

            while(on){
                    printf("\n\n\t\t\t\t\t\t\t\tDIGITE O NOME DO MEMBRO: ");
                    setbuf(stdin,NULL);
                    fgets(membro,19,stdin);
                    strupr(membro);

                    ELEM *busca = ld->inicio;
                    while(busca!=NULL){
                        if(strcmp(busca->dados.nome,membro)==0){
                            strcpy(e->membro1,membro);
                            strcpy(e->membro2,"NULO");
                            strcpy(e->membro3,"NULO");
                            strcpy(e->membro4,"NULO");
                            strcpy(e->membro5,"NULO");
                            return 1;
                        }
                        busca = busca->prox;
                    }
                    system("cls");
                    printf("\n\t\t\t\t\t\t\t\t-------------------------------------------\n");
                    printf("\t\t\t\t\t\t\t\t LISTA DE PALESTRANTES: \n");
                    ELEM *aux = ld->inicio;
                    while(aux!=NULL){
                        printf("\n\t\t\t\t\t\t\t\t - %s",aux->dados.nome);
                        aux = aux->prox;
                    }
            }

                break;

            case 2:
            while(on){
                    printf("\n\n\t\t\t\t\t\t\t\tDIGITE O NOME DO MEMBRO 1: ");
                    setbuf(stdin,NULL);
                    fgets(membro,19,stdin);
                    strupr(membro);

                    ELEM *busca = ld->inicio;
                    while(busca!=NULL){
                        if(strcmp(busca->dados.nome,membro)==0){
                            strcpy(e->membro1,membro);
                            on = 0;
                        }
                        busca = busca->prox;
                    }
                    system("cls");
                    printf("\n\t\t\t\t\t\t\t\t-------------------------------------------\n");
                    printf("\t\t\t\t\t\t\t\t LISTA DE PALESTRANTES: \n");
                    ELEM *aux = ld->inicio;
                    while(aux!=NULL){
                        printf("\n\t\t\t\t\t\t\t\t - %s",aux->dados.nome);
                        aux = aux->prox;
                    }
            }
            on = 1;
            while(on){
                    printf("\n\n\t\t\t\t\t\t\t\tDIGITE O NOME DO MEMBRO 2: ");
                    setbuf(stdin,NULL);
                    fgets(membro,19,stdin);
                    strupr(membro);

                    ELEM *busca = ld->inicio;
                    while(busca!=NULL){
                        if(strcmp(busca->dados.nome,membro)==0 && strcmp(e->membro1,membro)!=0){
                            strcpy(e->membro2,membro);
                            strcpy(e->membro3,"NULO");
                            strcpy(e->membro4,"NULO");
                            strcpy(e->membro5,"NULO");
                            return 1;
                        }
                        busca = busca->prox;
                    }
                    system("cls");
                    printf("\n\t\t\t\t\t\t\t\t-------------------------------------------\n");
                    printf("\t\t\t\t\t\t\t\t LISTA DE PALESTRANTES: \n");
                    ELEM *aux = ld->inicio;
                    while(aux!=NULL){
                        printf("\n\t\t\t\t\t\t\t\t - %s",aux->dados.nome);
                        aux = aux->prox;
                    }
            }

                break;

            case 3:
                while(on){
                    printf("\n\n\t\t\t\t\t\t\t\tDIGITE O NOME DO MEMBRO 1: ");
                    setbuf(stdin,NULL);
                    fgets(membro,19,stdin);
                    strupr(membro);

                    ELEM *busca = ld->inicio;
                    while(busca!=NULL){
                        if(strcmp(busca->dados.nome,membro)==0){
                            strcpy(e->membro1,membro);
                            on = 0;
                        }
                        busca = busca->prox;
                    }
                    system("cls");
                    printf("\n\t\t\t\t\t\t\t\t-------------------------------------------\n");
                    printf("\t\t\t\t\t\t\t\t LISTA DE PALESTRANTES: \n");
                    ELEM *aux = ld->inicio;
                    while(aux!=NULL){
                        printf("\n\t\t\t\t\t\t\t\t - %s",aux->dados.nome);
                        aux = aux->prox;
                    }
            }
            on = 1;
            while(on){
                    printf("\n\n\t\t\t\t\t\t\t\tDIGITE O NOME DO MEMBRO 2: ");
                    setbuf(stdin,NULL);
                    fgets(membro,19,stdin);
                    strupr(membro);

                    ELEM *busca = ld->inicio;
                    while(busca!=NULL){
                        if(strcmp(busca->dados.nome,membro)==0 && strcmp(e->membro1,membro)!=0){
                            strcpy(e->membro2,membro);
                            on = 0;
                        }
                        busca = busca->prox;
                    }

                    system("cls");
                    printf("\n\t\t\t\t\t\t\t\t-------------------------------------------\n");
                    printf("\t\t\t\t\t\t\t\t LISTA DE PALESTRANTES: \n");
                    ELEM *aux = ld->inicio;
                    while(aux!=NULL){
                        printf("\n\t\t\t\t\t\t\t\t - %s",aux->dados.nome);
                        aux = aux->prox;
                    }
            }
            on = 1;
            while(on){
                    printf("\n\n\t\t\t\t\t\t\t\tDIGITE O NOME DO MEMBRO 3: ");
                    setbuf(stdin,NULL);
                    fgets(membro,19,stdin);
                    strupr(membro);

                    ELEM *busca = ld->inicio;
                    while(busca!=NULL){
                        if(strcmp(busca->dados.nome,membro)==0 && strcmp(e->membro1,membro)!=0 && strcmp(e->membro2,membro)!=0){
                            strcpy(e->membro3,membro);
                            strcpy(e->membro4,"NULO");
                            strcpy(e->membro5,"NULO");
                            return 1;
                        }
                        busca = busca->prox;
                    }

                    system("cls");
                    printf("\n\t\t\t\t\t\t\t\t-------------------------------------------\n");
                    printf("\t\t\t\t\t\t\t\t LISTA DE PALESTRANTES: \n");
                    ELEM *aux = ld->inicio;
                    while(aux!=NULL){
                        printf("\n\t\t\t\t\t\t\t\t - %s",aux->dados.nome);
                        aux = aux->prox;
                    }
            }

                break;
            case 4:

                while(on){
                    printf("\n\n\t\t\t\t\t\t\t\tDIGITE O NOME DO MEMBRO 1: ");
                    setbuf(stdin,NULL);
                    fgets(membro,19,stdin);
                    strupr(membro);

                    ELEM *busca = ld->inicio;
                    while(busca!=NULL){
                        if(strcmp(busca->dados.nome,membro)==0){
                            strcpy(e->membro1,membro);
                            on = 0;
                        }
                        busca = busca->prox;
                    }
                    system("cls");
                    printf("\n\t\t\t\t\t\t\t\t-------------------------------------------\n");
                    printf("\t\t\t\t\t\t\t\t LISTA DE PALESTRANTES: \n");
                    ELEM *aux = ld->inicio;
                    while(aux!=NULL){
                        printf("\n\t\t\t\t\t\t\t\t - %s",aux->dados.nome);
                        aux = aux->prox;
                    }
            }
            on = 1;
            while(on){
                    printf("\n\n\t\t\t\t\t\t\t\tDIGITE O NOME DO MEMBRO 2: ");
                    setbuf(stdin,NULL);
                    fgets(membro,19,stdin);
                    strupr(membro);

                    ELEM *busca = ld->inicio;
                    while(busca!=NULL){
                        if(strcmp(busca->dados.nome,membro)==0 && strcmp(e->membro1,membro)!=0){
                            strcpy(e->membro2,membro);
                            on = 0;
                        }
                        busca = busca->prox;
                    }

                    system("cls");
                    printf("\n\t\t\t\t\t\t\t\t-------------------------------------------\n");
                    printf("\t\t\t\t\t\t\t\t LISTA DE PALESTRANTES: \n");
                    ELEM *aux = ld->inicio;
                    while(aux!=NULL){
                        printf("\n\t\t\t\t\t\t\t\t - %s",aux->dados.nome);
                        aux = aux->prox;
                    }
            }
            on = 1;
            while(on){
                    printf("\n\n\t\t\t\t\t\t\t\tDIGITE O NOME DO MEMBRO 3: ");
                    setbuf(stdin,NULL);
                    fgets(membro,19,stdin);
                    strupr(membro);

                    ELEM *busca = ld->inicio;
                    while(busca!=NULL){
                        if(strcmp(busca->dados.nome,membro)==0 && strcmp(e->membro1,membro)!=0 && strcmp(e->membro2,membro)!=0){
                            strcpy(e->membro3,membro);
                            on = 0;
                        }
                        busca = busca->prox;
                    }

                    system("cls");
                    printf("\n\t\t\t\t\t\t\t\t-------------------------------------------\n");
                    printf("\t\t\t\t\t\t\t\t LISTA DE PALESTRANTES: \n");
                    ELEM *aux = ld->inicio;
                    while(aux!=NULL){
                        printf("\n\t\t\t\t\t\t\t\t - %s",aux->dados.nome);
                        aux = aux->prox;
                    }
            }
            on = 1;
            while(on){
                    printf("\n\n\t\t\t\t\t\t\t\tDIGITE O NOME DO MEMBRO 3: ");
                    setbuf(stdin,NULL);
                    fgets(membro,19,stdin);
                    strupr(membro);

                    ELEM *busca = ld->inicio;
                    while(busca!=NULL){
                        if(strcmp(busca->dados.nome,membro)==0 && strcmp(e->membro1,membro)!=0 && strcmp(e->membro2,membro)!=0 && strcmp(e->membro3,membro)!=0){
                            strcpy(e->membro4,membro);
                            strcpy(e->membro5,"NULO");
                            return 1;
                        }
                        busca = busca->prox;
                    }

                    system("cls");
                    printf("\n\t\t\t\t\t\t\t\t-------------------------------------------\n");
                    printf("\t\t\t\t\t\t\t\t LISTA DE PALESTRANTES: \n");
                    ELEM *aux = ld->inicio;
                    while(aux!=NULL){
                        printf("\n\t\t\t\t\t\t\t\t - %s",aux->dados.nome);
                        aux = aux->prox;
                    }
            }

                break;

            default:
                while(on){
                    printf("\n\n\t\t\t\t\t\t\t\tDIGITE O NOME DO MEMBRO 1: ");
                    setbuf(stdin,NULL);
                    fgets(membro,19,stdin);
                    strupr(membro);

                    ELEM *busca = ld->inicio;
                    while(busca!=NULL){
                        if(strcmp(busca->dados.nome,membro)==0){
                            strcpy(e->membro1,membro);
                            on = 0;
                        }
                        busca = busca->prox;
                    }
                    system("cls");
                    printf("\n\t\t\t\t\t\t\t\t-------------------------------------------\n");
                    printf("\t\t\t\t\t\t\t\t LISTA DE PALESTRANTES: \n");
                    ELEM *aux = ld->inicio;
                    while(aux!=NULL){
                        printf("\n\t\t\t\t\t\t\t\t - %s",aux->dados.nome);
                        aux = aux->prox;
                    }
            }
                on = 1;
                while(on){
                        printf("\n\n\t\t\t\t\t\t\t\tDIGITE O NOME DO MEMBRO 2: ");
                        setbuf(stdin,NULL);
                        fgets(membro,19,stdin);
                        strupr(membro);

                        ELEM *busca = ld->inicio;
                        while(busca!=NULL){
                            if(strcmp(busca->dados.nome,membro)==0 && strcmp(e->membro1,membro)!=0){
                                strcpy(e->membro2,membro);
                                on = 0;
                            }
                            busca = busca->prox;
                        }

                        system("cls");
                        printf("\n\t\t\t\t\t\t\t\t-------------------------------------------\n");
                        printf("\t\t\t\t\t\t\t\t LISTA DE PALESTRANTES: \n");
                        ELEM *aux = ld->inicio;
                        while(aux!=NULL){
                            printf("\n\t\t\t\t\t\t\t\t - %s",aux->dados.nome);
                            aux = aux->prox;
                        }
                }
                on = 1;
                while(on){
                    printf("\n\n\t\t\t\t\t\t\t\tDIGITE O NOME DO MEMBRO 3: ");
                    setbuf(stdin,NULL);
                    fgets(membro,19,stdin);
                    strupr(membro);

                    ELEM *busca = ld->inicio;
                    while(busca!=NULL){
                        if(strcmp(busca->dados.nome,membro)==0 && strcmp(e->membro1,membro)!=0 && strcmp(e->membro2,membro)!=0){
                            strcpy(e->membro3,membro);
                            on = 0;
                        }
                        busca = busca->prox;
                    }

                    system("cls");
                    printf("\n\t\t\t\t\t\t\t\t-------------------------------------------\n");
                    printf("\t\t\t\t\t\t\t\t LISTA DE PALESTRANTES: \n");
                    ELEM *aux = ld->inicio;
                    while(aux!=NULL){
                        printf("\n\t\t\t\t\t\t\t\t - %s",aux->dados.nome);
                        aux = aux->prox;
                    }
                }
                on = 1;
                while(on){
                    printf("\n\n\t\t\t\t\t\t\t\tDIGITE O NOME DO MEMBRO 3: ");
                    setbuf(stdin,NULL);
                    fgets(membro,19,stdin);
                    strupr(membro);

                    ELEM *busca = ld->inicio;
                    while(busca!=NULL){
                        if(strcmp(busca->dados.nome,membro)==0 && strcmp(e->membro1,membro)!=0 && strcmp(e->membro2,membro)!=0 && strcmp(e->membro3,membro)!=0){
                            strcpy(e->membro4,membro);
                            on = 0;
                        }
                        busca = busca->prox;
                    }

                    system("cls");
                    printf("\n\t\t\t\t\t\t\t\t-------------------------------------------\n");
                    printf("\t\t\t\t\t\t\t\t LISTA DE PALESTRANTES: \n");
                    ELEM *aux = ld->inicio;
                    while(aux!=NULL){
                        printf("\n\t\t\t\t\t\t\t\t - %s",aux->dados.nome);
                        aux = aux->prox;
                    }
                }
                on = 1;
                while(on){
                    printf("\n\n\t\t\t\t\t\t\t\tDIGITE O NOME DO MEMBRO 3: ");
                    setbuf(stdin,NULL);
                    fgets(membro,19,stdin);
                    strupr(membro);

                    ELEM *busca = ld->inicio;
                    while(busca!=NULL){
                        if(strcmp(busca->dados.nome,membro)==0 && strcmp(e->membro1,membro)!=0 && strcmp(e->membro2,membro)!=0 && strcmp(e->membro3,membro)!=0 && strcmp(e->membro4,membro)!=0){
                            strcpy(e->membro5,membro);
                            return 1;
                        }
                        busca = busca->prox;
                    }

                    system("cls");
                    printf("\n\t\t\t\t\t\t\t\t-------------------------------------------\n");
                    printf("\t\t\t\t\t\t\t\t LISTA DE PALESTRANTES: \n");
                    ELEM *aux = ld->inicio;
                    while(aux!=NULL){
                        printf("\n\t\t\t\t\t\t\t\t - %s",aux->dados.nome);
                        aux = aux->prox;
                    }
                    busca = busca->prox;
                }


                break;

            }



        }
        }
        else{
                system("cls");
                printf("\n\t\t\t\t\t\t\t\t---------------------------------");
                printf("\n\t\t\t\t\t\t\t\t NAO HA PALESTRANTES CADASTRADOS");
                printf("\n\t\t\t\t\t\t\t\t---------------------------------\n\n");
                return 0;
        }

    }
}

void mostrarPalestra(LISTAE *le){  //Funcao de listagem dos congressistas cadastrados

    if(le == NULL){
    }
    else{
        if(le->inicio==NULL){
            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
            printf("\n\t\t\t\t\t\t\t\t SEM PALESTRAS CADASTRADAS!");
            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
        }
        else{
            ARQ* aux = le->inicio;
            printf("\n\n\t\t\t\t\t\t\t\tLISTA PALESTRAS: \n");
            while(aux != NULL){
                if(aux->dados.horario.minuto <10){
                printf("\n\n\t\t\t\t\t\t\t\t-----------------------------------\n");
                printf("\n\t\t\t\t\t\t\t\t PALESTRANTE: %s\n",aux->dados.palestrante);
                printf("\n\t\t\t\t\t\t\t\t TEMA: %s\n",aux->dados.tema);
                printf("\n\t\t\t\t\t\t\t\t LOCAL: %s\n",aux->dados.local);
                printf("\n\t\t\t\t\t\t\t\t HORARIO: %d:0%d\n",aux->dados.horario.hora,aux->dados.horario.minuto);
                printf("\n\t\t\t\t\t\t\t\t CARGA HORARIA: %d HRS\n",aux->dados.cargaH);
                printf("\n\t\t\t\t\t\t\t\t-----------------------------------\n");
                }
                else{
                    printf("\n\n\t\t\t\t\t\t\t\t-----------------------------------\n");
                    printf("\n\t\t\t\t\t\t\t\t PALESTRANTE: %s\n",aux->dados.palestrante);
                    printf("\n\t\t\t\t\t\t\t\t TEMA: %s\n",aux->dados.tema);
                    printf("\n\t\t\t\t\t\t\t\t LOCAL: %s\n",aux->dados.local);
                    printf("\n\t\t\t\t\t\t\t\t HORARIO: %d:%d\n",aux->dados.horario.hora,aux->dados.horario.minuto);
                    printf("\n\t\t\t\t\t\t\t\t CARGA HORARIA: %d\n",aux->dados.cargaH);
                    printf("\n\t\t\t\t\t\t\t\t-----------------------------------\n");
                }
                aux = aux->prox;
            }
        }
    }
}

void mostrarCurso(LISTAE *le){  //Funcao de listagem dos congressistas cadastrados

    if(le == NULL){
    }
    else{
        if(le->inicio==NULL){
            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
            printf("\n\t\t\t\t\t\t\t\t SEM CURSOS CADASTRADOS!");
            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
        }
        else{
            ARQ* aux = le->inicio;
            printf("\n\n\t\t\t\t\t\t\t\tLISTA CURSOS: \n");
            while(aux != NULL){
                if(aux->dados.horario.minuto <10){
                printf("\n\n\t\t\t\t\t\t\t\t-----------------------------------\n");
                printf("\n\t\t\t\t\t\t\t\t PALESTRANTE: %s\n",aux->dados.palestrante);
                printf("\n\t\t\t\t\t\t\t\t TEMA: %s\n",aux->dados.tema);
                printf("\n\t\t\t\t\t\t\t\t LOCAL: %s\n",aux->dados.local);
                printf("\n\t\t\t\t\t\t\t\t HORARIO: %d:0%d\n",aux->dados.horario.hora,aux->dados.horario.minuto);
                printf("\n\t\t\t\t\t\t\t\t CARGA HORARIA: %d HRS\n",aux->dados.cargaH);
                printf("\n\t\t\t\t\t\t\t\t-----------------------------------\n");
                }
                else{
                    printf("\n\n\t\t\t\t\t\t\t\t-----------------------------------\n");
                    printf("\n\t\t\t\t\t\t\t\t PALESTRANTE: %s\n",aux->dados.palestrante);
                    printf("\n\t\t\t\t\t\t\t\t TEMA: %s\n",aux->dados.tema);
                    printf("\n\t\t\t\t\t\t\t\t LOCAL: %s\n",aux->dados.local);
                    printf("\n\t\t\t\t\t\t\t\t HORARIO: %d:%d\n",aux->dados.horario.hora,aux->dados.horario.minuto);
                    printf("\n\t\t\t\t\t\t\t\t CARGA HORARIA: %d\n",aux->dados.cargaH);
                    printf("\n\t\t\t\t\t\t\t\t-----------------------------------\n");
                }
                aux = aux->prox;
            }
        }
    }
}

void mostrarOficina(LISTAE *le){  //Funcao de listagem dos congressistas cadastrados

    if(le == NULL){
    }
    else{
        if(le->inicio==NULL){
            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
            printf("\n\t\t\t\t\t\t\t\t SEM OFICINAS CADASTRADAS!");
            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
        }
        else{
            ARQ* aux = le->inicio;
            printf("\n\n\t\t\t\t\t\t\t\tLISTA OFICINAS: \n");
            while(aux != NULL){
                if(aux->dados.horario.minuto <10){
                printf("\n\n\t\t\t\t\t\t\t\t-----------------------------------\n");
                printf("\n\t\t\t\t\t\t\t\t PALESTRANTE: %s\n",aux->dados.palestrante);
                printf("\n\t\t\t\t\t\t\t\t TEMA: %s\n",aux->dados.tema);
                printf("\n\t\t\t\t\t\t\t\t LOCAL: %s\n",aux->dados.local);
                printf("\n\t\t\t\t\t\t\t\t HORARIO: %d:0%d\n",aux->dados.horario.hora,aux->dados.horario.minuto);
                printf("\n\t\t\t\t\t\t\t\t CARGA HORARIA: %d HRS\n",aux->dados.cargaH);
                printf("\n\t\t\t\t\t\t\t\t-----------------------------------\n");
                }
                else{
                    printf("\n\n\t\t\t\t\t\t\t\t-----------------------------------\n");
                    printf("\n\t\t\t\t\t\t\t\t PALESTRANTE: %s\n",aux->dados.palestrante);
                    printf("\n\t\t\t\t\t\t\t\t TEMA: %s\n",aux->dados.tema);
                    printf("\n\t\t\t\t\t\t\t\t LOCAL: %s\n",aux->dados.local);
                    printf("\n\t\t\t\t\t\t\t\t HORARIO: %d:%d\n",aux->dados.horario.hora,aux->dados.horario.minuto);
                    printf("\n\t\t\t\t\t\t\t\t CARGA HORARIA: %d\n",aux->dados.cargaH);
                    printf("\n\t\t\t\t\t\t\t\t-----------------------------------\n");
                }
                aux = aux->prox;
            }
        }
    }
}

void mostrarGrupoD(LISTAE *le){  //Funcao de listagem dos congressistas cadastrados

    if(le == NULL){
    }
    else{
        if(le->inicio==NULL){
            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
            printf("\n\t\t\t\t\t\t\t\t SEM GRUPOS CADASTRADOS!");
            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
        }
        else{
            ARQ* aux = le->inicio;
            printf("\n\n\t\t\t\t\t\t\t\tLISTA OFICINAS: \n");
            while(aux != NULL){
                if(aux->dados.horario.minuto<10){
                printf("\n\n\t\t\t\t\t\t\t\t-----------------------------------\n");
                printf("\n\t\t\t\t\t\t\t\t MEMBRO 1: %s\n",aux->dados.membro1);
                if(strcmp(aux->dados.membro2,"NULO")!=0){
                   printf("\n\t\t\t\t\t\t\t\t MEMBRO 2: %s\n",aux->dados.membro2);
                }
                if(strcmp(aux->dados.membro3,"NULO")!=0){
                   printf("\n\t\t\t\t\t\t\t\t MEMBRO 3: %s\n",aux->dados.membro3);
                }
                if(strcmp(aux->dados.membro4,"NULO")!=0){
                   printf("\n\t\t\t\t\t\t\t\t MEMBRO 4: %s\n",aux->dados.membro4);
                }
                if(strcmp(aux->dados.membro5,"NULO")!=0){
                   printf("\n\t\t\t\t\t\t\t\t MEMBRO 5: %s\n",aux->dados.membro5);
                }
                printf("\n\t\t\t\t\t\t\t\t TEMA: %s\n",aux->dados.tema);
                printf("\n\t\t\t\t\t\t\t\t LOCAL: %s\n",aux->dados.local);
                printf("\n\t\t\t\t\t\t\t\t HORARIO: %d:0%d\n",aux->dados.horario.hora,aux->dados.horario.minuto);
                printf("\n\t\t\t\t\t\t\t\t CARGA HORARIA: %d HRS\n",aux->dados.cargaH);
                printf("\n\t\t\t\t\t\t\t\t-----------------------------------\n");
                }
                else{
                    printf("\n\n\t\t\t\t\t\t\t\t-----------------------------------\n");
                    printf("\n\t\t\t\t\t\t\t\t MEMBRO 1: %s\n",aux->dados.membro1);
                    if(strcmp(aux->dados.membro2,"NULO")!=0){
                        printf("\n\t\t\t\t\t\t\t\t MEMBRO 2: %s\n",aux->dados.membro2);
                    }
                    if(strcmp(aux->dados.membro3,"NULO")!=0){
                        printf("\n\t\t\t\t\t\t\t\t MEMBRO 3: %s\n",aux->dados.membro3);
                    }
                    if(strcmp(aux->dados.membro4,"NULO")!=0){
                        printf("\n\t\t\t\t\t\t\t\t MEMBRO 4: %s\n",aux->dados.membro4);
                    }
                    if(strcmp(aux->dados.membro5,"NULO")!=0){
                        printf("\n\t\t\t\t\t\t\t\t MEMBRO 5: %s\n",aux->dados.membro5);
                    }
                    printf("\n\t\t\t\t\t\t\t\t TEMA: %s\n",aux->dados.tema);
                    printf("\n\t\t\t\t\t\t\t\t LOCAL: %s\n",aux->dados.local);
                    printf("\n\t\t\t\t\t\t\t\t HORARIO: %d:%d\n",aux->dados.horario.hora,aux->dados.horario.minuto);
                    printf("\n\t\t\t\t\t\t\t\t CARGA HORARIA: %d HRS\n",aux->dados.cargaH);
                    printf("\n\t\t\t\t\t\t\t\t-----------------------------------\n");
                }
                aux = aux->prox;
            }
        }
    }
}

void removerEvento(LISTAE *le){ //Funcao para remover dados na lista
    char nomeBusca[50];
    if(le==NULL){
    }
    else{
        if(le->inicio == NULL){
            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
            printf("\n\t\t\t\t\t\t\t\t SEM EVENTOS CADASTRADOS!");
            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
        }
        else{
            printf("\n\n\t\t\t\t\t\t\t\t--------------------------------------------\n");
            printf("\n\n\t\t\t\t\t\t\t\tDIGITE O EVENTO QUE DESEJA REMOVER: \n\n");
            printf("\n\t\t\t\t\t\t\t\t EVENTOS CADASTRADOS: \n");
            ARQ *lista = le->inicio;
            while(lista!=NULL){
                printf("\n\t\t\t\t\t\t\t\t - %s",lista->dados.tema);
                lista = lista->prox;
            }
            printf("\n\n\t\t\t\t\t\t\t\tNOME DO EVENTO: ");
            setbuf(stdin,NULL);
            fgets(nomeBusca,49,stdin);
            strupr(nomeBusca);

            ARQ *aux = le->inicio;
            if(strcmp(nomeBusca,aux->dados.tema)== 0){//Se estiver no inicio da lista
                le->inicio=aux->prox;
                if(aux->prox!=NULL)
                    aux->prox->ant=NULL;
                free(aux);
            }
            else{//Se estiver no meio ou no fim
                ARQ *ant;
                while((aux!=NULL) && strcmp(nomeBusca,aux->dados.tema)!=0){
                    ant=aux;
                    aux=aux->prox;
                }
                if(aux==NULL){ //Caso o nome digitado nao esteja na lista
                    system("cls");
                    printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
                    printf("\n\t\t\t\t\t\t\t\t EVENTO NAO ENCONTRADO!");
                    printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
                    return;
                }
                ant->prox = aux->prox;
                if(aux->prox!=NULL)             //Remorcao do dado.
                    aux->prox->ant=ant;
                free(aux);
            }
            system("cls");
            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
            printf("\n\t\t\t\t\t\t\t\t EVENTO REMOVIDO!");
            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
        }
    }

}

void alterarEventoT(LISTAE *le , LISTAD *ld){  //Funcao responsavel em editar os dados de uma lista
    char nomeBusca[50], nomeNovo[50] , palestrante[20];
    int opAlterar , achei = 0 , opcaoLocal;
    char locais[8][30] = {"AUD 1","AUD 2","AUD 3","SALA 1","SALA 2","SALA 3","LAB 1","LAB 2"};
    if(le==NULL){
            return;
    }
    else{
        if(le->inicio == NULL){ //Caso nao tenha nada na lista
            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
            printf("\n\t\t\t\t\t\t\t\t SEM EVENTOS CADASTRADOS!");
            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
        }
        else{
            printf("\n\n\t\t\t\t\t\t\t\t--------------------------------------------\n");
            printf("\n\n\t\t\t\t\t\t\t\t DIGITE O EVENTO QUE DESEJA ALTERAR: \n\n");
            printf("\n\t\t\t\t\t\t\t\t EVENTOS CADASTRADOS: \n");
            ARQ *lista = le->inicio;
            while(lista!=NULL){
                printf("\n\t\t\t\t\t\t\t\t - %s",lista->dados.tema);
                lista = lista->prox;
            }
            printf("\n\n\t\t\t\t\t\t\t\t TEMA DO EVENTO: ");
            setbuf(stdin,NULL);
            fgets(nomeBusca,49,stdin);
            strupr(nomeBusca);
            ARQ *aux = le->inicio;
            while(aux!=NULL){       //Busca pelo nome digitado
                if(strcmp(nomeBusca,aux->dados.tema)==0){ //Caso ache o nome opcoes de alteracoes
                        achei = 1;
                        system("cls");
                        printf("\n\n\t\t\t\t\t\t\t\t--------------------------------------------\n");
                        printf("\n\n\t\t\t\t\t\t\t\tDIGITE O QUE DESEJA ALTERAR: \n\n");
                        printf("\t\t\t\t\t\t\t\t1 - TEMA \n\t\t\t\t\t\t\t\t2 - LOCAL");
                        printf("\n\t\t\t\t\t\t\t\t3 - HORARIO\n\t\t\t\t\t\t\t\t4 - CARGA HORARIA ");
                        printf("\n\t\t\t\t\t\t\t\t5 - PALESTRANTE\n\n\t\t\t\t\t\t\t\t>> ");
                        scanf("%d",&opAlterar);
                    while(opAlterar<1 || opAlterar>5){
                        system("cls");
                        printf("\n\n\t\t\t\t\t\t\t\t--------------------------------------------\n");
                        printf("\n\n\t\t\t\t\t\t\t\tDIGITE O QUE DESEJA ALTERAR: \n\n");
                        printf("\t\t\t\t\t\t\t\t1 - TEMA \n\t\t\t\t\t\t\t\t2 - LOCAL");
                        printf("\n\t\t\t\t\t\t\t\t3 - HORARIO\n\t\t\t\t\t\t\t\t4 - CARGA HORARIA ");
                        printf("\n\t\t\t\t\t\t\t\t5 - PALESTRANTE\n\n\t\t\t\t\t\t\t\t>> ");
                        scanf("%d",&opAlterar);
                    }
                    switch(opAlterar){
                        case 1: //Opcao para mudar o nome

                            system("cls");
                            printf("\n\n\t\t\t\t\t\t\t\t--------------------------------------------\n");
                            printf("\n\n\t\t\t\t\t\t\t\t DIGITE O NOVO TEMA: \n\n");
                            printf("\t\t\t\t\t\t\t\t TEMA: ");
                            setbuf(stdin,NULL);
                            fgets(nomeNovo,49,stdin);
                            strupr(nomeNovo);
                            ARQ *aux2 = le->inicio;
                            while(aux2!=NULL){
                                if(strcmp(nomeNovo,aux2->dados.tema)==0){ //Caso edite para um nome ja cadastrado
                                    system("cls");
                                    printf("\n\t\t\t\t\t\t\t\t---------------------------");
                                    printf("\n\t\t\t\t\t\t\t\t Tema ja esta cadastrado!");
                                    printf("\n\t\t\t\t\t\t\t\t---------------------------\n\n");
                                    return;
                                }
                                aux2=aux2->prox;
                            }
                            strcpy(aux->dados.tema,nomeNovo);
                            system("cls");
                            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
                            printf("\n\t\t\t\t\t\t\t\t EVENTO ALTERADO!");
                            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
                            break;
                        case 2:
                            system("cls");
                            printf("\n\n\t\t\t\t\t\t\t\t--------------------------------------------\n");
                            printf("\n\n\t\t\t\t\t\t\t\t DIGITE O NOVO LOCAL: \n\n");
                            printf("\n\t\t\t\t\t\t\t\t 1 - AUD 1\n\t\t\t\t\t\t\t\t 2 - AUD 2\n\t\t\t\t\t\t\t\t 3 - AUD 3");
                            printf("\n\t\t\t\t\t\t\t\t 4 - SALA 1\n\t\t\t\t\t\t\t\t 5 - SALA 2\n\t\t\t\t\t\t\t\t 6 - SALA 3");
                            printf("\n\t\t\t\t\t\t\t\t 7 - LAB 1\n\t\t\t\t\t\t\t\t 8 - LAB 2\n\t\t\t\t\t\t\t\t >> ");
                            scanf("%d",&opcaoLocal);
                            while(opcaoLocal<1 || opcaoLocal>8){
                                system("cls");
                                printf("\n\t\t\t\t\t\t\t\t---------------------------\n");
                                printf("\t\t\t\t\t\t\t\t ESCOLHA O LOCAL DO EVENTO: \n");
                                printf("\n\t\t\t\t\t\t\t\t 1 - AUD 1\n\t\t\t\t\t\t\t\t 2 - AUD 2\n\t\t\t\t\t\t\t\t 3 - AUD 3");
                                printf("\n\t\t\t\t\t\t\t\t 4 - SALA 1\n\t\t\t\t\t\t\t\t 5 - SALA 2\n\t\t\t\t\t\t\t\t 6 - SALA 3");
                                printf("\n\t\t\t\t\t\t\t\t 7 - LAB 1\n\t\t\t\t\t\t\t\t 8 - LAB 2\n\t\t\t\t\t\t\t\t >> ");
                                scanf("%d",&opcaoLocal);
                            }
                            switch(opcaoLocal){
                            case 1:
                                strcpy(aux->dados.local,locais[0]);
                                break;
                            case 2:
                                strcpy(aux->dados.local,locais[1]);
                                break;
                            case 3:
                                strcpy(aux->dados.local,locais[2]);
                                break;
                            case 4:
                                strcpy(aux->dados.local,locais[3]);
                                break;
                            case 5:
                                strcpy(aux->dados.local,locais[4]);
                                break;
                            case 6:
                                strcpy(aux->dados.local,locais[5]);
                                break;
                            case 7:
                                strcpy(aux->dados.local,locais[6]);
                                break;
                            default:
                            strcpy(aux->dados.local,locais[7]);
                            break;

                            }
                            system("cls");
                            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
                            printf("\n\t\t\t\t\t\t\t\t EVENTO ALTERADO!");
                            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");

                            break;
                        case 3:

                            system("cls");
                            printf("\n\t\t\t\t\t\t\t\t---------------------------------\n");
                            printf("\n\t\t\t\t\t\t\t\t NOVO HORARIO DO EVENTO: ");
                            scanf("%d %d",&aux->dados.horario.hora,&aux->dados.horario.minuto);
                            while(aux->dados.horario.hora < 12 || aux->dados.horario.hora > 17 || aux->dados.horario.minuto < 0 || aux->dados.horario.minuto > 59){
                            system("cls");
                            printf("\n\t\t\t\t\t\t\t\t---------------------------");
                            printf("\n\t\t\t\t\t\t\t\t Horario invalido!");
                            printf("\n\t\t\t\t\t\t\t\t---------------------------\n\n");
                            system("pause");
                            system("cls");
                            printf("\n\t\t\t\t\t\t\t\t------------------------------\n");
                            printf("\n\t\t\t\t\t\t\t\t NOVO HORARIO DO EVENTO: ");
                            scanf("%d %d",&aux->dados.horario.hora,&aux->dados.horario.minuto);
                            }

                            system("cls");
                            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
                            printf("\n\t\t\t\t\t\t\t\t EVENTO ALTERADO!");
                            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");

                            break;

                        case 4:

                            system("cls");
                            printf("\n\n\t\t\t\t\t\t\t\t--------------------------------------------\n");
                            printf("\n\n\t\t\t\t\t\t\t\t DIGITE A NOVA CARGA HORARIA: \n\n");
                            printf("\t\t\t\t\t\t\t\t CARGA HORARIA: ");
                            scanf("%d",&aux->dados.cargaH);
                            while(aux->dados.cargaH<20 || aux->dados.cargaH>60){
                            system("cls");
                            printf("\n\t\t\t\t\t\t\t\t------------------------------");
                            printf("\n\t\t\t\t\t\t\t\t Carga horaria invalida!");
                            printf("\n\t\t\t\t\t\t\t\t------------------------------\n\n");
                            system("pause");
                            system("cls");
                            printf("\n\n\t\t\t\t\t\t\t\t--------------------------------------------\n");
                            printf("\t\t\t\t\t\t\t\t CARGA HORARIA: ");
                            scanf("%d",&aux->dados.cargaH);
                            }
                            system("cls");
                            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
                            printf("\n\t\t\t\t\t\t\t\t EVENTO ALTERADO!");
                            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");

                            break;

                        default:

                            system("cls");
                            printf("\n\t\t\t\t\t\t\t\t-------------------------------------------\n");
                            printf("\t\t\t\t\t\t\t\t LISTA DE PALESTRANTES: \n");

                            ELEM *pales = ld->inicio;
                            while(pales!=NULL){
                            printf("\n\t\t\t\t\t\t\t\t- %s",pales->dados.nome);
                            pales = pales->prox;
                            }

                            printf("\n\n\t\t\t\t\t\t\t\t ESCOLHA O PALESTRANTE (DIGITE O NOME): ");
                            setbuf(stdin,NULL);
                            fgets(palestrante,19,stdin);
                            strupr(palestrante);
                            while(strcmp(palestrante,aux->dados.palestrante)!=0){
                                    system("cls");
                                    printf("\n\t\t\t\t\t\t\t\t-------------------------------------------\n");
                                    printf("\t\t\t\t\t\t\t\t LISTA DE PALESTRANTES: \n");

                                    ELEM *pales = ld->inicio;
                                    while(pales!=NULL){
                                        printf("\n\t\t\t\t\t\t\t\t- %s",pales->dados.nome);
                                        pales = pales->prox;
                                    }

                                    printf("\n\n\t\t\t\t\t\t\t\t ESCOLHA O PALESTRANTE (DIGITE O NOME): ");
                                    setbuf(stdin,NULL);
                                    fgets(palestrante,19,stdin);
                                    strupr(palestrante);
                            }
                            strcpy(aux->dados.palestrante,palestrante);

                            system("cls");
                            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
                            printf("\n\t\t\t\t\t\t\t\t EVENTO ALTERADO!");
                            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");

                            break;
                    }
                }
                aux=aux->prox;
            }
            if(achei == 0){
                system("cls");
                printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
                printf("\n\t\t\t\t\t\t\t\t SEM EVENTOS COM ESTE NOME!");
                printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
            }
        }
    }
}

void alterarEvento(LISTAE *le , LISTAD *ld){  //Funcao responsavel em editar os dados de uma lista
    char nomeBusca[50], nomeNovo[50] , palestrante[20];
    int opAlterar , achei = 0 , opcaoLocal;
    char locais[8][30] = {"AUD 1","AUD 2","AUD 3","SALA 1","SALA 2","SALA 3","LAB 1","LAB 2"};
    if(le==NULL){
            return;
    }
    else{
        if(le->inicio == NULL){ //Caso nao tenha nada na lista
            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
            printf("\n\t\t\t\t\t\t\t\t SEM EVENTOS CADASTRADOS!");
            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
        }
        else{
            printf("\n\n\t\t\t\t\t\t\t\t--------------------------------------------\n");
            printf("\n\n\t\t\t\t\t\t\t\t DIGITE O EVENTO QUE DESEJA ALTERAR: \n\n");
            printf("\n\t\t\t\t\t\t\t\t EVENTOS CADASTRADOS: \n");
            ARQ *lista = le->inicio;
            while(lista!=NULL){
                printf("\n\t\t\t\t\t\t\t\t - %s",lista->dados.tema);
                lista = lista->prox;
            }
            printf("\n\n\t\t\t\t\t\t\t\t TEMA DO EVENTO: ");
            setbuf(stdin,NULL);
            fgets(nomeBusca,49,stdin);
            strupr(nomeBusca);
            ARQ *aux = le->inicio;
            while(aux!=NULL){       //Busca pelo nome digitado
                if(strcmp(nomeBusca,aux->dados.tema)==0){ //Caso ache o nome opcoes de alteracoes
                        achei = 1;
                        system("cls");
                        printf("\n\n\t\t\t\t\t\t\t\t--------------------------------------------\n");
                        printf("\n\n\t\t\t\t\t\t\t\tDIGITE O QUE DESEJA ALTERAR: \n\n");
                        printf("\t\t\t\t\t\t\t\t1 - TEMA \n\t\t\t\t\t\t\t\t2 - LOCAL");
                        printf("\n\t\t\t\t\t\t\t\t3 - HORARIO\n\t\t\t\t\t\t\t\t4 - CARGA HORARIA ");
                        printf("\n\t\t\t\t\t\t\t\t5 - PALESTRANTE\n\n\t\t\t\t\t\t\t\t>> ");
                        scanf("%d",&opAlterar);
                    while(opAlterar<1 || opAlterar>5){
                        system("cls");
                        printf("\n\n\t\t\t\t\t\t\t\t--------------------------------------------\n");
                        printf("\n\n\t\t\t\t\t\t\t\tDIGITE O QUE DESEJA ALTERAR: \n\n");
                        printf("\t\t\t\t\t\t\t\t1 - TEMA \n\t\t\t\t\t\t\t\t2 - LOCAL");
                        printf("\n\t\t\t\t\t\t\t\t3 - HORARIO\n\t\t\t\t\t\t\t\t4 - CARGA HORARIA ");
                        printf("\n\t\t\t\t\t\t\t\t5 - PALESTRANTE\n\n\t\t\t\t\t\t\t\t>> ");
                        scanf("%d",&opAlterar);
                    }
                    switch(opAlterar){
                        case 1: //Opcao para mudar o nome

                            system("cls");
                            printf("\n\n\t\t\t\t\t\t\t\t--------------------------------------------\n");
                            printf("\n\n\t\t\t\t\t\t\t\t DIGITE O NOVO TEMA: \n\n");
                            printf("\t\t\t\t\t\t\t\t TEMA: ");
                            setbuf(stdin,NULL);
                            fgets(nomeNovo,49,stdin);
                            strupr(nomeNovo);
                            ARQ *aux2 = le->inicio;
                            while(aux2!=NULL){
                                if(strcmp(nomeNovo,aux2->dados.tema)==0){ //Caso edite para um nome ja cadastrado
                                    system("cls");
                                    printf("\n\t\t\t\t\t\t\t\t---------------------------");
                                    printf("\n\t\t\t\t\t\t\t\t Tema ja esta cadastrado!");
                                    printf("\n\t\t\t\t\t\t\t\t---------------------------\n\n");
                                    return;
                                }
                                aux2=aux2->prox;
                            }
                            strcpy(aux->dados.tema,nomeNovo);
                            system("cls");
                            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
                            printf("\n\t\t\t\t\t\t\t\t EVENTO ALTERADO!");
                            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
                            break;
                        case 2:
                            system("cls");
                            printf("\n\n\t\t\t\t\t\t\t\t--------------------------------------------\n");
                            printf("\n\n\t\t\t\t\t\t\t\t DIGITE O NOVO LOCAL: \n\n");
                            printf("\n\t\t\t\t\t\t\t\t 1 - AUD 1\n\t\t\t\t\t\t\t\t 2 - AUD 2\n\t\t\t\t\t\t\t\t 3 - AUD 3");
                            printf("\n\t\t\t\t\t\t\t\t 4 - SALA 1\n\t\t\t\t\t\t\t\t 5 - SALA 2\n\t\t\t\t\t\t\t\t 6 - SALA 3");
                            printf("\n\t\t\t\t\t\t\t\t 7 - LAB 1\n\t\t\t\t\t\t\t\t 8 - LAB 2\n\t\t\t\t\t\t\t\t >> ");
                            scanf("%d",&opcaoLocal);
                            while(opcaoLocal<1 || opcaoLocal>8){
                                system("cls");
                                printf("\n\t\t\t\t\t\t\t\t---------------------------\n");
                                printf("\t\t\t\t\t\t\t\t ESCOLHA O LOCAL DO EVENTO: \n");
                                printf("\n\t\t\t\t\t\t\t\t 1 - AUD 1\n\t\t\t\t\t\t\t\t 2 - AUD 2\n\t\t\t\t\t\t\t\t 3 - AUD 3");
                                printf("\n\t\t\t\t\t\t\t\t 4 - SALA 1\n\t\t\t\t\t\t\t\t 5 - SALA 2\n\t\t\t\t\t\t\t\t 6 - SALA 3");
                                printf("\n\t\t\t\t\t\t\t\t 7 - LAB 1\n\t\t\t\t\t\t\t\t 8 - LAB 2\n\t\t\t\t\t\t\t\t >> ");
                                scanf("%d",&opcaoLocal);
                            }
                            switch(opcaoLocal){
                            case 1:
                                strcpy(aux->dados.local,locais[0]);
                                break;
                            case 2:
                                strcpy(aux->dados.local,locais[1]);
                                break;
                            case 3:
                                strcpy(aux->dados.local,locais[2]);
                                break;
                            case 4:
                                strcpy(aux->dados.local,locais[3]);
                                break;
                            case 5:
                                strcpy(aux->dados.local,locais[4]);
                                break;
                            case 6:
                                strcpy(aux->dados.local,locais[5]);
                                break;
                            case 7:
                                strcpy(aux->dados.local,locais[6]);
                                break;
                            default:
                            strcpy(aux->dados.local,locais[7]);
                            break;

                            }
                            system("cls");
                            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
                            printf("\n\t\t\t\t\t\t\t\t EVENTO ALTERADO!");
                            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");

                            break;
                        case 3:

                            system("cls");
                            printf("\n\t\t\t\t\t\t\t\t---------------------------------\n");
                            printf("\n\t\t\t\t\t\t\t\t NOVO HORARIO DO EVENTO: ");
                            scanf("%d %d",&aux->dados.horario.hora,&aux->dados.horario.minuto);
                            while(aux->dados.horario.hora < 8 || aux->dados.horario.hora > 12 || aux->dados.horario.minuto < 0 || aux->dados.horario.minuto > 59){
                            system("cls");
                            printf("\n\t\t\t\t\t\t\t\t---------------------------");
                            printf("\n\t\t\t\t\t\t\t\t Horario invalido!");
                            printf("\n\t\t\t\t\t\t\t\t---------------------------\n\n");
                            system("pause");
                            system("cls");
                            printf("\n\t\t\t\t\t\t\t\t------------------------------\n");
                            printf("\n\t\t\t\t\t\t\t\t NOVO HORARIO DO EVENTO: ");
                            scanf("%d %d",&aux->dados.horario.hora,&aux->dados.horario.minuto);
                            }

                            system("cls");
                            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
                            printf("\n\t\t\t\t\t\t\t\t EVENTO ALTERADO!");
                            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");

                            break;

                        case 4:

                            system("cls");
                            printf("\n\n\t\t\t\t\t\t\t\t--------------------------------------------\n");
                            printf("\n\n\t\t\t\t\t\t\t\t DIGITE A NOVA CARGA HORARIA: \n\n");
                            printf("\t\t\t\t\t\t\t\t CARGA HORARIA: ");
                            scanf("%d",&aux->dados.cargaH);
                            while(aux->dados.cargaH<20 || aux->dados.cargaH>60){
                            system("cls");
                            printf("\n\t\t\t\t\t\t\t\t------------------------------");
                            printf("\n\t\t\t\t\t\t\t\t Carga horaria invalida!");
                            printf("\n\t\t\t\t\t\t\t\t------------------------------\n\n");
                            system("pause");
                            system("cls");
                            printf("\n\n\t\t\t\t\t\t\t\t--------------------------------------------\n");
                            printf("\t\t\t\t\t\t\t\t CARGA HORARIA: ");
                            scanf("%d",&aux->dados.cargaH);
                            }
                            system("cls");
                            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
                            printf("\n\t\t\t\t\t\t\t\t EVENTO ALTERADO!");
                            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");

                            break;

                        default:

                            system("cls");
                            printf("\n\t\t\t\t\t\t\t\t-------------------------------------------\n");
                            printf("\t\t\t\t\t\t\t\t LISTA DE PALESTRANTES: \n");

                            ELEM *pales = ld->inicio;
                            while(pales!=NULL){
                            printf("\n\t\t\t\t\t\t\t\t- %s",pales->dados.nome);
                            pales = pales->prox;
                            }

                            printf("\n\n\t\t\t\t\t\t\t\t ESCOLHA O PALESTRANTE (DIGITE O NOME): ");
                            setbuf(stdin,NULL);
                            fgets(palestrante,19,stdin);
                            strupr(palestrante);
                            while(strcmp(palestrante,aux->dados.palestrante)!=0){
                                    system("cls");
                                    printf("\n\t\t\t\t\t\t\t\t-------------------------------------------\n");
                                    printf("\t\t\t\t\t\t\t\t LISTA DE PALESTRANTES: \n");

                                    ELEM *pales = ld->inicio;
                                    while(pales!=NULL){
                                        printf("\n\t\t\t\t\t\t\t\t- %s",pales->dados.nome);
                                        pales = pales->prox;
                                    }

                                    printf("\n\n\t\t\t\t\t\t\t\t ESCOLHA O PALESTRANTE (DIGITE O NOME): ");
                                    setbuf(stdin,NULL);
                                    fgets(palestrante,19,stdin);
                                    strupr(palestrante);
                            }
                            strcpy(aux->dados.palestrante,palestrante);

                            system("cls");
                            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
                            printf("\n\t\t\t\t\t\t\t\t EVENTO ALTERADO!");
                            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");

                            break;
                    }
                }
                aux=aux->prox;
            }
            if(achei == 0){
                system("cls");
                printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
                printf("\n\t\t\t\t\t\t\t\t SEM EVENTOS COM ESTE NOME!");
                printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
            }
        }
    }
}

void alterarEventoG(LISTAE *le , LISTAD *ld){  //Funcao responsavel em editar os dados de uma lista
    char nomeBusca[50], nomeNovo[50] , membro[20] , novoMembro[20];
    int opAlterar , achei = 0 , opcaoLocal, quantM = 0 , numMembro , quantD = 0;
    char locais[8][30] = {"AUD 1","AUD 2","AUD 3","SALA 1","SALA 2","SALA 3","LAB 1","LAB 2"};


    if(le==NULL){
            return;
    }
    else{
        if(le->inicio == NULL){ //Caso nao tenha nada na lista
            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
            printf("\n\t\t\t\t\t\t\t\t SEM EVENTOS CADASTRADOS!");
            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
        }
        else{
            printf("\n\n\t\t\t\t\t\t\t\t--------------------------------------------\n");
            printf("\n\n\t\t\t\t\t\t\t\t DIGITE O EVENTO QUE DESEJA ALTERAR: \n\n");
            printf("\n\t\t\t\t\t\t\t\t EVENTOS CADASTRADOS: \n");
            ARQ *lista = le->inicio;
            while(lista!=NULL){
                printf("\n\t\t\t\t\t\t\t\t - %s",lista->dados.tema);
                lista = lista->prox;
            }
            printf("\n\n\t\t\t\t\t\t\t\t TEMA DO EVENTO: ");
            setbuf(stdin,NULL);
            fgets(nomeBusca,49,stdin);
            strupr(nomeBusca);
            ARQ *aux = le->inicio;
            while(aux!=NULL){       //Busca pelo nome digitado
                if(strcmp(nomeBusca,aux->dados.tema)==0){ //Caso ache o nome opcoes de alteracoes
                        achei = 1;
                        system("cls");
                        printf("\n\n\t\t\t\t\t\t\t\t--------------------------------------------\n");
                        printf("\n\n\t\t\t\t\t\t\t\tDIGITE O QUE DESEJA ALTERAR: \n\n");
                        printf("\t\t\t\t\t\t\t\t1 - TEMA \n\t\t\t\t\t\t\t\t2 - LOCAL");
                        printf("\n\t\t\t\t\t\t\t\t3 - HORARIO\n\t\t\t\t\t\t\t\t4 - CARGA HORARIA ");
                        printf("\n\t\t\t\t\t\t\t\t5 - MEMBROS\n\n\t\t\t\t\t\t\t\t>> ");
                        scanf("%d",&opAlterar);
                    while(opAlterar<1 || opAlterar>5){
                        system("cls");
                        printf("\n\n\t\t\t\t\t\t\t\t--------------------------------------------\n");
                        printf("\n\n\t\t\t\t\t\t\t\tDIGITE O QUE DESEJA ALTERAR: \n\n");
                        printf("\t\t\t\t\t\t\t\t1 - TEMA \n\t\t\t\t\t\t\t\t2 - LOCAL");
                        printf("\n\t\t\t\t\t\t\t\t3 - HORARIO\n\t\t\t\t\t\t\t\t4 - CARGA HORARIA ");
                        printf("\n\t\t\t\t\t\t\t\t5 - PALESTRANTE\n\n\t\t\t\t\t\t\t\t>> ");
                        scanf("%d",&opAlterar);
                    }
                    switch(opAlterar){
                        case 1: //Opcao para mudar o nome

                            system("cls");
                            printf("\n\n\t\t\t\t\t\t\t\t--------------------------------------------\n");
                            printf("\n\n\t\t\t\t\t\t\t\t DIGITE O NOVO TEMA: \n\n");
                            printf("\t\t\t\t\t\t\t\t TEMA: ");
                            setbuf(stdin,NULL);
                            fgets(nomeNovo,49,stdin);
                            strupr(nomeNovo);
                            ARQ *aux2 = le->inicio;
                            while(aux2!=NULL){
                                if(strcmp(nomeNovo,aux2->dados.tema)==0){ //Caso edite para um nome ja cadastrado
                                    system("cls");
                                    printf("\n\t\t\t\t\t\t\t\t---------------------------");
                                    printf("\n\t\t\t\t\t\t\t\t Tema ja esta cadastrado!");
                                    printf("\n\t\t\t\t\t\t\t\t---------------------------\n\n");
                                    return;
                                }
                                aux2=aux2->prox;
                            }
                            strcpy(aux->dados.tema,nomeNovo);
                            system("cls");
                            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
                            printf("\n\t\t\t\t\t\t\t\t EVENTO ALTERADO!");
                            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
                            break;
                        case 2:
                            system("cls");
                            printf("\n\n\t\t\t\t\t\t\t\t--------------------------------------------\n");
                            printf("\n\n\t\t\t\t\t\t\t\t DIGITE O NOVO LOCAL: \n\n");
                            printf("\n\t\t\t\t\t\t\t\t 1 - AUD 1\n\t\t\t\t\t\t\t\t 2 - AUD 2\n\t\t\t\t\t\t\t\t 3 - AUD 3");
                            printf("\n\t\t\t\t\t\t\t\t 4 - SALA 1\n\t\t\t\t\t\t\t\t 5 - SALA 2\n\t\t\t\t\t\t\t\t 6 - SALA 3");
                            printf("\n\t\t\t\t\t\t\t\t 7 - LAB 1\n\t\t\t\t\t\t\t\t 8 - LAB 2\n\t\t\t\t\t\t\t\t >> ");
                            scanf("%d",&opcaoLocal);
                            while(opcaoLocal<1 || opcaoLocal>8){
                                system("cls");
                                printf("\n\t\t\t\t\t\t\t\t---------------------------\n");
                                printf("\t\t\t\t\t\t\t\t ESCOLHA O LOCAL DO EVENTO: \n");
                                printf("\n\t\t\t\t\t\t\t\t 1 - AUD 1\n\t\t\t\t\t\t\t\t 2 - AUD 2\n\t\t\t\t\t\t\t\t 3 - AUD 3");
                                printf("\n\t\t\t\t\t\t\t\t 4 - SALA 1\n\t\t\t\t\t\t\t\t 5 - SALA 2\n\t\t\t\t\t\t\t\t 6 - SALA 3");
                                printf("\n\t\t\t\t\t\t\t\t 7 - LAB 1\n\t\t\t\t\t\t\t\t 8 - LAB 2\n\t\t\t\t\t\t\t\t >> ");
                                scanf("%d",&opcaoLocal);
                            }
                            switch(opcaoLocal){
                            case 1:
                                strcpy(aux->dados.local,locais[0]);
                                break;
                            case 2:
                                strcpy(aux->dados.local,locais[1]);
                                break;
                            case 3:
                                strcpy(aux->dados.local,locais[2]);
                                break;
                            case 4:
                                strcpy(aux->dados.local,locais[3]);
                                break;
                            case 5:
                                strcpy(aux->dados.local,locais[4]);
                                break;
                            case 6:
                                strcpy(aux->dados.local,locais[5]);
                                break;
                            case 7:
                                strcpy(aux->dados.local,locais[6]);
                                break;
                            default:
                            strcpy(aux->dados.local,locais[7]);
                            break;

                            }
                            system("cls");
                            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
                            printf("\n\t\t\t\t\t\t\t\t EVENTO ALTERADO!");
                            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");

                            break;
                        case 3:

                            system("cls");
                            printf("\n\t\t\t\t\t\t\t\t---------------------------------\n");
                            printf("\n\t\t\t\t\t\t\t\t NOVO HORARIO DO EVENTO: ");
                            scanf("%d %d",&aux->dados.horario.hora,&aux->dados.horario.minuto);
                            while(aux->dados.horario.hora < 12 || aux->dados.horario.hora > 17 || aux->dados.horario.minuto < 0 || aux->dados.horario.minuto > 59){
                            system("cls");
                            printf("\n\t\t\t\t\t\t\t\t---------------------------");
                            printf("\n\t\t\t\t\t\t\t\t Horario invalido!");
                            printf("\n\t\t\t\t\t\t\t\t---------------------------\n\n");
                            system("pause");
                            system("cls");
                            printf("\n\t\t\t\t\t\t\t\t------------------------------\n");
                            printf("\n\t\t\t\t\t\t\t\t NOVO HORARIO DO EVENTO: ");
                            scanf("%d %d",&aux->dados.horario.hora,&aux->dados.horario.minuto);
                            }

                            system("cls");
                            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
                            printf("\n\t\t\t\t\t\t\t\t EVENTO ALTERADO!");
                            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");

                            break;

                        case 4:

                            system("cls");
                            printf("\n\n\t\t\t\t\t\t\t\t--------------------------------------------\n");
                            printf("\n\n\t\t\t\t\t\t\t\t DIGITE A NOVA CARGA HORARIA: \n\n");
                            printf("\t\t\t\t\t\t\t\t CARGA HORARIA: ");
                            scanf("%d",&aux->dados.cargaH);
                            while(aux->dados.cargaH<20 || aux->dados.cargaH>60){
                            system("cls");
                            printf("\n\t\t\t\t\t\t\t\t------------------------------");
                            printf("\n\t\t\t\t\t\t\t\t Carga horaria invalida!");
                            printf("\n\t\t\t\t\t\t\t\t------------------------------\n\n");
                            system("pause");
                            system("cls");
                            printf("\n\n\t\t\t\t\t\t\t\t--------------------------------------------\n");
                            printf("\t\t\t\t\t\t\t\t CARGA HORARIA: ");
                            scanf("%d",&aux->dados.cargaH);
                            }
                            system("cls");
                            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
                            printf("\n\t\t\t\t\t\t\t\t EVENTO ALTERADO!");
                            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");

                            break;

                        default:

                            system("cls");
                            printf("\n\t\t\t\t\t\t\t\t-------------------------------------------\n");
                            printf("\t\t\t\t\t\t\t\t LISTA DE MEMBROS: \n");

                            printf("\n\t\t\t\t\t\t\t\t MEMBRO 1: %s\n",aux->dados.membro1);
                            quantM++;
                            if(strcmp(aux->dados.membro2,"NULO")!=0){
                                printf("\n\t\t\t\t\t\t\t\t MEMBRO 2: %s\n",aux->dados.membro2);
                                quantM++;
                            }
                            if(strcmp(aux->dados.membro3,"NULO")!=0){
                                printf("\n\t\t\t\t\t\t\t\t MEMBRO 3: %s\n",aux->dados.membro3);
                                quantM++;
                            }
                            if(strcmp(aux->dados.membro4,"NULO")!=0){
                                printf("\n\t\t\t\t\t\t\t\t MEMBRO 4: %s\n",aux->dados.membro4);
                                quantM++;
                            }
                            if(strcmp(aux->dados.membro5,"NULO")!=0){
                                printf("\n\t\t\t\t\t\t\t\t MEMBRO 5: %s\n",aux->dados.membro5);
                                quantM++;
                            }

                            printf("\n\n\t\t\t\t\t\t\t\t ESCOLHA O MEMBRO (DIGITE O NOME): ");
                            setbuf(stdin,NULL);
                            fgets(membro,19,stdin);
                            strupr(membro);

                            while(strcmp(membro,aux->dados.membro1)!=0 && strcmp(membro,aux->dados.membro2)!=0 && strcmp(membro,aux->dados.membro3)!=0 && strcmp(membro,aux->dados.membro4)!=0 && strcmp(membro,aux->dados.membro5)!=0){
                                quantM = 0;
                                system("cls");
                                printf("\n\t\t\t\t\t\t\t\t-------------------------------------------\n");
                                printf("\t\t\t\t\t\t\t\t LISTA DE MEMBROS: \n");

                                printf("\n\t\t\t\t\t\t\t\t MEMBRO 1: %s\n",aux->dados.membro1);
                                quantM++;
                                if(strcmp(aux->dados.membro2,"NULO")!=0){
                                    printf("\n\t\t\t\t\t\t\t\t MEMBRO 2: %s\n",aux->dados.membro2);
                                    quantM++;
                                }
                                if(strcmp(aux->dados.membro3,"NULO")!=0){
                                    printf("\n\t\t\t\t\t\t\t\t MEMBRO 3: %s\n",aux->dados.membro3);
                                    quantM++;
                                }
                                if(strcmp(aux->dados.membro4,"NULO")!=0){
                                    printf("\n\t\t\t\t\t\t\t\t MEMBRO 4: %s\n",aux->dados.membro4);
                                    quantM++;
                                }
                                if(strcmp(aux->dados.membro5,"NULO")!=0){
                                    printf("\n\t\t\t\t\t\t\t\t MEMBRO 5: %s\n",aux->dados.membro5);
                                    quantM++;
                                }

                                printf("\n\n\t\t\t\t\t\t\t\t ESCOLHA O MEMBRO (DIGITE O NOME): ");
                                setbuf(stdin,NULL);
                                fgets(membro,19,stdin);
                                strupr(membro);
                            }

                            ELEM *verQuant = ld->inicio;
                            while(verQuant!=NULL){
                                quantD++;
                                verQuant = verQuant->prox;
                            }

                            int on = 1;
                            while(on){

                                if(quantM >= quantD){

                                    system("cls");
                                    printf("\n\n\t\t\t\t\t\t\t\t-----------------------------------------\n");
                                    printf("\n\t\t\t\t\t\t\t\t MEMBROS DISPONIVEIS IGUAIS OS CADASTRADOS!");
                                    printf("\n\n\t\t\t\t\t\t\t\t-----------------------------------------\n");
                                    return;

                                }

                                system("cls");
                                printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
                                printf("\t\t\t\t\t\t\t\t LISTA MEMBROS DISPONIVEIS: \n\n");

                                ELEM *lista = ld->inicio;
                                while(lista != NULL){
                                    printf("\t\t\t\t\t\t\t\t- %s\n",lista->dados.nome);
                                    lista = lista->prox;
                                }

                                printf("\n\n\t\t\t\t\t\t\t\t ESCOLHA O NOVO MEMBRO: ");
                                setbuf(stdin,NULL);
                                fgets(novoMembro,19,stdin);
                                strupr(novoMembro);

                                if(strcmp(aux->dados.membro1,novoMembro)!=0 && strcmp(aux->dados.membro1,membro)== 0){
                                    strcpy(aux->dados.membro1,novoMembro);
                                    on = 0;
                                }
                                if(strcmp(aux->dados.membro2,novoMembro)!=0 && strcmp(aux->dados.membro2,membro)== 0){
                                    strcpy(aux->dados.membro2,novoMembro);
                                    on = 0;
                                }
                                if(strcmp(aux->dados.membro3,novoMembro)!=0 && strcmp(aux->dados.membro3,membro)== 0){
                                    strcpy(aux->dados.membro3,novoMembro);
                                    on = 0;
                                }
                                if(strcmp(aux->dados.membro4,novoMembro)!=0 && strcmp(aux->dados.membro4,membro)== 0){
                                    strcpy(aux->dados.membro4,novoMembro);
                                    on = 0;
                                }
                                if(strcmp(aux->dados.membro5,novoMembro)!=0 && strcmp(aux->dados.membro5,membro)== 0){
                                    strcpy(aux->dados.membro5,novoMembro);
                                    on = 0;
                                }

                            }




                            system("cls");
                            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
                            printf("\n\t\t\t\t\t\t\t\t EVENTO ALTERADO!");
                            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");

                            break;
                    }
                }
                aux=aux->prox;
            }
            if(achei == 0){
                system("cls");
                printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
                printf("\n\t\t\t\t\t\t\t\t SEM EVENTOS COM ESTE NOME!");
                printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
            }
        }
    }
}

void liberarEventos(LISTAE *le){//Liberar a memoria da lista
    if(le !=NULL){
        ARQ * aux;
        while(le->inicio!=NULL)
        {
            aux = le->inicio;
            le->inicio = le->inicio->prox;
            free(aux);
        }
        free(le);
        printf("\nLista liberada\n");
    }
}


LISTAI* criarI(){
    LISTAI *li = (LISTAI*) malloc(sizeof(LISTAI));  //Funcao para alocar a memoria para o usa de uma lista
    if(li!=NULL){
        li->inicio = NULL;
    }
    return li;
}

void inserirIns(LISTAI *li ,INSCRICAO c){
    if(li==NULL){
    }
    else{
        INS *novo = (INS*) malloc(sizeof(INS));
        if(novo!=NULL){
            novo->dados = c;
            if(li->inicio==NULL){
                novo->ant=NULL;
                novo->prox =NULL;
                li->inicio = novo;
            }
            else{
                if(strcmp(li->inicio->dados.congre,novo->dados.congre)>0){//Inserir no comeco da lista
                    novo->ant=NULL;
                    novo->prox=li->inicio;
                    li->inicio->ant=novo;
                    li->inicio=novo;
                }else{//Inserir no meio ou no fim na lista
                    INS *ante,*aux=li->inicio;
                    while((aux!=NULL)&&(strcmp(aux->dados.congre,novo->dados.congre)<=0)){
                        ante=aux;
                        aux=aux->prox;
                    }
                    ante->prox=novo;
                    novo->ant=ante;
                    novo->prox=aux;
                    if(aux!=NULL)
                        aux->ant=novo;
                }

            }
            system("cls");
            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
            printf("\n\t\t\t\t\t\t\t\t INSCRICAO EFETUADA!");
            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
        }
    }

}

int cadastroIns(LISTAI *li, INSCRICAO *i ,LISTAD *congre, LISTAE *pale , LISTAE *curso , LISTAE *ofic , LISTAE *grup){
    char nomeC[20] , nomeP[50];
    int achei = 0 , opcao, nomeIgual = 0;
    if(li==NULL){
    }
    else{
        if(congre->inicio!=NULL){
            if(li->inicio==NULL){

                system("cls");
                printf("\n\t\t\t\t\t\t\t\t------------------------------------\n");
                printf("\t\t\t\t\t\t\t\t LISTA DOS CONGRESSISTAS: \n");
                ELEM *aux = congre->inicio;
                while(aux!=NULL){
                    printf("\n\t\t\t\t\t\t\t\t - %s",aux->dados.nome);
                    aux = aux->prox;
                }
                printf("\n\n\t\t\t\t\t\t\t\t NOME DO CONGRESSISTA: ");
                setbuf(stdin,NULL);
                fgets(nomeC,19,stdin);
                strupr(nomeC);
                ELEM *aux2 = congre->inicio;
                while(aux2!=NULL){
                    if(strcmp(nomeC,aux2->dados.nome)==0){
                        achei = 1;
                    }
                    aux2 = aux2->prox;
                }
                if(achei==0){
                    system("cls");
                    printf("\n\t\t\t\t\t\t\t\t---------------------------------");
                    printf("\n\t\t\t\t\t\t\t\t CONGRESSISTA NAO ENCONTRADO!");
                    printf("\n\t\t\t\t\t\t\t\t---------------------------------\n\n");
                    return 0;
                }
                system("cls");
                printf("\n\t\t\t\t\t\t\t\t------------------------------------\n");
                printf("\n\t\t\t\t\t\t\t\tOPCOES DE EVENTOS: \n");
                printf("\n\t\t\t\t\t\t\t\t 1 - PALESTRA");
                printf("\n\t\t\t\t\t\t\t\t 2 - CURSO");
                printf("\n\t\t\t\t\t\t\t\t 3 - G. DISCUSSAO");
                printf("\n\t\t\t\t\t\t\t\t 4 - OFICINA");
                printf("\n\t\t\t\t\t\t\t\t >> ");
                scanf("%d",&opcao);

                while(opcao<1 || opcao>4){
                    system("cls");
                    printf("\n\t\t\t\t\t\t\t\t------------------------------------\n");
                    printf("\n\t\t\t\t\t\t\t\tOPCOES DE EVENTOS: \n");
                    printf("\n\t\t\t\t\t\t\t\t 1 - PALESTRA");
                    printf("\n\t\t\t\t\t\t\t\t 2 - CURSO");
                    printf("\n\t\t\t\t\t\t\t\t 3 - G. DISCUSSAO");
                    printf("\n\t\t\t\t\t\t\t\t 4 - OFICINA");
                    printf("\n\t\t\t\t\t\t\t\t >> ");
                    scanf("%d",&opcao);
                }

                switch(opcao){
                case 1:
                    if(pale->inicio==NULL){
                        system("cls");
                        printf("\n\t\t\t\t\t\t\t\t---------------------------------");
                        printf("\n\t\t\t\t\t\t\t\t NAO HA PALESTRAS!");
                        printf("\n\t\t\t\t\t\t\t\t---------------------------------\n\n");
                        return 0;
                    }
                    else{

                        int on = 1;
                        while(on){
                            system("cls");
                            printf("\n\t\t\t\t\t\t\t\t---------------------------------");
                            printf("\n\t\t\t\t\t\t\t\t LISTA DE PALESTRAS\n");
                            ARQ *palestras = pale->inicio;
                            while(palestras!=NULL){
                                printf("\n\t\t\t\t\t\t\t\t - %s",palestras->dados.tema);
                                palestras = palestras->prox;
                            }
                            printf("\n\n\t\t\t\t\t\t\t\t ESCOLHA A PALESTRA: ");
                            setbuf(stdin,NULL);
                            fgets(nomeP,49,stdin);
                            strupr(nomeP);

                             ARQ *buscaP = pale->inicio;
                             while(buscaP!=NULL){
                                if(strcmp(nomeP,buscaP->dados.tema)==0){
                                    strcpy(i->congre,nomeC);
                                    i->numpa = 1;
                                    i->numgp = 0;
                                    i->numOf = 0;
                                    i->numCr = 0;
                                    strcpy(i->pales[i->numpa-1],nomeP);
                                    on = 0;
                                }
                                buscaP = buscaP->prox;
                             }

                        }
                        return 1;

                    }
                    break;
                case 2:

                    if(curso->inicio==NULL){
                        system("cls");
                        printf("\n\t\t\t\t\t\t\t\t---------------------------------");
                        printf("\n\t\t\t\t\t\t\t\t NAO HA CURSOS!");
                        printf("\n\t\t\t\t\t\t\t\t---------------------------------\n\n");
                        return 0;
                    }
                    else{

                        int on = 1;
                        while(on){

                            system("cls");
                            printf("\n\t\t\t\t\t\t\t\t---------------------------------");
                            printf("\n\t\t\t\t\t\t\t\t LISTA DE CURSOS\n");
                            ARQ *cur = curso->inicio;
                            while(cur!=NULL){
                                printf("\n\t\t\t\t\t\t\t\t - %s",cur->dados.tema);
                                cur = cur->prox;
                            }
                            printf("\n\n\t\t\t\t\t\t\t\t ESCOLHA O CURSO: ");
                            setbuf(stdin,NULL);
                            fgets(nomeP,49,stdin);
                            strupr(nomeP);

                            ARQ *buscaP = curso->inicio;
                            while(buscaP!=NULL){
                                if(strcmp(nomeP,buscaP->dados.tema)==0){
                                    strcpy(i->congre,nomeC);
                                    strcpy(i->curso,nomeP);
                                    i->numpa = 0;
                                    i->numgp = 0;
                                    i->numOf = 0;
                                    i->numCr = 1;
                                    on = 0;
                                }
                                buscaP = buscaP->prox;
                             }


                        }
                    }

                        return 1;

                    break;
                case 3:

                    if(grup->inicio==NULL){
                        system("cls");
                        printf("\n\t\t\t\t\t\t\t\t---------------------------------");
                        printf("\n\t\t\t\t\t\t\t\t NAO HA GRUPOS D.!");
                        printf("\n\t\t\t\t\t\t\t\t---------------------------------\n\n");
                        return 0;
                    }
                    else{

                        int on = 1;
                        while(on){

                            system("cls");
                            printf("\n\t\t\t\t\t\t\t\t---------------------------------");
                            printf("\n\t\t\t\t\t\t\t\t LISTA DE GRUPOS D.\n");
                            ARQ *gr = grup->inicio;
                            while(gr!=NULL){
                                printf("\n\t\t\t\t\t\t\t\t - %s",gr->dados.tema);
                                gr = gr->prox;
                            }
                            printf("\n\n\t\t\t\t\t\t\t\t ESCOLHA O GRUPO D.: ");
                            setbuf(stdin,NULL);
                            fgets(nomeP,49,stdin);
                            strupr(nomeP);

                            ARQ *buscaP = grup->inicio;
                            while(buscaP!=NULL){
                                if(strcmp(nomeP,buscaP->dados.tema)==0){
                                    strcpy(i->congre,nomeC);
                                    i->numgp = 1;
                                    i->numpa = 0;
                                    i->numOf = 0;
                                    i->numCr = 0;
                                    strcpy(i->grupoD[i->numgp-1],nomeP);
                                    on = 0;
                                }
                                buscaP = buscaP->prox;
                             }
                        }
                    }
                        return 1;

                    break;

                default:

                    if(ofic->inicio==NULL){
                        system("cls");
                        printf("\n\t\t\t\t\t\t\t\t---------------------------------");
                        printf("\n\t\t\t\t\t\t\t\t NAO HA OFICINAS!");
                        printf("\n\t\t\t\t\t\t\t\t---------------------------------\n\n");
                        return 0;
                    }
                    else{

                        int on = 1;
                        while(on){

                            system("cls");
                            printf("\n\t\t\t\t\t\t\t\t---------------------------------");
                            printf("\n\t\t\t\t\t\t\t\t LISTA DE OFICINAS\n");
                            ARQ *ofi = ofic->inicio;
                            while(ofi!=NULL){
                                printf("\n\t\t\t\t\t\t\t\t - %s",ofi->dados.tema);
                                ofi = ofi->prox;
                            }
                            printf("\n\n\t\t\t\t\t\t\t\t ESCOLHA A OFICINA: ");
                            setbuf(stdin,NULL);
                            fgets(nomeP,49,stdin);
                            strupr(nomeP);

                            ARQ *buscaP = ofic->inicio;
                            while(buscaP!=NULL){
                                if(strcmp(nomeP,buscaP->dados.tema)==0){
                                    strcpy(i->congre,nomeC);
                                    strcpy(i->oficina,nomeP);
                                    i->numpa = 0;
                                    i->numgp = 0;
                                    i->numOf = 1;
                                    i->numCr = 0;
                                    on = 0;
                                }
                                buscaP = buscaP->prox;
                             }
                        }
                    }

                        return 1;

                    break;
                }


            }
            else{

                system("cls");
                printf("\n\t\t\t\t\t\t\t\t------------------------------------\n");
                printf("\t\t\t\t\t\t\t\t LISTA DOS CONGRESSISTAS: \n");
                ELEM *aux = congre->inicio;
                while(aux!=NULL){
                    printf("\n\t\t\t\t\t\t\t\t - %s",aux->dados.nome);
                    aux = aux->prox;
                }
                printf("\n\n\t\t\t\t\t\t\t\t NOME DO CONGRESSISTA: ");
                setbuf(stdin,NULL);
                fgets(nomeC,19,stdin);
                strupr(nomeC);
                ELEM *aux2 = congre->inicio;
                while(aux2!=NULL){
                    if(strcmp(nomeC,aux2->dados.nome)==0){
                        achei = 1;
                    }
                    aux2 = aux2->prox;
                }
                if(achei==0){
                    system("cls");
                    printf("\n\t\t\t\t\t\t\t\t---------------------------------");
                    printf("\n\t\t\t\t\t\t\t\t CONGRESSISTA NAO ENCONTRADO!");
                    printf("\n\t\t\t\t\t\t\t\t---------------------------------\n\n");
                    return 0;
                }

                INS *aux3 = li->inicio;     //Caso seja o mesmo nome se inscrevendo novamente.
                while(aux3!=NULL){
                    if(strcmp(nomeC,aux3->dados.congre)==0){

                        system("cls");
                        printf("\n\t\t\t\t\t\t\t\t------------------------------------\n");
                        printf("\n\t\t\t\t\t\t\t\tOPCOES DE EVENTOS: \n");
                        printf("\n\t\t\t\t\t\t\t\t 1 - PALESTRA");
                        printf("\n\t\t\t\t\t\t\t\t 2 - CURSO");
                        printf("\n\t\t\t\t\t\t\t\t 3 - G. DISCUSSAO");
                        printf("\n\t\t\t\t\t\t\t\t 4 - OFICINA");
                        printf("\n\t\t\t\t\t\t\t\t >> ");
                        scanf("%d",&opcao);

                    while(opcao<1 || opcao>4){
                        system("cls");
                        printf("\n\t\t\t\t\t\t\t\t------------------------------------\n");
                        printf("\n\t\t\t\t\t\t\t\tOPCOES DE EVENTOS: \n");
                        printf("\n\t\t\t\t\t\t\t\t 1 - PALESTRA");
                        printf("\n\t\t\t\t\t\t\t\t 2 - CURSO");
                        printf("\n\t\t\t\t\t\t\t\t 3 - G. DISCUSSAO");
                        printf("\n\t\t\t\t\t\t\t\t 4 - OFICINA");
                        printf("\n\t\t\t\t\t\t\t\t >> ");
                        scanf("%d",&opcao);
                    }

                    switch(opcao){
                    case 1:
                        if(pale->inicio==NULL){
                            system("cls");
                            printf("\n\t\t\t\t\t\t\t\t---------------------------------");
                            printf("\n\t\t\t\t\t\t\t\t NAO HA PALESTRAS!");
                            printf("\n\t\t\t\t\t\t\t\t---------------------------------\n\n");
                            return 0;
                        }
                        else{

                            int on = 1;
                            while(on){
                                system("cls");
                                printf("\n\t\t\t\t\t\t\t\t---------------------------------");
                                printf("\n\t\t\t\t\t\t\t\t LISTA DE PALESTRAS\n");
                                ARQ *palestras = pale->inicio;
                                while(palestras!=NULL){
                                    printf("\n\t\t\t\t\t\t\t\t - %s",palestras->dados.tema);
                                    palestras = palestras->prox;
                                }
                                printf("\n\n\t\t\t\t\t\t\t\t ESCOLHA A PALESTRA: ");
                                setbuf(stdin,NULL);
                                fgets(nomeP,49,stdin);
                                strupr(nomeP);

                                INSCRICAO verificar = li->inicio->dados;
                                int i;
                                for(i=0;i<verificar.numpa;i++){
                                    if(strcmp(nomeP,verificar.pales[i])==0){
                                        system("cls");
                                        printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
                                        printf("\n\t\t\t\t\t\t\t\t PALESTRA JA INSCRITA!");
                                        printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
                                        return 0;
                                    }
                                }

                                ARQ *buscaP = pale->inicio;
                                while(buscaP!=NULL){
                                    if(strcmp(nomeP,buscaP->dados.tema)==0){

                                        strcpy(aux3->dados.congre,nomeC);
                                        aux3->dados.numpa = aux3->dados.numpa+1;
                                        strcpy(aux3->dados.pales[aux3->dados.numpa-1],nomeP);
                                        system("cls");
                                        printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
                                        printf("\n\t\t\t\t\t\t\t\t INSCRICAO EFETUADA!");
                                        printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
                                        on = 0;
                                    }
                                    buscaP = buscaP->prox;
                                }

                            }
                            return 0;

                        }
                        break;
                    case 2:

                        if(curso->inicio==NULL){
                            system("cls");
                            printf("\n\t\t\t\t\t\t\t\t---------------------------------");
                            printf("\n\t\t\t\t\t\t\t\t NAO HA CURSOS!");
                            printf("\n\t\t\t\t\t\t\t\t---------------------------------\n\n");
                            return 0;
                        }
                        else{

                            int on = 1;
                            while(on){

                                system("cls");
                                printf("\n\t\t\t\t\t\t\t\t---------------------------------");
                                printf("\n\t\t\t\t\t\t\t\t LISTA DE CURSOS\n");
                                ARQ *cur = curso->inicio;
                                while(cur!=NULL){
                                    printf("\n\t\t\t\t\t\t\t\t - %s",cur->dados.tema);
                                    cur = cur->prox;
                                }
                                printf("\n\n\t\t\t\t\t\t\t\t ESCOLHA O CURSO: ");
                                setbuf(stdin,NULL);
                                fgets(nomeP,49,stdin);
                                strupr(nomeP);


                                if(aux3->dados.numCr!=0){
                                    system("cls");
                                    printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
                                    printf("\n\t\t\t\t\t\t\t\t JA ESTA INSCRITO EM UM CURSO!");
                                    printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
                                    return 0;
                                }

                                ARQ *buscaP = curso->inicio;
                                while(buscaP!=NULL){
                                    if(strcmp(nomeP,buscaP->dados.tema)==0){
                                        strcpy(aux3->dados.congre,nomeC);
                                        strcpy(aux3->dados.curso,nomeP);
                                        aux3->dados.numCr = 1;

                                        system("cls");
                                        printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
                                        printf("\n\t\t\t\t\t\t\t\t INSCRICAO EFETUADA!");
                                        printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
                                        on = 0;
                                    }
                                    buscaP = buscaP->prox;
                                }


                            }
                        }

                            return 0;

                        break;
                    case 3:

                        if(grup->inicio==NULL){
                            system("cls");
                            printf("\n\t\t\t\t\t\t\t\t---------------------------------");
                            printf("\n\t\t\t\t\t\t\t\t NAO HA GRUPOS D.!");
                            printf("\n\t\t\t\t\t\t\t\t---------------------------------\n\n");
                            return 0;
                        }
                        else{

                            int on = 1;
                            while(on){

                                system("cls");
                                printf("\n\t\t\t\t\t\t\t\t---------------------------------");
                                printf("\n\t\t\t\t\t\t\t\t LISTA DE GRUPOS D.\n");
                                ARQ *gr = grup->inicio;
                                while(gr!=NULL){
                                    printf("\n\t\t\t\t\t\t\t\t - %s",gr->dados.tema);
                                    gr = gr->prox;
                                }
                                printf("\n\n\t\t\t\t\t\t\t\t ESCOLHA O GRUPO D.: ");
                                setbuf(stdin,NULL);
                                fgets(nomeP,49,stdin);
                                strupr(nomeP);

                                INSCRICAO verificar = li->inicio->dados;
                                int i;
                                for(i=0;i<verificar.numgp;i++){
                                    if(strcmp(nomeP,verificar.grupoD[i])==0){
                                        system("cls");
                                        printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
                                        printf("\n\t\t\t\t\t\t\t\t GRUPO JA INSCRITO!");
                                        printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
                                        return 0;
                                    }
                                }

                                ARQ *buscaP = grup->inicio;
                                while(buscaP!=NULL){
                                    if(strcmp(nomeP,buscaP->dados.tema)==0){

                                        strcpy(aux3->dados.congre,nomeC);
                                        aux3->dados.numgp = aux3->dados.numgp+1;
                                        strcpy(aux3->dados.grupoD[aux3->dados.numgp-1],nomeP);
                                        system("cls");
                                        printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
                                        printf("\n\t\t\t\t\t\t\t\t INSCRICAO EFETUADA!");
                                        printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
                                        on = 0;
                                    }
                                    buscaP = buscaP->prox;
                                }
                            }
                        }
                            return 0;

                        break;

                    default:

                        if(ofic->inicio==NULL){
                            system("cls");
                            printf("\n\t\t\t\t\t\t\t\t---------------------------------");
                            printf("\n\t\t\t\t\t\t\t\t NAO HA OFICINAS!");
                            printf("\n\t\t\t\t\t\t\t\t---------------------------------\n\n");
                            return 0;
                        }
                        else{

                            int on = 1;
                            while(on){

                                system("cls");
                                printf("\n\t\t\t\t\t\t\t\t---------------------------------");
                                printf("\n\t\t\t\t\t\t\t\t LISTA DE OFICINAS\n");
                                ARQ *ofi = ofic->inicio;
                                while(ofi!=NULL){
                                    printf("\n\t\t\t\t\t\t\t\t - %s",ofi->dados.tema);
                                    ofi = ofi->prox;
                                }
                                printf("\n\n\t\t\t\t\t\t\t\t ESCOLHA A OFICINA: ");
                                setbuf(stdin,NULL);
                                fgets(nomeP,49,stdin);
                                strupr(nomeP);

                                if(aux3->dados.numOf!=0){
                                    system("cls");
                                    printf("\n\n\t\t\t\t\t\t\t\t----------------------------------\n");
                                    printf("\n\t\t\t\t\t\t\t\t JA ESTA INSCRITO EM UMA OFICINA!");
                                    printf("\n\n\t\t\t\t\t\t\t\t----------------------------------\n");
                                    return 0;
                                }

                                ARQ *buscaP = ofic->inicio;
                                while(buscaP!=NULL){
                                    if(strcmp(nomeP,buscaP->dados.tema)==0){

                                        strcpy(aux3->dados.congre,nomeC);
                                        strcpy(aux3->dados.oficina,nomeP);
                                        aux3->dados.numOf = 1;
                                        system("cls");
                                        printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
                                        printf("\n\t\t\t\t\t\t\t\t INSCRICAO EFETUADA!");
                                        printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
                                        on = 0;
                                    }
                                    buscaP = buscaP->prox;
                                }
                            }
                        }

                            return 0;

                        break;
                    }

                    }
                    aux3 = aux3->prox;
                }
                //Caso Seja uma nova inscricao
                system("cls");
                printf("\n\t\t\t\t\t\t\t\t------------------------------------\n");
                printf("\n\t\t\t\t\t\t\t\tOPCOES DE EVENTOS: \n");
                printf("\n\t\t\t\t\t\t\t\t 1 - PALESTRA");
                printf("\n\t\t\t\t\t\t\t\t 2 - CURSO");
                printf("\n\t\t\t\t\t\t\t\t 3 - G. DISCUSSAO");
                printf("\n\t\t\t\t\t\t\t\t 4 - OFICINA");
                printf("\n\t\t\t\t\t\t\t\t >> ");
                scanf("%d",&opcao);

                while(opcao<1 || opcao>4){
                    system("cls");
                    printf("\n\t\t\t\t\t\t\t\t------------------------------------\n");
                    printf("\n\t\t\t\t\t\t\t\tOPCOES DE EVENTOS: \n");
                    printf("\n\t\t\t\t\t\t\t\t 1 - PALESTRA");
                    printf("\n\t\t\t\t\t\t\t\t 2 - CURSO");
                    printf("\n\t\t\t\t\t\t\t\t 3 - G. DISCUSSAO");
                    printf("\n\t\t\t\t\t\t\t\t 4 - OFICINA");
                    printf("\n\t\t\t\t\t\t\t\t >> ");
                    scanf("%d",&opcao);
                }

                switch(opcao){
                case 1:
                    if(pale->inicio==NULL){
                        system("cls");
                        printf("\n\t\t\t\t\t\t\t\t---------------------------------");
                        printf("\n\t\t\t\t\t\t\t\t NAO HA PALESTRAS!");
                        printf("\n\t\t\t\t\t\t\t\t---------------------------------\n\n");
                        return 0;
                    }
                    else{

                        int on = 1;
                        while(on){
                            system("cls");
                            printf("\n\t\t\t\t\t\t\t\t---------------------------------");
                            printf("\n\t\t\t\t\t\t\t\t LISTA DE PALESTRAS\n");
                            ARQ *palestras = pale->inicio;
                            while(palestras!=NULL){
                                printf("\n\t\t\t\t\t\t\t\t - %s",palestras->dados.tema);
                                palestras = palestras->prox;
                            }
                            printf("\n\n\t\t\t\t\t\t\t\t ESCOLHA A PALESTRA: ");
                            setbuf(stdin,NULL);
                            fgets(nomeP,49,stdin);
                            strupr(nomeP);

                             ARQ *buscaP = pale->inicio;
                             while(buscaP!=NULL){
                                if(strcmp(nomeP,buscaP->dados.tema)==0){
                                    strcpy(i->congre,nomeC);
                                    i->numpa = 1;
                                    i->numgp = 0;
                                    i->numOf = 0;
                                    i->numCr = 0;
                                    strcpy(i->pales[i->numpa-1],nomeP);
                                    on = 0;
                                }
                                buscaP = buscaP->prox;
                             }

                        }
                        return 1;

                    }
                    break;
                case 2:

                    if(curso->inicio==NULL){
                        system("cls");
                        printf("\n\t\t\t\t\t\t\t\t---------------------------------");
                        printf("\n\t\t\t\t\t\t\t\t NAO HA CURSOS!");
                        printf("\n\t\t\t\t\t\t\t\t---------------------------------\n\n");
                        return 0;
                    }
                    else{

                        int on = 1;
                        while(on){

                            system("cls");
                            printf("\n\t\t\t\t\t\t\t\t---------------------------------");
                            printf("\n\t\t\t\t\t\t\t\t LISTA DE CURSOS\n");
                            ARQ *cur = curso->inicio;
                            while(cur!=NULL){
                                printf("\n\t\t\t\t\t\t\t\t - %s",cur->dados.tema);
                                cur = cur->prox;
                            }
                            printf("\n\n\t\t\t\t\t\t\t\t ESCOLHA O CURSO: ");
                            setbuf(stdin,NULL);
                            fgets(nomeP,49,stdin);
                            strupr(nomeP);

                             ARQ *buscaP = curso->inicio;
                             while(buscaP!=NULL){
                                if(strcmp(nomeP,buscaP->dados.tema)==0){
                                    strcpy(i->congre,nomeC);
                                    strcpy(i->curso,nomeP);
                                    i->numpa = 0;
                                    i->numgp = 0;
                                    i->numOf = 0;
                                    i->numCr = 1;
                                    on = 0;
                                }
                                buscaP = buscaP->prox;
                             }


                        }
                    }

                        return 1;

                    break;
                case 3:

                    if(grup->inicio==NULL){
                        system("cls");
                        printf("\n\t\t\t\t\t\t\t\t---------------------------------");
                        printf("\n\t\t\t\t\t\t\t\t NAO HA GRUPOS D.!");
                        printf("\n\t\t\t\t\t\t\t\t---------------------------------\n\n");
                        return 0;
                    }
                    else{

                        int on = 1;
                        while(on){

                            system("cls");
                            printf("\n\t\t\t\t\t\t\t\t---------------------------------");
                            printf("\n\t\t\t\t\t\t\t\t LISTA DE GRUPOS D.\n");
                            ARQ *gr = grup->inicio;
                            while(gr!=NULL){
                                printf("\n\t\t\t\t\t\t\t\t - %s",gr->dados.tema);
                                gr = gr->prox;
                            }
                            printf("\n\n\t\t\t\t\t\t\t\t ESCOLHA O GRUPO D.: ");
                            setbuf(stdin,NULL);
                            fgets(nomeP,49,stdin);
                            strupr(nomeP);

                            ARQ *buscaP = grup->inicio;
                            while(buscaP!=NULL){
                                if(strcmp(nomeP,buscaP->dados.tema)==0){
                                    strcpy(i->congre,nomeC);
                                    i->numgp = 1;
                                    i->numpa = 0;
                                    i->numOf = 0;
                                    i->numCr = 0;
                                    strcpy(i->grupoD[i->numgp-1],nomeP);
                                    on = 0;
                                }
                                buscaP = buscaP->prox;
                             }
                        }
                    }
                        return 1;

                    break;

                default:

                    if(ofic->inicio==NULL){
                        system("cls");
                        printf("\n\t\t\t\t\t\t\t\t---------------------------------");
                        printf("\n\t\t\t\t\t\t\t\t NAO HA OFICINAS!");
                        printf("\n\t\t\t\t\t\t\t\t---------------------------------\n\n");
                        return 0;
                    }
                    else{

                        int on = 1;
                        while(on){

                            system("cls");
                            printf("\n\t\t\t\t\t\t\t\t---------------------------------");
                            printf("\n\t\t\t\t\t\t\t\t LISTA DE OFICINAS\n");
                            ARQ *ofi = ofic->inicio;
                            while(ofi!=NULL){
                                printf("\n\t\t\t\t\t\t\t\t - %s",ofi->dados.tema);
                                ofi = ofi->prox;
                            }
                            printf("\n\n\t\t\t\t\t\t\t\t ESCOLHA A OFICINA: ");
                            setbuf(stdin,NULL);
                            fgets(nomeP,49,stdin);
                            strupr(nomeP);

                            ARQ *buscaP = ofic->inicio;
                            while(buscaP!=NULL){
                                if(strcmp(nomeP,buscaP->dados.tema)==0){
                                    strcpy(i->congre,nomeC);
                                    strcpy(i->oficina,nomeP);
                                    i->numpa = 0;
                                    i->numgp = 0;
                                    i->numOf = 1;
                                    i->numCr = 0;
                                    on = 0;
                                }
                                buscaP = buscaP->prox;
                             }
                        }
                    }

                        return 1;

                    break;
                }



            }
        }
        else{
            system("cls");
            printf("\n\t\t\t\t\t\t\t\t---------------------------------");
            printf("\n\t\t\t\t\t\t\t\t NAO HA CONGRESSISTAS CADASTRADOS");
            printf("\n\t\t\t\t\t\t\t\t---------------------------------\n\n");
            return 0;
        }
    }

}

void mostrarIns(LISTAI *li){
    int i;
    if(li == NULL){
    }
    else{
        if(li->inicio==NULL){
            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
            printf("\n\t\t\t\t\t\t\t\t SEM INSCRICOES!");
            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
        }
        else{
            INS* aux = li->inicio;
            printf("\n\n\t\t\t\t\t\t\t\tLISTA INSCRICOES: \n");
            while(aux != NULL){
                printf("\n\n\t\t\t\t\t\t\t\t-----------------------------------\n");
                printf("\n\t\t\t\t\t\t\t\t CONGRESSISTA: %s\n",aux->dados.congre);
                if(aux->dados.numCr>0){
                printf("\n\t\t\t\t\t\t\t\t CURSO: %s\n",aux->dados.curso);
                }
                if(aux->dados.numOf>0){
                printf("\n\t\t\t\t\t\t\t\t OFICINA: %s\n",aux->dados.oficina);
                }
                if(aux->dados.numpa>0){
                    printf("\n\t\t\t\t\t\t\t\t PALESTRAS:\n");
                    for(i=0;i<aux->dados.numpa;i++){
                    printf("\n\t\t\t\t\t\t\t\t - %s\n",aux->dados.pales[i]);
                    }
                }

                if(aux->dados.numgp>0){
                    printf("\n\t\t\t\t\t\t\t\t GRUPOS D.:\n");
                    for(i=0;i<aux->dados.numgp;i++){
                        printf("\n\t\t\t\t\t\t\t\t - %s\n",aux->dados.grupoD[i]);
                    }
                }
                printf("\n\t\t\t\t\t\t\t\t-----------------------------------\n");
                aux = aux->prox;
            }
        }
    }
}

void cancelarP(LISTAI *li){
    char nomeE[20];
    int achei = 0 , i;

    if(li==NULL){
    }
    else{
        if(li->inicio == NULL){
            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
            printf("\n\t\t\t\t\t\t\t\t SEM USUARIOS INSCRITOS!");
            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
        }
        else{
            printf("\n\n\t\t\t\t\t\t\t\t--------------------------------------------\n");
            printf("\n\t\t\t\t\t\t\t\t LISTA DE INSCRITOS \n");
            INS *lista = li->inicio;
            while(lista!=NULL){
                printf("\n\t\t\t\t\t\t\t\t - %s ",lista->dados.congre);
                lista = lista->prox;
            }
            printf("\n\t\t\t\t\t\t\t\t--------------------------------------------");
            printf("\n\t\t\t\t\t\t\t\t DIGITE O USUARIO QUE DESEJA REMOVER: \n");
            printf("\n\t\t\t\t\t\t\t\t NOME DO USUARIO: ");
            setbuf(stdin,NULL);
            fgets(nomeE,19,stdin);
            strupr(nomeE);

            INS *aux = li->inicio;
            if(strcmp(nomeE,aux->dados.congre)== 0){//Se estiver no inicio da lista
                li->inicio=aux->prox;
                if(aux->prox!=NULL)
                    aux->prox->ant=NULL;
                free(aux);
            }
            else{//Se estiver no meio ou no fim
                INS *ant;
                while((aux!=NULL) && strcmp(nomeE,aux->dados.congre)!=0){
                    ant=aux;
                    aux=aux->prox;
                }
                if(aux==NULL){ //Caso o nome digitado nao esteja na lista
                    system("cls");
                    printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
                    printf("\n\t\t\t\t\t\t\t\t USUARIO NAO ENCONTRADO!");
                    printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
                    return;
                }
                ant->prox = aux->prox;
                if(aux->prox!=NULL)             //Remorcao do dado.
                    aux->prox->ant=ant;
                free(aux);
            }
            system("cls");
            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
            printf("\n\t\t\t\t\t\t\t\t INSCRICAO REMOVIDA!");
            printf("\n\n\t\t\t\t\t\t\t\t-------------------------------\n");
        }
    }
}

void liberarIns(LISTAI *li){//Liberar a memoria da lista
    if(li !=NULL){
        INS * aux;
        while(li->inicio!=NULL)
        {
            aux = li->inicio;
            li->inicio = li->inicio->prox;
            free(aux);
        }
        free(li);
        printf("\nLista liberada\n");
    }
}

int main(){
    LISTAD *congressista = criar() , *palestrantes = criar() , *organizadores = criar();
    LISTAE *palestra = criarEventos() , *grupoD = criarEventos() , *curso = criarEventos() , *oficina = criarEventos();
    LISTAI *inscricao = criarI();

    CADASTRO dados;
    EVENTO dadosE;
    INSCRICAO dadosI;

    int padraoMatricula = 10001;
    int opGeral, opCongressista , opPalestrante , opOrganizadores , opEventos, opInscricao;
    int onGeral = 1 , onCongre = 1 , onPales = 1 , onOrg = 1 , onEven = 1 , onIns = 1;

    int onEPale = 1 , onEGru = 1 , onECur = 1 , onOfi = 1;
    int opEPalestra ,opEGrupo , opECurso, opEOficina;

    int totalCongressista = 0;

    system("color 17");
    //menu_principal();
    system("cls");
    menu_incial();

    while(onGeral){
      scanf("%d",&opGeral);
      while(opGeral<1 || opGeral>6){
        system("cls");
        menu_incial();
        scanf("%d",&opGeral);
      }

      switch(opGeral){ // CASOS DO MENU GERAL

        case 1:
            system("cls");
            menu_congressista();

            while(onCongre){
                scanf("%d",&opCongressista);

                while(opCongressista<1 || opCongressista>5){
                system("cls");
                menu_congressista();
                scanf("%d",&opCongressista);
                }

                switch(opCongressista){

                    case 1:
                        system("cls");
                        if(totalCongressista<CCONGRE){
                            int auxCadastro;
                            auxCadastro = cadastroCongressista(congressista , &dados  , padraoMatricula);
                            if(auxCadastro==1){
                                inserir(congressista,dados);
                                padraoMatricula++;
                                totalCongressista++;
                            }
                        }
                        else{
                                system("cls");
                                printf("\n\t\t\t\t\t\t\t\t---------------------------");
                                printf("\n\t\t\t\t\t\t\t\t NAO HA MAIS VAGAS!");
                                printf("\n\t\t\t\t\t\t\t\t---------------------------\n\n");
                            }
                        system("pause");
                        system("cls");
                        menu_congressista();
                        break;


                    case 2:

                        system("cls");
                        mostrarCongressista(congressista);
                        system("pause");
                        system("cls");
                        menu_congressista();
                        break;


                    case 3:

                        system("cls");
                        alterarCongressista(congressista);
                        system("pause");
                        system("cls");
                        menu_congressista();
                        break;


                    case 4:

                        system("cls");
                        int auxRemover;
                        auxRemover = removerCongressista(congressista);
                        if(auxRemover==1){
                            totalCongressista--;
                        }
                        system("pause");
                        system("cls");
                        menu_congressista();
                        break;


                    default:
                        system("cls");
                        menu_incial();
                        onCongre = 0;
                        break;

                }
            }
            onCongre = 1;
            break;


        case 2:

            system("cls");
            menu_palestrante();

            while(onPales){
                scanf("%d",&opPalestrante);

                while(opPalestrante<1 || opPalestrante>5){
                system("cls");
                menu_palestrante();
                scanf("%d",&opPalestrante);
                }

                switch(opPalestrante){

                    case 1:
                        system("cls");
                        int auxCadastro;
                        auxCadastro = cadastroPalestrante(palestrantes , &dados  , padraoMatricula);
                        if(auxCadastro==1){
                          inserir(palestrantes,dados);
                          padraoMatricula++;
                        }
                        system("pause");
                        system("cls");
                        menu_palestrante();
                        break;


                    case 2:

                        system("cls");
                        mostrarPalestrante(palestrantes);
                        system("pause");
                        system("cls");
                        menu_palestrante();
                        break;


                    case 3:

                        system("cls");
                        alterarPalestrante(palestrantes);
                        system("pause");
                        system("cls");
                        menu_palestrante();
                        break;


                    case 4:

                        system("cls");
                        remover(palestrantes);
                        system("pause");
                        system("cls");
                        menu_palestrante();
                        break;


                    default:
                        system("cls");
                        menu_incial();
                        onPales = 0;
                        break;

                }
            }
            onPales = 1;
            break;


        case 3:
            system("cls");
            menu_organizadores();

            while(onOrg){
                scanf("%d",&opOrganizadores);

                while(opOrganizadores<1 || opOrganizadores>5){
                system("cls");
                menu_organizadores();
                scanf("%d",&opOrganizadores);
                }

                switch(opOrganizadores){

                    case 1:
                        system("cls");
                        int auxCadastro;
                        auxCadastro = cadastroPalestrante(organizadores , &dados  , padraoMatricula);
                        if(auxCadastro==1){
                          inserir(organizadores,dados);
                          padraoMatricula++;
                        }
                        system("pause");
                        system("cls");
                        menu_organizadores();
                        break;


                    case 2:

                        system("cls");
                        mostrarOrganizador(organizadores);
                        system("pause");
                        system("cls");
                        menu_organizadores();
                        break;


                    case 3:

                        system("cls");
                        alterarPalestrante(organizadores);
                        system("pause");
                        system("cls");
                        menu_organizadores();
                        break;


                    case 4:

                        system("cls");
                        remover(organizadores);
                        system("pause");
                        system("cls");
                        menu_organizadores();
                        break;


                    default:
                        system("cls");
                        menu_incial();
                        onOrg = 0;
                        break;

                }
            }
            onOrg = 1;
            break;


        case 4:
            system("cls");
            menu_eventos();

            while(onEven){
                scanf("%d",&opEventos);

                while(opEventos<1 || opEventos>5){
                system("cls");
                menu_eventos();
                scanf("%d",&opEventos);
                }

                switch(opEventos){

                    case 1:

                    system("cls");
                    menu_palestra();

                    while(onEPale){
                        scanf("%d",&opEPalestra);

                        while(opEPalestra<1 || opEPalestra>5){
                        system("cls");
                        menu_palestra();
                        scanf("%d",&opEPalestra);
                    }

                        switch(opEPalestra){

                        case 1:

                            system("cls");
                            int auxCadastroEvento;
                            auxCadastroEvento = cadastroEvento(palestra,&dadosE,palestrantes);
                            if(auxCadastroEvento == 1){
                            inserirEvento(palestra,dadosE);
                            }
                            system("pause");
                            system("cls");
                            menu_palestra();

                            break;


                        case 2:

                            system("cls");
                            mostrarPalestra(palestra);
                            system("pause");
                            system("cls");
                            menu_palestra();
                            break;

                        case 3:

                            system("cls");
                            alterarEvento(palestra,palestrantes);
                            system("pause");
                            system("cls");
                            menu_palestra();

                            break;


                        case 4:

                            system("cls");
                            removerEvento(palestra);
                            system("pause");
                            system("cls");
                            menu_palestra();

                            break;


                        default:
                            system("cls");
                            menu_eventos();
                            onEPale = 0;
                            break;

                        }
                    }
                    onEPale = 1;

                        break;


                    case 2:

                    system("cls");
                    menu_curso();

                    while(onECur){
                        scanf("%d",&opECurso);

                        while(opECurso<1 || opECurso>5){
                        system("cls");
                        menu_curso();
                        scanf("%d",&opECurso);
                    }

                        switch(opECurso){

                        case 1:
                            system("cls");
                            int auxCurso;
                            auxCurso = cadastroEventoT(curso,&dadosE,palestrantes);
                            if(auxCurso == 1){
                            inserirEvento(curso,dadosE);
                            }
                            system("pause");
                            system("cls");
                            menu_curso();
                            break;


                        case 2:

                            system("cls");
                            mostrarCurso(curso);
                            system("pause");
                            system("cls");
                            menu_curso();

                            break;


                        case 3:

                            system("cls");
                            alterarEventoT(curso,palestrantes);
                            system("pause");
                            system("cls");
                            menu_curso();

                            break;


                        case 4:

                            system("cls");
                            removerEvento(curso);
                            system("pause");
                            system("cls");
                            menu_curso();

                            break;


                        default:
                            system("cls");
                            menu_eventos();
                            onECur = 0;
                            break;

                        }
                    }
                    onECur = 1;

                        break;


                    case 3:

                    system("cls");
                    menu_grupoD();

                    while(onEGru){
                        scanf("%d",&opEGrupo);

                        while(opEGrupo<1 || opEGrupo>5){
                        system("cls");
                        menu_grupoD();
                        scanf("%d",&opEGrupo);
                    }

                        switch(opEGrupo){

                        case 1:

                            system("cls");
                            int auxCadastroEvento;
                            auxCadastroEvento = cadastroEventoG(grupoD,&dadosE,palestrantes);
                            if(auxCadastroEvento == 1){
                            inserirEvento(grupoD,dadosE);
                            }
                            system("pause");
                            system("cls");
                            menu_grupoD();

                            break;


                        case 2:
                            system("cls");
                            mostrarGrupoD(grupoD);
                            system("pause");
                            system("cls");
                            menu_grupoD();

                            break;


                        case 3:

                            system("cls");
                            alterarEventoG(grupoD,palestrantes);
                            system("pause");
                            system("cls");
                            menu_grupoD();

                            break;


                        case 4:

                            system("cls");
                            removerEvento(grupoD);
                            system("pause");
                            system("cls");
                            menu_grupoD();

                            break;


                        default:
                            system("cls");
                            menu_eventos();
                            onEGru = 0;
                            break;

                        }
                    }
                    onEGru = 1;

                        break;


                    case 4:
                    system("cls");
                    menu_oficina();

                    while(onOfi){
                        scanf("%d",&opEOficina);

                        while(opEOficina<1 || opEOficina>5){
                        system("cls");
                        menu_oficina();
                        scanf("%d",&opEOficina);
                    }

                        switch(opEOficina){

                        case 1:
                            system("cls");
                            int auxCadastroEvento;
                            auxCadastroEvento = cadastroEventoT(oficina,&dadosE,palestrantes);
                            if(auxCadastroEvento == 1){
                            inserirEvento(oficina,dadosE);
                            }
                            system("pause");
                            system("cls");
                            menu_oficina();
                            break;

                            break;


                        case 2:
                            system("cls");
                            mostrarOficina(oficina);
                            system("pause");
                            system("cls");
                            menu_oficina();

                            break;


                        case 3:

                            system("cls");
                            alterarEventoT(oficina,palestrantes);
                            system("pause");
                            system("cls");
                            menu_oficina();

                            break;


                        case 4:

                            system("cls");
                            removerEvento(oficina);
                            system("pause");
                            system("cls");
                            menu_oficina();

                            break;


                        default:
                            system("cls");
                            menu_eventos();
                            onOfi = 0;
                            break;

                        }
                    }
                    onOfi = 1;

                        break;


                    default:
                        system("cls");
                        menu_incial();
                        onEven = 0;
                        break;

                }
            }
            onEven = 1;

            break;

        case 5:

            system("cls");
            menu_inscricoes();

            while(onIns){
                scanf("%d",&opInscricao);

                while(opInscricao<1 || opInscricao>4){
                system("cls");
                menu_inscricoes();
                scanf("%d",&opInscricao);
                }

                switch(opInscricao){

                    case 1:
                        system("cls");
                        int auxIns;
                        auxIns = cadastroIns(inscricao,&dadosI,congressista,palestra,curso,oficina,grupoD);
                        if(auxIns!=0){
                            inserirIns(inscricao,dadosI);
                        }
                        system("pause");
                        system("cls");
                        menu_inscricoes();
                        break;


                    case 2:
                        system("cls");
                        mostrarIns(inscricao);
                        system("pause");
                        system("cls");
                        menu_inscricoes();

                        break;

                    case 3:
                        system("cls");
                        cancelarP(inscricao);
                        system("pause");
                        system("cls");
                        menu_inscricoes();
                        break;

                    default:
                        system("cls");
                        menu_incial();
                        onIns = 0;
                        break;

                }
            }
            onIns = 1;
            break;

        default:
            system("cls");
            //menu_final();
            onGeral = 0;
      }
    }
    liberar(congressista);
    liberar(palestrantes);
    liberar(organizadores);
    liberarEventos(palestra);
    liberarEventos(curso);
    liberarEventos(oficina);
    liberarEventos(grupoD);
    liberarIns(inscricao);
}
