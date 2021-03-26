#include "sensor-validate.h"

bool isDifferenceOkay(double value, double nextValue, double maxDelta) {
  if(nextValue - value > maxDelta) {
    return false;
  }
  return true;
}
bool generalValidation(double* values, int numOfValues, typeOfReading type) {
  int lastButOneIndex = numOfValues - 1;
  for(int i = 0; i < lastButOneIndex; i++) {
     if(!isDifferenceOkay(values[i], values[i + 1], maxDelta[type])) {
             return false;
    }
  }
  return true;
}
bool validateSOCreadings(double* values, int numOfValues) {
  bool SOCvalidationResult = false;
  if(values != nullptr)
  SOCvalidationResult = generalValidation(values, numOfValues, SOCReading);
  return SOCvalidationResult;
}

bool validateCurrentreadings(double* values, int numOfValues) {
  bool CurrentvalidationResult = false;
  if(values != nullptr)
  CurrentvalidationResult = generalValidation(values, numOfValues, CurrentReading);
  return CurrentvalidationResult;
}
