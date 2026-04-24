#ifndef DIJKSTRA_HPP
#define DIJKSTRA_HPP

#include <iostream>
#include <nlohmann/json.hpp>

using namespace std;
using json = nlohmann::json;

char menu(const json &graph);

void dijkstra(const json &graph, char start_point);

#endif