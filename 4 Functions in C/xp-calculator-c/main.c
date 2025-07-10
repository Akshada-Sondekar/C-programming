/*Experince Points a player earned in level*/
#include <stdio.h>

int getXP();  // No parameters, returns int XP

int main() {
    int xp = getXP();
    printf("You have earned %d XP!\n", xp);
    return 0;
}

// Function definition
int getXP() {
    int enemyKillXP = 40;
    int missionXP = 60;
    int bonusXP = 20;

    int totalXP = enemyKillXP + missionXP + bonusXP;

    return totalXP; 
}