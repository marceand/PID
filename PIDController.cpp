#include "PIDController.h"

void PIDController::setGains(float P, float I, float D)
{
    _rollPID.setGains(P, I, D);
    _pitchPID.setGains(P, I, D);
    _yawPID.setGains(P, I, D);
}

void PIDController::setTimeStep(float dt)
{
    _rollPID.setTimeStep(dt);
    _pitchPID.setTimeStep(dt);
    _yawPID.setTimeStep(dt);
}

void PIDController::setOutputLimit(float limit)
{
    _rollPID.setOutputLimit(limit);
    _pitchPID.setOutputLimit(limit);
    _yawPID.setOutputLimit(limit);
}

void PIDController::setIntegralLimit(float limit)
{
    _rollPID.setIntegralLimit(limit);
    _pitchPID.setIntegralLimit(limit);
    _yawPID.setIntegralLimit(limit);
}

float PIDController::computeRollPID(float desired, float actual)
{
    return _rollPID.computePID(desired, actual);
}

float PIDController::computePitchPID(float desired, float actual)
{
    return _pitchPID.computePID(desired, actual);
}

float PIDController::computeYawPID(float desired, float actual)
{
    return _yawPID.computePID(desired, actual);
}
