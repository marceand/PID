#include "CopterPID.h"

class PIDController
{

public:
    void setGains(float P, float I, float D);
    void setTimeStep(float dt);
    void setOutputLimit(float limit);
    void setIntegralLimit(float limit);
    float computeRollPID(float desired, float actual);
    float computePitchPID(float desired, float actual);
    float computeYawPID(float desired, float actual);

private:
    CopterPID _rollPID;
    CopterPID _pitchPID;
    CopterPID _yawPID;
};
