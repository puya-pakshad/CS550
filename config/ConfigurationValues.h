//
// Created by pablo on 21/05/2022.
//

#ifndef ChronoSQL_CONFIGURATIONVALUES_H
#define ChronoSQL_CONFIGURATIONVALUES_H

#include "Enumerations.h"
#include "ConfigConstants.h"

using namespace Enumerations;
using namespace ConfigConstants;

class ConfigurationValues {

public:
    // Common configuration
    int nEvents;
    EventType eventType;
    std::string outputFile;

    // Key-value configuration
    int payloadSize = 0;
    int payloadVariation = 0;
    int fixedPayloadSize = 0;
    long lowerTimestamp = 1628202739;
    long higherTimestamp = 1659738749;

    // Indexing configuration
    int indexIntervalBytes = 4096;

    // Testing configuration
    bool hideOutput;
    int nExecutions = 3;
    std::string sqlFilePath;
};


#endif //ChronoSQL_CONFIGURATIONVALUES_H
