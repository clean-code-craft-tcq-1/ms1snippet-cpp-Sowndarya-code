#include "sensor-validate.h"

bool isDifferenceOkay(double value, double nextValue, double maxDelta) {
  if(nextValue - value > maxDelta) {
    return false;
  }
  return true;
}
bool generalValidation(double* values, int numOfValues, typeOfReading type) {
  int lastButOneIndex = numOfValues - 1;
  //double genMaxDelta = (type == typeOfReading::SOCReading) ? 0.05 : 0.1;
  for(int i = 0; i < lastButOneIndex; i++) {
     if(!isDifferenceOkay(values[i], values[i + 1], maxDelta[type])) {
             return false;
    }
  }
  return true;
}
bool validateSOCreadings(double* values, int numOfValues) {
  //int lastButOneIndex = numOfValues - 1;
  //for(int i = 0; i < lastButOneIndex; i++) {
   // if(!_give_me_a_good_name(values[i], values[i + 1], 0.05)) {
      //return false;
    //}
  //}
  //return true;
  if(values != nullptr)
  bool validationResult = generalValidation(values, numOfValues, SOCReading);
  return validationResult;
}

bool validateCurrentreadings(double* values, int numOfValues) {
  //int lastButOneIndex = numOfValues - 1;
  //for(int i = 0; i < lastButOneIndex; i++) {
    //if(!_give_me_a_good_name(values[i], values[i + 1], 0.1)) {
    //  return false;
    //}
  //}
  //return true;
  if(values != nullptr)
  bool validationResult = generalValidation(values, numOfValues, CurrentReading);
  return validationResult;
}
