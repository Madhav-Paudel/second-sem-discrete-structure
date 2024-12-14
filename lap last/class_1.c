// wap to take graph (directed + undirected) and show the degree of each vertices
#include <stdio.h>
#define VERTICES 100

int main() {
    int numofvertices, i, j;
    int graph[VERTICES][VERTICES];
    int degrees[VERTICES];

    printf("Enter the number of vertices: ");
    scanf("%d", &numofvertices);

    printf("Enter the adjacency matrix:\n");
    for (i = 0; i < numofvertices; i++) {
        for (j = 0; j < numofvertices; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    // Calculate degrees
    for (i = 0; i < numofvertices; i++) {
        degrees[i] = 0;
        for (j = 0; j < numofvertices; j++) {
            degrees[i] += graph[i][j]; // Undirected: add both incoming and outgoing edges
        }
    }

    // Print degrees
    printf("Vertex Degrees:\n");
    for (i = 0; i <numofvertices; i++) {
        printf("Vertex %d: %d\n", i+1, degrees[i]);
    }

    return 0;
}