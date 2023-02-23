#ifndef Signal_h
#define Signal_h


class Signal {

 public:

    virtual void CalculerEchantillons(int Amplitude, int DutyCycle);

    void AfficherEchantillon();
	
private:

    int GetPeriodeEch();
	
protected:

	int m_TableEch[20];
	
	int m_Periodechantillonage;

};

#endif // Signal_h
