#include<stdio.h>
#define infinity 999

void dij(int n, int v, int cost[10][10], int dist[]) {
    int i, u, count, w, flag[10], min;

    // Initialize
    for(i = 1; i <= n; i++) {
        flag[i] = 0;             // Set all nodes as unvisited
        dist[i] = cost[v][i];    // Initialize distances to source node
    }

    flag[v] = 1;  // Mark source node as visited
    count = 1;    // Count nodes processed

    // Main loop
    while(count < n) {
        min = infinity;
        u = -1;

        // Find the unvisited node with the smallest distance
        for(w = 1; w <= n; w++) {
            if(dist[w] < min && !flag[w]) {
                min = dist[w];
                u = w;
            }
        }

        // If no node is reachable, break
        if(u == -1) break;

        flag[u] = 1; // Mark selected node as visited
        count++;     // Increment count of processed nodes

        // Update distances to other nodes
        for(w = 1; w <= n; w++) {
            if(!flag[w] && (dist[u] + cost[u][w] < dist[w])) {
                dist[w] = dist[u] + cost[u][w];
            }
        }
    }
}

int main() {
    int n, v, i, j, cost[10][10], dist[10];

    // Input number of nodes
    printf("\nEnter the number of nodes: ");
    scanf("%d", &n);

    // Input cost adjacency matrix
    printf("\nEnter the cost matrix:\n");
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++) {
            scanf("%d", &cost[i][j]);
            if(cost[i][j] == 0 && i != j) {
                cost[i][j] = infinity; // No direct path between nodes
            }
        }
    }

    // Input the source node
    printf("\nEnter the source node: ");
    scanf("%d", &v);

    // Run Dijkstra's algorithm
    dij(n, v, cost, dist);

    // Output shortest paths
    printf("\nShortest Path from node %d:\n", v);
    for(i = 1; i <= n; i++) {
        if(i != v) {
            printf("%d -> %d, cost = %d\n", v, i, dist[i]);
        }
    }

    return 0;
}
