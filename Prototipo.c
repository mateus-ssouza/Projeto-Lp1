#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

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
            printf("\nElemento inserido\n");
        }
    }
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

void removerAL(LISTAD *ld, char nomeBusca[]){ //Funcao de remover um dado alterado para que posteriormente
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

void alterar(LISTAD *ld){  //Funcao responsavel em editar os dados de uma lista
    char nomeBusca[20], nomeNovo[20], cursoNovo[40];
    char emailNovo[40];
    int opAlterar;
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
                            printf("\n\n\t\t\t\t\t\t\t\tDIGITE O NOVO NOME: \n\n");
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
                            printf("\n\n\t\t\t\t\t\t\t\tDIGITE O NOVO CURSO: \n\n");
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
                            printf("\n\n\t\t\t\t\t\t\t\tDIGITE O NOVO EMAIL: \n\n");
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
                            printf("\n\n\t\t\t\t\t\t\t\tDIGITE A NOVA IDENTIDADE(RG): \n\n");
                            printf("\t\t\t\t\t\t\t\tIDENTIDADE(RG): ");
                            scanf("%d",&aux->dados.rg);
                            while(aux->dados.rg<1000000 || aux->dados.rg>9999999){
                            system("cls");
                            printf("\n\t\t\t\t\t\t\t\t---------------------------");
                            printf("\n\t\t\t\t\t\t\t\tIdentidade invalida!");
                            printf("\n\t\t\t\t\t\t\t\t---------------------------\n\n");
                            system("pause");
                            system("cls");
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
        }
    }
    if(opAlterar==1){ //Caso eu altere o nome entra aqui no if
        removerAL(ld,nomeNovo);//Removo o dado que alterei
        inserir(ld,x);//E o adiciono novamente para orderna-lo na lista
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

int cadastro(LISTAD *ld , CADASTRO *c , int m){ //Funcao de coleta de dados para serem inseridos na lista
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
                printf("\n\t\t\t\t\t\t\t\tDIGITE NUMERO DA IDENTIDADE(RG): ");
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
                    printf("\n\t\t\t\t\t\t\t\tDIGITE NUMERO DA IDENTIDADE(RG): ");
                    scanf("%d",&c->rg);
                }
                c->matricula = m;
                return 1;
            }
        }
    }
}

void cadastroOrganizadores(LISTAD *ld , CADASTRO *c , int m){
    if(ld==NULL){
    }
    else{
        if(ld->inicio == NULL){
            system("cls");
            printf("\n\t\t\t\t\t\t\t\t---------------------------\n");
            printf("\n\t\t\t\t\t\t\t\tCADASTRO CONGRESSISTA: \n\n");
            printf("\t\t\t\t\t\t\t\tDIGITE O NOME: ");
            setbuf(stdin,NULL);
            fgets(c->nome,19,stdin);
            c->matricula = m;
        }
    }
}

int main(){
    LISTAD *congressista = criar() , *palestrantes , *organizadores;
    CADASTRO dados;
    int padraoMatricula = 10001;
    int opGeral, opCongressista , opPalestrante , opOrganizadores , opEventos;
    int onGeral = 1 , onCongre = 1 , onPales = 1 , onOrg = 1 , onEven = 1;
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

      switch(opGeral){

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
                        auxCadastro = cadastro(congressista , &dados  , padraoMatricula);
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
                        alterar(congressista);
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
            break;


        case 2:
            break;


        case 3:
            break;


        case 4:
            break;


        default:
            system("cls");
            //menu_final();
            onGeral = 0;
      }
    }
    liberar(congressista);
}