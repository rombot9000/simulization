#pragma once
#include <map>

enum class groundType
{
    rock,
    soil,
    water
};

enum class resourceType {water};

typedef std::map<resourceType, double> mapResourceTypeToDouble;
