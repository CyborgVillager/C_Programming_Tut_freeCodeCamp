#include <stdio.h>
#include <stdlib.h>

int old_main()
{
    char player_Name[] = "Adamanian";
    int age = 25;
    double experience_Points = 55.5;
    char rank_Name[] = "Mining";
    char mining_SkillLevel = 'B';
    char phrase[] = "Goblin Hunter";

    printf("Player %s current age is: %d, with total experience points: %.2f \n", player_Name,age,experience_Points);
    printf("%s Skill rank for %s  is %c with the title %s \n",player_Name, rank_Name,mining_SkillLevel,phrase);
    return 0;
}