#ifndef USER_H
#define USER_H

#include "SignalGenerator.h"

class User : public SignalGenerator
{
public:
	void ConfigGenerator();
	void ObserveSignal();
};

#endif
