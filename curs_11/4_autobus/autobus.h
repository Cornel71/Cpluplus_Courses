class Autobus
{

private:

    // Numarul de pasageri aflati la momentul curent in Autobus
    int nrPasageri; // sau _iNrPasageri

public:
    /*
    Constructor implicit fara parametrii initializeaza obiectele din clasa Autobus
    */
    Autobus();

    /*
    Simuleaza urcarea unui numar de pasageri in autobus
    parametrul iNrPasageri reprezinta numarul pasagerilor ce urca
    */
    void Urca(int iNrPasageri);

    /*
    Simuleaza coborarea unui numar de pasageri in autobus
    parametrul iNrPasageri reprezinta numarul pasagerilor ce coboara
    */
    void Coboara(int iNrPasageri);

    /*
    Simuleaza coborarea unui numar de pasageri in Autobus
    parametrul iNrPasageri reprezinta numarul pasagerilor ce coboara
    */
    void Informatie();
    /*
    Afiseaza informatii despre starea - numarul pasagerilor din Autobus
    */
};
