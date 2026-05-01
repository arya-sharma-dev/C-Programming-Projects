#include <stdio.h>
struct batsman {
    int bcode;          
    char bname[20];     
    int innings;       
    int notout;        
    int runs;          
    float batavg;      
};
void calcavg(struct batsman *b) {
    if (b->innings - b->notout != 0) {
        b->batavg = (float)b->runs / (b->innings - b->notout);
    } else {
        b->batavg = 0.0;
    }
}

int main() {
    struct batsman player;
    printf("Enter 4-digit batsman code: ");
    scanf("%d", &player.bcode);

    printf("Enter batsman name: ");
    scanf(" %[^\n]%*c", player.bname); 

    printf("Enter innings, not out, and total runs: ");
    scanf("%d %d %d", &player.innings, &player.notout, &player.runs);
    calcavg(&player);
    printf("\n--- Batsman Details ---\n");
    printf("Code: %04d\n", player.bcode);
    printf("Name: %s\n", player.bname);
    printf("Innings: %d\n", player.innings);
    printf("Not Out: %d\n", player.notout);
    printf("Runs: %d\n", player.runs);
    printf("Batting Average: %.2f\n", player.batavg);

    return 0;
}
