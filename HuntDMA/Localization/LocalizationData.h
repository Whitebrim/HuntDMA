#pragma once
#include "pch.h"

struct LocalizationData {
    static const int LOCALIZATION_VERSION = 1;
    int version;
    std::unordered_map<std::string, std::unordered_map<std::string, std::string>> translations;
};