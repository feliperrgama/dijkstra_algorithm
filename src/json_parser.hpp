#ifndef JSON_READER_HPP
#define JSON_READER_HPP

#include <string>
#include <nlohmann/json.hpp>

using namespace std;
using json = nlohmann::json;

json readGraphinJson(const string& file_json_path);

#endif