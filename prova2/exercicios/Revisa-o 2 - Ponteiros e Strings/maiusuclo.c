#include <stdbool.h>

bool is_lower(char letter){
    return(letter >= 'a' && letter <= 'z');
}

char char_to_upper(char letter){
    if(is_lower(letter)){
        return letter - ('a' - 'A');
    }

    return letter;
}