#pragma once

#include "Destinacija.h"
#include "Datum.h"
#include "Prevoz.h"
#include "Smestaj.h"

class Aranzman
{
private:
	Destinacija* destinacija;
	Datum datum_pocetka, datum_kraja;
	Smestaj* smestaj;
	Prevoz* prevoz;
	bool zadat_smestaj, zadat_prevoz;
public:
	// Konstruktori
	Aranzman(const Destinacija& destinacija = Destinacija(), const Datum& datum_pocetka = Datum(), const Datum& datum_kraja = Datum());
	// Getteri
	const Destinacija& dohvati_destinacija() const;
	const Datum& dohvati_datum_pocetka() const;
	const Datum& dohvati_datum_kraja() const;
	// Setteri
	void postavi_smestaj(const Smestaj& smestaj);
	void postavi_prevoz(const Prevoz& prevoz);
	// Metode
	int dohvati_trajanje_aranzmana() const;
	double dohvati_cenu_aranzmana() const;
	// Operatori
	friend ostream& operator<<(ostream& os, const Aranzman& a);
};

