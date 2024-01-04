#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

// Define the maximum number of vertices in the graph
const int MAX_VERTICES = 1000;

// Graph represented as an adjacency list
vector<pair<int, int>> graph[MAX_VERTICES]; // Pair<neighbor, weight>

// Function to add an edge to the graph
void addEdge(int u, int v, int w) {
    graph[u].push_back(make_pair(v, w));
    // For undirected graph, add this line:
    // graph[v].push_back(make_pair(u, w));
}

// Dijkstra's algorithm to find the shortest path
void dijkstra(int source, vector<int> &distance) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    // Initialize distances to all vertices as infinite
    fill(distance.begin(), distance.end(), INT_MAX);

    // Insert source itself in priority queue and initialize its distance as 0.
    pq.push(make_pair(0, source));
    distance[source] = 0;

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        // Get all adjacent vertices of u
        for (auto &p : graph[u]) {
            int v = p.first;
            int weight = p.second;

            // If there is a shorter path to v through u
            if (distance[v] > distance[u] + weight) {
                // Update distance of v
                distance[v] = distance[u] + weight;
                pq.push(make_pair(distance[v], v));
            }
        }
    }
}

int main() {
    int numVertices, numEdges;
    cout << "Enter number of vertices and edges: ";
    cin >> numVertices >> numEdges;

    for (int i = 0; i < numEdges; i++) {
        int u, v, w;
        cout << "Enter edge (u v w): ";
        cin >> u >> v >> w;
        addEdge(u, v, w);
    }

    vector<int> distance(numVertices);
    dijkstra(0, distance); // Assuming 0 as the source vertex

    cout << "Shortest distances from source 0:" << endl;
    for (int i = 0; i < numVertices; i++) {
        cout << "Vertex " << i << " : " << distance[i] << endl;
    }

    return 0;
}

