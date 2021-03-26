
bool isDifferenceOkay(double value, double nextValue, double maxDelta);

bool validateSOCreadings(double* values, int numOfValues);

bool validateCurrentreadings(double* values, int numOfValues);

enum typeOfReading{
 SOCReading,
CurrentReading
};

const double maxDelta[] = {0.05,0.1};

bool generalValidation(double* values, int numOfValues, typeOfReading type);
