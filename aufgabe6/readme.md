...STL-Standard Template Library-STL 
1. die doppelt verkettete Liste wird durch eine vector Klasse ersetzt
    Datenstrukturen und Funktionen müssen an die Vector Klasse angepasst werden
2. Lesen und Schreiben von Daten aus Dateien
3. Achtung!!! => Vektorfunktionen wie Einfügen, Iterieren und Suchen effizient umzusetzen. In diesem Projekt wurde versuch 05 genommen und umgeändert. 


1. Student.cpp
    - dient der Verwaltung eines Studenten
    - enthält:
          - Konstruktor für das Objekt Student
              - enthält standardwerte, welche initialisiert werden müssen
          - Getter Methoden um private Membervariablen zurückzugeben
          - Ausgabe Methoden: (void Student::ausgabe() const)
          - insgesamt => (Konstruktoren, Getter-Methoden, Ausgabe-Methoden)
2. student.h
    - Header Guards => verhindern mehraches Einbinden der Datei
    - Einbindung der string Bibliothekt zur Nutzung von std::string
    - Deklaration der Klasse 'Student'
          - enthält öffentliche Konstruktoren, Getter Methoden und eine
            eine Ausgabemethode 
    - Private Datenmitglieder => zur Speicherung der Eigenschaften eines               Studenten
main.cpp
     1. Variablen und Initialisierung:
        ◦ studentenListe: Vector zur Speicherung von Studentenobjekten.
        ◦ student: Einzelnes Studentenobjekt.
        ◦ abfrage: Charakter zur Aufnahme der Benutzereingabe.
    2. Vorausgefüllte Daten:
        ◦ Der Benutzer wird gefragt, ob die Liste vorab gefüllt werden soll (j             für ja).
        ◦ Falls nicht, werden fünf vordefinierte Studenten der Liste hinzugefügt.
    3. Hauptmenü Schleife (do-while):
        ◦ Bietet eine Benutzerschnittstelle zur Auswahl von Operationen.
    4. switch case Methoden => verschieden Fälle werden abgearbeitet
  

studenten.txt
longRandomStudents.txt
