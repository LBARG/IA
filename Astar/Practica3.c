/*
Implementación código algoritmo A* para la solucíon de laberinto 5x5
Tema: Busqueda informada
Materia: Inteligencia Artificial
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define N 5 

//Nodo principal que contiene posición acutal, distancia de manhattan h(n), costo, función de acumulación g(n), costo acumulado final f(n), Nodo padre
typedef struct Node
{
    int x,y;
    int h, g, f;
    int cost;
    struct Node* parent; 

}Node;

typedef struct
{
    Node* array [N][N];
    int size;
} 
OrderedList;

int distMan(int x, int y, int xdes, int ydes)
{
    return abs (x-xdes) + abs (y - ydes);
}

void pushOrdered()
{

}

Node* PopBest()
{

}

void showPath(Node* node)
{
    if(node == NULL)
    {
        return;
    }
    showPath(node->parent);
    printf("(%d,%d)",node->x,node->y);
}
void Astar(int lab[N][N],int x, int y, int xdes, int ydes)
{

}






int main ()
{
    /* s=Inicio, M= Meta, Sea c los Costos | c = {0, 1, 2, ... , 10}*/
    int lab[N][N] = 
    {
        {0,0,0,0,0},
        {0,0,0,0,0},
        {0,0,0,0,0},
        {0,0,0,0,0},
        {0,0,0,0,0}
    };

    int x = 0, y = 0;
    int destX = 0, destY = 0;

    Astar(lab, x, destX, y, destY);
    return 0;
}

