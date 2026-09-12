#include<stdio.h>
#include<math.h>

typedef struct point{
    double x;
    double y;

    double(*calculate)(struct point*);
}point;

double _calculate_distance(point *p){
    return sqrt(p->x * p->x + p->y * p->y);
}

void _init_point(point *p, double x, double y){
    p->x = x;
    p->y = y;
    p->calculate = _calculate_distance;
}

int main(){
    point p;
    _init_point(&p, 1, 2);
    printf("x - %1f\n",p.x);
    printf("y - %1f\n",p.y);

    printf("%1f",p.calculate(&p));
}
