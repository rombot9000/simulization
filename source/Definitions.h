#pragma once
#include <map>

enum class groundType
{
    Rock,
    Soil,
    Water
};

enum class resourceType {Water};

typedef std::map<resourceType, double> mapResourceTypeToDouble;
