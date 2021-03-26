
bool _give_me_a_good_name(double value, double nextValue, double maxDelta);

bool validateSOCreadings(double* values, int numOfValues);

bool validateCurrentreadings(double* values, int numOfValues);

enum typeOfReading{
 SOCReading,
CurrentReading
};

enum maxDelta {
 0.05,
 0.1
};

bool generalValidation(double* values, int numOfValues, typeOfReading type);
