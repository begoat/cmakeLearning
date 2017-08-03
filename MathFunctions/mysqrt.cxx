#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 
#include <iostream>
#include "MathFunctions.h"
#include "TutorialConfig.h"
#include "Table.h" // generated during the build time 
using namespace std;

double mysqrt(double value){
    cout<<"william's library"<<endl;
    double result;
#if defined (HAVE_LOG) && defined (HAVE_EXP) 
    cout<<"The system has log and exp"<<endl;
    result = exp(log(value)*0.5);
#else
    cout<<"Cannot call the system function"<<endl;
    result = sqrt(value);
#endif
    return result;
}