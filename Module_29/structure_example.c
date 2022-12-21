#include<stdio.h>
#include<math.h>

struct Pointer{
    int x;
    int y;
};

double distance(struct Pointer p, struct Pointer q)
{
    return sqrt(pow(p.x - q.x, 2) + pow(p.y - q.y, 2));
}

int main(){
    struct Pointer p1, p2;

    scanf("%d %d", &p1.x, &p1.y);
    scanf("%d %d", &p2.x, &p2.y);

    printf("The distance between them = %lf\n", distance(p1, p2));

    return 0;
}