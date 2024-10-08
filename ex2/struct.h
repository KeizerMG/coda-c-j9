#ifndef STRUCT_H  
#define STRUCT_H  
  
// Déclaration de la structure
struct s_char {  
    int strength;  
    int intelligence;  
    int wisdom;  
    int agility;  
    int endurance;  
};  

// Création du typedef pour simplifier l'utilisation
typedef struct s_char character;  
  
#endif // STRUCT_H
