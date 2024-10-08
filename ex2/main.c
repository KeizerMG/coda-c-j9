#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

// Prototype de la fonction
void fill_struct(character *ch);  // Passer un pointeur vers character

int main()  
{  
    // Déclarer une variable de type character
    character my_character;  

    // Remplir la structure en passant son adresse
    fill_struct(&my_character);  

    // Afficher les sous-variables
    printf("Strength: %d\n", my_character.strength);  
    printf("Intelligence: %d\n", my_character.intelligence);  
    printf("Wisdom: %d\n", my_character.wisdom);  
    printf("Agility: %d\n", my_character.agility);  
    printf("Endurance: %d\n", my_character.endurance);  

    return 0;  
}

// Définition de la fonction qui remplit la structure
void fill_struct(character *ch)  
{  
    // Remplir les sous-variables avec des valeurs de choix
    ch->strength = 78;  
    ch->intelligence = 87;  
    ch->wisdom = 90;  
    ch->agility = 83;  
    ch->endurance = 70;  
}
