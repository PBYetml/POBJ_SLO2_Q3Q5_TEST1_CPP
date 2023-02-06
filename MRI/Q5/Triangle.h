#ifndef Triangle_h
#define Triangle_h

#include "Signal.h"


class Triangle : public Signal, public Signal {

 public:

    void CaclulerEchantillons(int Amplitude, int DutyCycle);
};

#endif // Triangle_h
