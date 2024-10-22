#include <stdlib.h>
#include <stdio.h>

typedef struct player {
    char *name;
    int score;
    int plays;
} player;

int cmp_players(const void *a, const void *b) {
    const player *p1 = (player *)a;
    const player *p2 = (player *)b;
    if(p1->score < p2->score) {
        return -1;
    } else if(p1->score > p2->score) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    player scores[] = {
        {"p1", 50, 2},
        {"p2", 150, 4},
        {"p3", 75, 1}
    };
    int n = sizeof(scores) / sizeof(player);
    int (*cmp)(const void *, const void *) = cmp_players;
    qsort(scores, n, sizeof(player), cmp);
    printf("Rank\tName\tScore\n");
    printf("1\t%s\t%d\n", scores[2].name, scores[2].score);
    printf("2\t%s\t%d\n", scores[1].name, scores[1].score);
    printf("3\t%s\t%d\n", scores[0].name, scores[0].score);
    return 0;
}