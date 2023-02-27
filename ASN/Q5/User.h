#ifndef USER_H
#define USER_H

class SignalGenerator;

class User
{
public:
	void ConfigGenerator();
	void ObserveSignal();

	SignalGenerator *mySignalGenerator;
};

#endif
