
bool _give_me_a_good_name(double value, double nextValue, double maxDelta);

bool validateSOCreadings(double* values, int numOfValues);

bool validateCurrentreadings(double* values, int numOfValues);

enum class typeOfReading{
 SOCReading,
CurrentReadingc
};

bool generalValidation(double* values, int numOfValues, typeOfReading type);
