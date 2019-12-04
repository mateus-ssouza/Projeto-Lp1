#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

typedef struct{
    char nome[20];
    char curso[40];
    char email[40];
    int matricula,rg;
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
    printf("\t\t\t\t\t\t\t\t|    5 - Sair                               |\n");
    printf("\t\t\t\t\t\t\t\t|                                           |\n");
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




void cadastroEvento(LISTAE *le , EVENTO *e, LISTAD *ld){
    char locais[8][30] = {"AUD 1","AUD 2","AUD 3","SALA 1","SALA 2","SALA 3","LAB 1","LAB 2"};
    int opcaoLocal, i = 1;
    char nome[20];

    if(le == NULL){
    }
    else{
        if(le->inicio == NULL && ld->inicio!=NULL){
          system("cls");
            printf("\n\t\t\t\t\t\t\t\t---------------------------\n");
            printf("\n\t\t\t\t\t\t\t\t CADASTRO DO EVENTO: \n\n");
            printf("\t\t\t\t\t\t\t\t DIGITE O TEMA: ");
            setbuf(stdin,NULL);
            fgets(e->tema,49,stdin);
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
            printf("\n\t\t\t\t\t\t\t\t---------------------------\n");
            printf("\t\t\t\t\t\t\t\t HORARIO DO EVENTO: ");
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
                scanf("%d %d",&e->horario.hora,&e->horario.minuto);
            }

            system("cls");
            printf("\n\t\t\t\t\t\t\t\t---------------------------\n");
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
                    return;
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
                printf("\n\t\t\t\t\t\t\t\t---------------------------------");
                printf("\n\t\t\t\t\t\t\t\t NAO HA PALESTRANTES CADASTRADOS");
                printf("\n\t\t\t\t\t\t\t\t---------------------------------\n\n");
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



int main(){
    LISTAD *congressista = criar() , *palestrantes = criar() , *organizadores = criar();
    LISTAE *palestra = criarEventos() , *grupoD , *curso , *oficina;

    CADASTRO dados;
    EVENTO dadosE;

    int padraoMatricula = 10001;
    int opGeral, opCongressista , opPalestrante , opOrganizadores , opEventos;
    int onGeral = 1 , onCongre = 1 , onPales = 1 , onOrg = 1 , onEven = 1;

    int onEPale = 1 , onEGru = 1 , onECur = 1 , onOfi = 1;
    int opEPalestra ,opEGrupo , opECurso, opEOficina;

    system("color 17");
    //menu_principal();
    system("cls");
    menu_incial();

    while(onGeral){
      scanf("%d",&opGeral);
      while(opGeral<1 || opGeral>5){
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
                        int auxCadastro;
                        auxCadastro = cadastroCongressista(congressista , &dados  , padraoMatricula);
                        if(auxCadastro==1){
                          inserir(congressista,dados);
                          padraoMatricula++;
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
                        remover(congressista);
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
                menu_congressista();
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
                            cadastroEvento(palestra,&dadosE,palestrantes);
                            system("pause");
                            system("cls");
                            menu_palestra();

                            break;


                        case 2:


                            break;


                        case 3:


                            break;


                        case 4:


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

                            break;


                        case 2:


                            break;


                        case 3:


                            break;


                        case 4:


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

                            break;


                        case 2:


                            break;


                        case 3:


                            break;


                        case 4:


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


                            break;


                        case 2:


                            break;


                        case 3:


                            break;


                        case 4:


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
}
