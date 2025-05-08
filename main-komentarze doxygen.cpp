#include<iostream>
#include<string>
#include<vector>

using namespace std;

/**
 * @brief Klasa bazowa reprezentująca ogólne zwierzę.
 */
class Zwierze {
protected:
    string nazwa;              ///< Nazwa zwierzęcia
    int ileOSobnikow;          ///< Liczba osobników danego gatunku

    bool czyCieploLubny;       ///< Czy zwierzę jest ciepłolubne
    bool czyLata;              ///< Czy zwierzę lata
    bool czyChroniony;         ///< Czy zwierzę jest chronione
    bool czyPlywa;             ///< Czy zwierzę pływa
    bool czySkrzydla;          ///< Czy zwierzę ma skrzydła

public:
    /**
     * @brief Konstruktor domyślny.
     */
    Zwierze() {}

    /**
     * @brief Konstruktor parametryczny.
     * @param nazwa Nazwa zwierzęcia
     * @param ileOSobnikow Liczba osobników
     * @param czyCieploLubny Czy jest ciepłolubne
     * @param czyLata Czy lata
     * @param czyChroniony Czy jest chronione
     * @param czyPlywa Czy pływa
     * @param czySkrzydla Czy ma skrzydła
     */
    Zwierze(string nazwa, int ileOSobnikow, bool czyCieploLubny, bool czyLata, bool czyChroniony, bool czyPlywa, bool czySkrzydla);

    /**
     * @brief Destruktor wirtualny.
     */
    virtual ~Zwierze() {}

    /// @name Settery i gettery
    //@{
    virtual void setNazwa(string nazwa);
    virtual string getNazwa();

    virtual void setIleOSobnikow(int ileOSobnikow);
    virtual int getIleOSobnikow();

    virtual void setCzyCieploLubny(bool czyCieploLubny);
    virtual bool getCzyCieploLubny();

    virtual void setCzyLata(bool czyLata);
    virtual bool getCzyLata();

    virtual void setCzyChroniony(bool czyChroniony);
    virtual bool getCzyChroniony();

    virtual void setCzyPlywa(bool czyPlywa);
    virtual bool getCzyPlywa();

    virtual void setCzySkrzydla(bool czySkrzydla);
    virtual bool getCzySkrzydla();
    //@}

    /**
     * @brief Wirtualna metoda wypisująca informacje o zwierzęciu.
     */
    virtual void wypisz();
};

/**
 * @brief Klasa reprezentująca gady, dziedziczy po Zwierze.
 */
class Gady : public Zwierze {
protected:
    int iloscKonczyn; ///< Liczba kończyn

public:
    Gady();
    Gady(string nazwa, int ileOSobnikow, bool czyCieploLubny, bool czyLata, bool czyChroniony, bool czyPlywa, bool czySkrzydla, int iloscKonczyn);
    virtual ~Gady() {}

    void setIleKonczyn(); ///< Ustawia liczbę kończyn
    int getIleKonczyn();  ///< Zwraca liczbę kończyn

    void wypisz() override;
};

/**
 * @brief Klasa reprezentująca płazy.
 */
class Plazy : public Zwierze {
protected:
    bool przechodziMetamorfoze; ///< Czy przechodzi metamorfozę

public:
    Plazy();
    Plazy(string nazwa, int ileOSobnikow, bool czyCieploLubny, bool czyLata, bool czyChroniony, bool czyPlywa, bool czySkrzydla, bool przechodziMetamorfoze);
    virtual ~Plazy() {}

    void setPrzechodziMetamorfoze(); ///< Ustawia metamorfozę
    bool getPrzechodziMetamorfoze(); ///< Zwraca informację o metamorfozie

    void wypisz() override;
};

/**
 * @brief Klasa reprezentująca ptaki.
 */
class Ptaki : public Zwierze {
protected:
    double rozpietoscSkrzydel; ///< Rozpiętość skrzydeł

public:
    Ptaki();
    Ptaki(string nazwa, int ileOSobnikow, bool czyCieploLubny, bool czyLata, bool czyChroniony, bool czyPlywa, bool czySkrzydla, double rozpietoscSkrzydel);
    virtual ~Ptaki() {}

    void setRozpietoscSrzydel(); ///< Ustawia rozpiętość skrzydeł
    double getRozpietoscSkrzydel(); ///< Zwraca rozpiętość skrzydeł

    void wypisz() override;
};

/**
 * @brief Klasa reprezentująca ssaki.
 */
class Ssaki : public Zwierze {
protected:
    bool posiadaWlosy; ///< Czy posiada włosy
    bool posiadaFutro; ///< Czy posiada futro

public:
    Ssaki();
    Ssaki(string nazwa, int ileOSobnikow, bool czyCieploLubny, bool czyLata, bool czyChroniony, bool czyPlywa, bool czySkrzydla, bool posiadaWlosy, bool posiadaFutro);
    virtual ~Ssaki() {}

    void setPosiadaWlosy(); ///< Ustawia informację o włosach
    bool getPosiadaWlosy(); ///< Zwraca informację o włosach

    void setPosiadaFutro(); ///< Ustawia informację o futrze
    bool getPosiadaFutro(); ///< Zwraca informację o futrze

    void wypisz() override;
};

/**
 * @brief Klasa reprezentująca ryby.
 */
class Ryby : public Zwierze {
protected:
    int iloscPletw; ///< Liczba płetw

public:
    Ryby();
    Ryby(string nazwa, int ileOSobnikow, bool czyCieploLubny, bool czyLata, bool czyChroniony, bool czyPlywa, bool czySkrzydla, int iloscPletw);
    virtual ~Ryby() {}

    void setIloscPletw(); ///< Ustawia liczbę płetw
    int getIloscPletw();  ///< Zwraca liczbę płetw

    void wypisz() override;
};

/**
 * @brief Klasa przechowująca wszystkie zwierzęta w zoo.
 */
class Zoo {
private:
    vector<Zwierze*> zwierzeta; ///< Wektor wskaźników na zwierzęta

public:
    /**
     * @brief Dodaje zwierzę do kolekcji zoo.
     * @param zw Wskaźnik na zwierzę
     */
    void dodajZwierze(Zwierze* zw);

    /**
     * @brief Wypisuje wszystkie zwierzęta znajdujące się w zoo.
     */
    void wypisz();

    ~Zoo() {}
};

// --- Implementacje konstruktorów oraz metod znajdziesz dalej w kodzie
// --- Nie są powtarzane tutaj ponownie dla czytelności

/**
 * @brief Funkcja główna.
 * @return Zwraca 0 przy zakończeniu programu
 */
int main()
{
    Gady* jaszczurka = new Gady("Jaszczurka", 8, 1, 0, 0, 1, 0, 4);
    Ssaki* niedzwiedz = new Ssaki("Niedzwiedz", 3, 0, 0, 0, 1, 0, 0, 1);
    Ptaki* papuga = new Ptaki("Papuga", 10, 1, 1, 0, 0, 1, 90);

    Zoo zoo;
    zoo.dodajZwierze(jaszczurka);
    zoo.dodajZwierze(niedzwiedz);
    zoo.dodajZwierze(papuga);

    zoo.wypisz();

    return 0;
}
