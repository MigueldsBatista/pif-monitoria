// 4. O Verificador de Documentos — Comparador de Sufixos

// Um  sistema  de  arquivamento  precisa  classificar  documentos  pelo  sufixo  de  seus  nomes:  .pdf,

// .txt,  .exe...  O  problema:  a  biblioteca  padrão  foi  removida  do  ambiente  restrito.  Você  precisa
// recriar a lógica do zero.

// Crie  a  função  compara_sufixo  que  verifica  se  str  termina  exatamente  com  o  conteúdo  de

// sufixo. Para encontrar os comprimentos, itere os ponteiros até o '\0'. Retorne 1 (verdadeiro)
// ou 0 (falso).

// int compara_sufixo(char *str, char *sufixo);

// Exemplos: compara_sufixo("relatorio.pdf", ".pdf") → 1 |

// compara_sufixo("imagem.png", ".jpg") → 0.

// n Restrição: proibido usar qualquer função de <string.h>.
#include <string.h>

int strlen(char *string){
    return sizeof(string) - 1;
}

int compara_sufixo(char *string, char *sufixo){
    int tamanho_string = strlen(string);
    int tamanho_sufixo = strlen(sufixo);
    int indice = tamanho_string - tamanho_sufixo;
    string += indice;

    while (string != '\0'){
        if(string != )
    }
    
    
}


void main(){
    char texto[] = "meu";
    for
}