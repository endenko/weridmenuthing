#include <stdio.h>
#include <stdlib.h>
struct node {
  int vertex;
  struct node* next;
};
struct node* create_node(int);
struct Graph {
  int numVertices;
  struct node** adjLists;
};
struct node* create_node(int v) {
  struct node* new_node = malloc(sizeof(struct node));
  new_node->vertex = v;
  new_node->next = NULL;
  return new_node;
}
struct Graph* create_graph(int vertices) {
  struct Graph* graph = malloc(sizeof(struct Graph));
  graph->numVertices = vertices;
  graph->adjLists = malloc(vertices * sizeof(struct node*));
  for(int i = 0; i < vertices; i++)
    graph->adjLists[i] = NULL;
  return graph;
}
void add_edge(struct Graph* graph, int s, int d) {
  struct node* new_node = create_node(d);
  new_node->next = graph->adjLists[s];
  graph->adjLists[s] = new_node;
  new_node = create_node(s);
  new_node->next = graph->adjLists[d];
  graph->adjLists[d] = new_node;
}
void print(struct Graph* graph) {
  for (int v = 2; v < graph->numVertices; v++) {
    struct node* temp = graph->adjLists[v];
    printf("\nÐ?nh %d\n: ", v);
    while (temp) {
      printf("%d -> ", temp->vertex);
      temp = temp->next;
    }
    printf("\n");
  }
}
int main() {
  struct Graph* graph = create_graph(6);
  add_edge(graph, 2, 3);
  add_edge(graph, 2, 4);
  add_edge(graph, 2, 5);
  add_edge(graph, 3, 4);
  print(graph);
  return 0;
}
