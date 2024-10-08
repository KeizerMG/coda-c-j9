#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

  
int main()  
{  
    structure s_pos;
    s_pos.strength = 78;
    s_pos.intelligence = 87;
    s_pos.wisdom = 90;
    s_pos.agility = 83;
    s_pos.endurance = 70;

    printf("strengh:%d\n", s_pos.strength);

    printf("intelligence:%d\n", s_pos.intelligence);

    printf("wisdom:%d\n", s_pos.wisdom);

    printf("agility:%d\n", s_pos.agility);

    printf("endurance:%d\n", s_pos.endurance);  
  
  
    exit(0);  
}