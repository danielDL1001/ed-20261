#include <stdio.h>
#include <string.h>
#include "agenda.h"

int main() {
    Agenda agenda = criar_agenda(10);

    Contato contato;
    strcpy(contato.nome, "Daniel");
    strcpy(contato.telefone, "1111-1111");

    adicionar_contato(agenda, contato);

    lista_contato(agenda);


    return 0;
}