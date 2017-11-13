#include <stdio.h>
#include <string.h>
#define QuantMax 100
int ProdultosCadastrados = 0;
void Menu();
struct Produlto{
        char nome [50];
        char descricao [100];
        int quantidade;
        float pcompra;
        float pvenda;
        int CodigoDeBarra;
        };
struct Produlto Estoque[QuantMax];
void main ()
{
    strcpy(Estoque[ProdultosCadastrados].nome,"Macarrao");
    strcpy(Estoque[ProdultosCadastrados].descricao,"Macarrao santa malha");
    Estoque[ProdultosCadastrados].quantidade = 1;
    Estoque[ProdultosCadastrados].pcompra = 2.90;
    Estoque[ProdultosCadastrados].pvenda = 4.35;
    Estoque[ProdultosCadastrados].CodigoDeBarra = 1;
    ProdultosCadastrados++;
    Menu();
}
void Cadastrar(){
    char NomeDoProd[50];
    char DescricaoDoProd[50];
    long CodigoDeBarra;
    printf("Digite  o nome do produlto: ");
    scanf("%s",NomeDoProd);
    printf("\nDigite sua descricao: ");
    scanf("%s",DescricaoDoProd);
    printf("\nDigite a quantidade: ");
    scanf("%i", &Estoque[ProdultosCadastrados].quantidade);
    printf("\nDigite o preco de compra: ");
    scanf("%f", &Estoque[ProdultosCadastrados].pcompra);
    printf("\nDigite o preco de venda: ");
    scanf("%f", &Estoque[ProdultosCadastrados].pvenda);
    strcpy(Estoque[ProdultosCadastrados].nome,NomeDoProd);
    strcpy(Estoque[ProdultosCadastrados].descricao,DescricaoDoProd);
    ProdultosCadastrados++;
    Estoque[ProdultosCadastrados - 1].CodigoDeBarra = ProdultosCadastrados;
    printf("\nProdulto Cadastrado com sucesso!");
    Menu();
}
void Listar(){
    printf("\n\nProdultos registrados\n");
    int x;
    for(x = 0; x!= ProdultosCadastrados; x++){
        printf("\nNome: %s\nDescricao: %s\nQuantidade: %i\nPreco de compra: %.2f\nPreco de venda: %.2f\nCodigo do produlto: %i\n\n",Estoque[x].nome,Estoque[x].descricao,Estoque[x].quantidade,Estoque[x].pcompra,Estoque[x].pvenda,Estoque[x].CodigoDeBarra);
    }
    Menu();
}
void AlterarCount(){
    int cod =0;
    printf("\n\nDigite  o codigo do produlto: ");
    scanf("%i",&cod);
    printf("\nDigite a quantidade nova do produlto: ");
    scanf("%i",&Estoque[cod - 1].quantidade);
    printf("\nProdulto alterado com sucesso!");
    Menu();
}
void BuscarProdulto(){
    int x =0;
    printf("\n\nDigite  o codigo do produlto: ");
    scanf("%i",&x);
    x = x -1;
    printf("\nNome: %s\nDescricao: %s\nQuantidade: %i\nPreco de compra: %.2f\nPreco de venda: %.2f\nCodigo do produlto: %i\n\n",Estoque[x].nome,Estoque[x].descricao,Estoque[x].quantidade,Estoque[x].pcompra,Estoque[x].pvenda,Estoque[x].CodigoDeBarra);
    Menu();
}
void Menu(){
    int opcao;
    printf(" \n            Supermercado Carlota\n\n\n");
    printf("\nDigite 1 - Cadastro de produltos");
    printf("\nDigite 2 - Alterar quantidade de produtos");
    printf("\nDigite 3 - Listar produtos");
    printf("\nDigite 4 - Buscar um produto por código de barras");
    printf("\n\nEscolher: ");
    scanf("%d",&opcao);
   switch(opcao){
    case  1:
        Cadastrar() ;break;
    case 2:
       AlterarCount(); break;
    case  3:
   Listar();    break;
    case 4:
   BuscarProdulto(); break;
    default:return;
    }
}
