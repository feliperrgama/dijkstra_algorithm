#include "dijkstra.h"
#include "json_parser.h"
#include <iostream>

using namespace std;

int main() {
  json graph = readGraphinJson("../data/graph.json");

  dijkstra(graph, menu(graph));
}