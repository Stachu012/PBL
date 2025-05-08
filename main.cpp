#include<iostream>
#include<string>
#include<vector>


    using namespace std;
    class Zwierze{
    protected:
        string nazwa;
        int ileOSobnikow;

        bool czyCieploLubny;
        bool czyLata;
        bool czyChroniony;
        bool czyPlywa;
        bool czySkrzydla;



    public:

        virtual void setNazwa(string nazwa){this->nazwa = nazwa;}
        virtual string getNazwa(){return nazwa;}

        virtual void setIleOSobnikow (int ileOSobnikow){this->ileOSobnikow = ileOSobnikow;}
        virtual int getIleOSobnikow(){return ileOSobnikow;}

        virtual void setCzyCieploLubny (bool czyCieploLubny){this->czyCieploLubny = czyCieploLubny;}
        virtual bool getCzyCieploLubny (){return czyCieploLubny;}

        virtual void setCzyLata (bool czyLata){this->czyLata = czyLata;}
        virtual bool getCzyLata (){return czyLata;}

        virtual void setCzyChroniony (bool czyChroniony){this->czyChroniony = czyChroniony;}
        virtual bool getCzyChroniony (){return czyChroniony;}

        virtual void setCzyPlywa (bool czyPlywa){this->czyPlywa = czyPlywa;}
        virtual bool getCzyPlywa (){return czyPlywa;}

        virtual void setCzySkrzydla (bool czySkrydla){this->czySkrzydla = czySkrydla;}
        virtual bool getCzySkrzydla (){return czySkrzydla;}

	    virtual void wypisz();

        Zwierze() {}

        Zwierze(string nazwa, int ileOSobnikow, bool czyCieploLubny, bool czyLata, bool czyChroniony, bool czyPlywa, bool czySkrzydla) {
            this->nazwa = nazwa;
            this->ileOSobnikow = ileOSobnikow;
            this->czyCieploLubny = czyCieploLubny;
            this->czyLata = czyLata;
            this->czyChroniony = czyChroniony;
            this->czyPlywa = czyPlywa;
            this->czySkrzydla = czySkrzydla;
        }
        virtual ~Zwierze(){};

    };

    class Gady : public Zwierze{
    protected:
        int iloscKonczyn;

    public:

        void setIleKonczyn(){this->iloscKonczyn = iloscKonczyn;}
        int getIleKonczyn(){return iloscKonczyn;}


        Gady(string nazwa,int ileOSobnikow,bool czyCieploLubny,bool czyLata,bool czyChroniony,bool czyPlywa,bool czySkrzydla,int iloscKonczyn);
        Gady();

             virtual ~Gady(){};

             void wypisz(void);
    };

    class Plazy : public Zwierze{
    protected:
        bool przechodziMetamorfoze;


    public:

        void setPrzechodziMetamorfoze(){this->przechodziMetamorfoze = przechodziMetamorfoze;}
        bool getPrzechodziMetamorfoze(){return przechodziMetamorfoze;}


        Plazy();
        Plazy(string nazwa,int ileOSobnikow,bool czyCieploLubny,bool czyLata,bool czyChroniony,bool czyPlywa,bool czySkrzydla,bool przechodziMetamorfoze);

             virtual ~Plazy(){};

             void wypisz(void);
    };

    class Ptaki : public Zwierze{
    protected:
        double rozpietoscSkrzydel;


        public:
        void setRozpietoscSrzydel(){this->rozpietoscSkrzydel = rozpietoscSkrzydel;}
        double getRozpietoscSkrzydel(){return rozpietoscSkrzydel;}


        Ptaki(string nazwa,int ileOSobnikow,bool czyCieploLubny,bool czyLata,bool czyChroniony,bool czyPlywa,bool czySkrzydl,double rozpietoscSkrzydel);
        Ptaki();

            virtual ~Ptaki(){};

            void wypisz(void);
    };

    class Ssaki : public Zwierze{
    protected:
        bool posiadaWlosy;
        bool posiadaFutro;


       public:

        void setPosiadaWlosy(){this->posiadaWlosy = posiadaWlosy;}
        bool getPosiadaWlosy(){return posiadaWlosy;}

        void setPosiadaFutro(){this->posiadaFutro = posiadaFutro;}
        bool getPosiadaFutro(){return posiadaFutro;}

        Ssaki(string nazwa,int ileOSobnikow,bool czyCieploLubny,bool czyLata,bool czyChroniony,bool czyPlywa,bool czySkrzydl, bool posiadaWlosy,bool posiadaFutro);
        Ssaki();

            virtual ~Ssaki(){};

            void wypisz(void);
    };

    class Ryby : public Zwierze{
    protected:
        int iloscPletw;


       public:

        void setIloscPletw(){this->iloscPletw = iloscPletw;}
        int getIloscPletw(){return iloscPletw;}

        Ryby(string nazwa,int ileOSobnikow,bool czyCieploLubny,bool czyLata,bool czyChroniony,bool czyPlywa,bool czySkrzydl,int iloscPletw);
        Ryby();

            virtual ~Ryby(){};

            void wypisz(void);
    };


    class Zoo
    {
        private:
        vector <Zwierze*> zwierzeta;

        public:

        void dodajZwierze(Zwierze* zw){zwierzeta.push_back(zw);}

        void wypisz();

        ~Zoo(){}

    };

    //Konstruktor
    Gady::Gady(string nazwa, int ileOSobnikow, bool czyCieploLubny, bool czyLata, bool czyChroniony, bool czyPlywa, bool czySkrzydla, int iloscKonczyn):Zwierze(nazwa, ileOSobnikow, czyCieploLubny, czyLata, czyChroniony, czyPlywa, czySkrzydla)
    {
      this->  nazwa = nazwa;
      this->  ileOSobnikow = ileOSobnikow;
      this->  czyCieploLubny = czyCieploLubny;
      this->  czyLata = czyLata;
      this->  czyChroniony = czyChroniony;
      this->  czyPlywa = czyPlywa;
      this->  czySkrzydla = czySkrzydla;
      this->  czyPlywa = czyPlywa;
      this->  czySkrzydla = czySkrzydla;
      this->  iloscKonczyn = iloscKonczyn;
    }

    Plazy::Plazy(string nazwa, int ileOSobnikow, bool czyCieploLubny, bool czyLata, bool czyChroniony, bool czyPlywa, bool czySkrzydla,bool przechodziMetamorfoze):Zwierze(nazwa, ileOSobnikow, czyCieploLubny, czyLata, czyChroniony, czyPlywa, czySkrzydla)
    {
      this->  nazwa = nazwa;
      this->  ileOSobnikow = ileOSobnikow;
      this->  czyCieploLubny = czyCieploLubny;
      this->  czyLata = czyLata;
      this->  czyChroniony = czyChroniony;
      this->  czyPlywa = czyPlywa;
      this->  czySkrzydla = czySkrzydla;
      this->  czyPlywa = czyPlywa;
      this->  czySkrzydla = czySkrzydla;
      this->  przechodziMetamorfoze=przechodziMetamorfoze;
    }

    Ptaki::Ptaki(string nazwa, int ileOSobnikow, bool czyCieploLubny, bool czyLata, bool czyChroniony, bool czyPlywa, bool czySkrzydl, double rozpietoscSkrzydel)
    {
       this-> nazwa = nazwa;
       this-> ileOSobnikow = ileOSobnikow;
       this-> czyCieploLubny = czyCieploLubny;
       this-> czyLata = czyLata;
       this-> czyChroniony = czyChroniony;
       this-> czyPlywa = czyPlywa;
       this-> czySkrzydla = czySkrzydla;
       this-> rozpietoscSkrzydel=rozpietoscSkrzydel;
    }

    Ssaki::Ssaki(string nazwa, int ileOSobnikow, bool czyCieploLubny, bool czyLata, bool czyChroniony, bool czyPlywa, bool czySkrzydl, bool posiadaWlosy, bool posiadaFutro)
    {
       this->  nazwa = nazwa;
       this->  ileOSobnikow = ileOSobnikow;
       this-> czyCieploLubny = czyCieploLubny;
       this->  czyLata = czyLata;
       this-> czyChroniony = czyChroniony;
       this-> czyPlywa = czyPlywa;
       this-> czySkrzydla = czySkrzydla;
       this-> posiadaWlosy=posiadaWlosy;
       this-> posiadaFutro=posiadaFutro;
    }

    Ryby::Ryby(string nazwa, int ileOSobnikow, bool czyCieploLubny, bool czyLata, bool czyChroniony, bool czyPlywa, bool czySkrzydl, int iloscPletw)
    {
       this-> nazwa = nazwa;
       this-> ileOSobnikow = ileOSobnikow;
       this-> czyLata = czyLata;
       this-> czyChroniony = czyChroniony;
       this-> czyPlywa = czyPlywa;
       this-> czySkrzydla = czySkrzydla;
       this-> iloscPletw=iloscPletw;
    }



    //Funkcjie
    void Zwierze::wypisz() {}

    void Gady::wypisz(void){

        cout << "Nazwa zwierzaka:"<<nazwa << endl;
        cout << "Ilosc osobnikow na terenie zoo: " << getIleOSobnikow() << endl;
        if(czyCieploLubny == true){
            cout<<"Zwierze jest cieplo lubne"<<endl;
       }
         if(czyLata == true){
            cout<<"Zwierze potrafi latac"<<endl;
        }
         if(czyChroniony == true){
            cout<<"Zwierze jest pod ochrona"<<endl;
        }
         if(czySkrzydla == true){
            cout<<"Zwierze posiada skrzydla"<<endl;
        }
         if(czyPlywa == true){
            cout<<"Zwierze potrafi plywac "<<endl;
        }

        if(iloscKonczyn==0){
            cout<<"To zwierze pelza"<<endl;
        }
        else
        {
            cout<<"Zwierze ma "<<iloscKonczyn<<"konczyn"<<endl;
        }
        cout<<"-----------------------------------"<<endl;
	    }

	    void Plazy::wypisz(void){

        cout << "Nazwa zwierzaka:"<<nazwa << endl;
        cout << "  ilosc osobnikow na terenie zoo:" << getIleOSobnikow() << endl;
        if(czyCieploLubny == true){
            cout<<"Zwierze jest cieplo lubne"<<endl;
        }
         if(czyLata == true){
            cout<<"Zwierze potrafi latac"<<endl;
        }
         if(czyChroniony == true){
            cout<<"Zwierze jest pod ochrona"<<endl;
        }
         if(czySkrzydla == true){
            cout<<"Zwierze posiada skrzydla"<<endl;
        }
         if(czyPlywa == true){
            cout<<"Zwierze potrafi plywac "<<endl;
        }

         if(przechodziMetamorfoze == true){
            cout<<"Zwierze przechodzi zjawisko metamorfozy "<<endl;
        }
        cout<<"-----------------------------------"<<endl;

	    }

	    void Ptaki::wypisz(void){

        cout << "Nazwa zwierzaka:"<<nazwa << endl;
        cout << "  ilosc osobnikow na terenie zoo:" << getIleOSobnikow() << endl;
        if(czyCieploLubny == true){
            cout<<"Zwierze jest cieplo lubne"<<endl;
        }
         if(czyLata == true){
            cout<<"Zwierze potrafi latac"<<endl;
        }
         if(czyChroniony == true){
            cout<<"Zwierze jest pod ochrona"<<endl;
        }
         if(czySkrzydla == true){
            cout<<"Zwierze posiada skrzydla"<<endl;
        }
         if(czyPlywa == true){
            cout<<"Zwierze potrafi plywac "<<endl;
        }

        cout << "  Rozpietosc skrzydel tego ptaka wynosi:" << rozpietoscSkrzydel<< endl;
        cout<<"-----------------------------------"<<endl;
	    }

	    void Ryby::wypisz(void){

        cout << "Nazwa zwierzaka:"<<nazwa << endl;
        cout << "  ilosc osobnikow na terenie zoo:" << getIleOSobnikow() << endl;
        if(czyCieploLubny == true){
            cout<<"Zwierze jest cieplo lubne"<<endl;
        }
         if(czyLata == true){
            cout<<"Zwierze potrafi latac"<<endl;
        }
         if(czyChroniony == true){
            cout<<"Zwierze jest pod ochrona"<<endl;
        }
         if(czySkrzydla == true){
            cout<<"Zwierze posiada skrzydla"<<endl;
        }
         if(czyPlywa == true){
            cout<<"Zwierze potrafi plywac "<<endl;
        }
    cout << "  ilosc posiadanych pletw:" << iloscPletw << endl;
        cout<<"-----------------------------------"<<endl;
	    }

	    void Ssaki::wypisz(void){

        cout << "Nazwa zwierzaka:"<<nazwa << endl;
        cout << "  ilosc osobnikow na terenie zoo:" << getIleOSobnikow() << endl;
        if(czyCieploLubny == true){
            cout<<"Zwierze jest cieplo lubne"<<endl;
        }
         if(czyLata == true){
            cout<<"Zwierze potrafi latac"<<endl;
        }
         if(czyChroniony == true){
            cout<<"Zwierze jest pod ochrona"<<endl;
        }
         if(czySkrzydla == true){
            cout<<"Zwierze posiada skrzydla"<<endl;
        }
         if(czyPlywa == true){
            cout<<"Zwierze potrafi plywac "<<endl;
        }

        if(posiadaWlosy == true){
            cout<<"Zwierze posiada wlosy"<<endl;
        }
         else{
             if(posiadaFutro == true){
             cout<<"Zwierze posiada futro"<<endl;
              }
               else
               cout<<"ssak nie posiada ani wlosow ani futra"<<endl;
        }
        cout<<"-----------------------------------"<<endl;
	    }

        void Zoo::wypisz()
        {
            int iloscZw; //Ilosc wszystkich zwierzat w zoo;
            iloscZw=zwierzeta.size();

            cout<<"Ilosc wszystkich zwierzat w zoo "<<iloscZw<<endl;
            for (int i=0; i<iloscZw; i++)
            {
                zwierzeta[i]->wypisz();
            }

        }





    int main()
    {
        Gady* jaszczurka = new Gady("Jaszczurka",8,1,0,0,1,0,4);
        Ssaki* niedzwiedz = new Ssaki("Niedzwiedz",3,0,0,0,1,0,0,1);
        Ptaki* papuga = new Ptaki("Papuga",10,1,1,0,0,1,90);

        Zoo zoo;

        zoo.dodajZwierze(jaszczurka);
        zoo.dodajZwierze(niedzwiedz);
        zoo.dodajZwierze(papuga);

        zoo.wypisz();


    return 0;
    }
