// Erweiterung.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream> 
#include <ctime> 
using namespace std;
int main()
{
	int zahl = 0; 
	int eingabe = 0; 
	bool erg = false; 
	int durchgang = 1;
	srand(time(0));
	cout << "Zahlenraten:\n";
	cout << "============\n";
	zahl = rand() % 99 + 1;
	cout << "Mogeln: " << zahl "\n"; 
		do {
			cout << durchgang << "." << " Zahl eingeben:\n"; 
				cin >> eingabe;
				cout << "\n"; 
			if (zahl < eingabe) { 
			cout << " Zahl ist kleiner\n";
	}
 else if (zahl > eingabe) {
	 cout << " Zahl ist Groesse\n";
 }
 else {
	 cout << "Glueckwunsch!"; erg =
		 true; break; // Nicht 
	 verloren !!
 }
 if (durchgang == 10) {
	 cout << "leider verloren!";
	 cout << " Die richtige Zahl war " << zahl << "\n";
 }
 durchgang++;
} while (erg == false && durchgang <= 10);


// Programm ausführen: STRG+F5 oder Menüeintrag "Debuggen" > "Starten ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"

// Tipps für den Einstieg: 
//   1. Verwenden Sie das Projektmappen-Explorer-Fenster zum Hinzufügen/Verwalten von Dateien.
//   2. Verwenden Sie das Team Explorer-Fenster zum Herstellen einer Verbindung mit der Quellcodeverwaltung.
//   3. Verwenden Sie das Ausgabefenster, um die Buildausgabe und andere Nachrichten anzuzeigen.
//   4. Verwenden Sie das Fenster "Fehlerliste", um Fehler anzuzeigen.
//   5. Wechseln Sie zu "Projekt" > "Neues Element hinzufügen", um neue Codedateien zu erstellen, bzw. zu "Projekt" > "Vorhandenes Element hinzufügen", um dem Projekt vorhandene Codedateien hinzuzufügen.
//   6. Um dieses Projekt später erneut zu öffnen, wechseln Sie zu "Datei" > "Öffnen" > "Projekt", und wählen Sie die SLN-Datei aus.
