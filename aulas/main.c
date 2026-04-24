#include <stdio.h>
#include <string.h>
#include "agenda.h"

int main() {
    Agenda agenda = criar_agenda(10);

    Contato contato1;
    strcpy(contato1.nome, "Daniel");
    strcpy(contato1.telefone, "1111-1111");
    adicionar_contato(&agenda, contato1);

    Contato contato2;
    strcpy(contato2.nome, "Mickey");
    strcpy(contato2.telefone, "2222-2222");
    adicionar_contato(&agenda, contato2);

    listar_contato(&agenda);


    return 0;
}

/*
    Copilar com: 
    
    gcc main.c agenda.c -o programa
    ./programa
*/