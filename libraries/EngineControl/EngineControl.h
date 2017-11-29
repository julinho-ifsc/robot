#ifndef EngineControl_h
#define EngineControl_h

#include <Arduino.h>

#define BASE_VELOCITY 75
#define TINY_FACTOR 0.4
#define SMALL_FACTOR 0.7
#define MEDIUM_FACTOR 0.9
#define NORMAL_FACTOR 1.0

struct EnginePins {
    int velocity;
    int rotation1;
    int rotation2;
};

struct SensorPins {
    int sensorPE;
    int sensorE;
    int sensorC;
    int sensorD;
    int sensorPD;
};

class EngineControl {
private:
    EnginePins _frontLeftPins;
    EnginePins _frontRightPins;
    EnginePins _backLeftPins;
    EnginePins _backRightPins;
    SensorPins _sensorPins;
    int _velocidade;
    int _referencia;
    void motor1(int velocity, int rotation1, int rotation2);
    void motor2(int velocity, int rotation1, int rotation2);
    void motor3(int velocity, int rotation1, int rotation2);
    void motor4(int velocity, int rotation1, int rotation2);
    void direita1();
    void direita2();
    void direita3();
    void direita4();
    void esquerda1();
    void esquerda2();
    void esquerda3();
    void esquerda4();
    void frente();
public:
    EngineControl(int velocity, int reference);
    void setFrontLeftPins(EnginePins enginePins);
    void setFrontRightPins(EnginePins enginePins);
    void setBackLeftPins(EnginePins enginePins);
    void setBackRightPins(EnginePins enginePins);
    void setSensorPins(SensorPins sensorPins);
    void parar();
    void loop();
};

#endif
