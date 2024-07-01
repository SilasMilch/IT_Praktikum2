- das bedingte Compilieren in C++ ermöglicht es, Codeabschnitte basierend auf bestimmten Bedingungen in die Kompilierung einzubeziehen oder auszuschließen.

Ziel des bedingten Compilierens: 
- Vorübergehende Deaktivierung von Code
- Plattformabhängige Anpassung
- Versionsverwaltung

Funktionsweise:
#if,#else,#endif durch konstanten festlegung können bestimmte Teilabschnitte des Codes übersprungen werden. (#define FEATURE_ENABLED true) 


Beschreibung Programm: 
ChatGPT
Zusammenfassung der Aufgabenstellung

Die Bücherei Bücherwurm möchte ihr Angebot erweitern und neben Büchern auch Magazine und DVDs verleihen. Um dies zu realisieren, soll die bestehende Verwaltungssoftware angepasst werden. Die wesentlichen Anforderungen und Schritte zur Umsetzung sind wie folgt:
1. Erstellen der Unterklassen

Es sollen drei neue Klassen implementiert werden, die von der bestehenden Klasse Medium erben:

    Buch
        Speichert zusätzlich zum Titel einen Autor.
        Konstruktor: Buch(std::string initTitel, std::string initAutor)
        Überladen der Funktion ausgabe(), um alle Informationen inklusive des Autors auszugeben.

    Magazin
        Speichert das Erscheinungsdatum und die Sparte.
        Konstruktor: Magazin(std::string initTitel, Datum initDatumAusgabe, std::string initSparte)
        Überladen der Funktion ausgabe(), um alle Informationen inklusive Erscheinungsdatum und Sparte auszugeben.

    DVD
        Besitzt eine Altersfreigabe und ein Genre.
        Konstruktor: DVD(std::string initTitel, int initAltersfreigabe, std::string initGenre)
        Überladen der Funktion ausgabe(), um alle Informationen inklusive Altersfreigabe und Genre auszugeben.

2. Einführung von Ausleihbeschränkungen

Die Funktion virtual bool ausleihen(Person person, Datum ausleihdatum) in der Klasse Medium soll für Magazine und DVDs überladen werden:

    Magazin
        Ein Magazin darf nicht ausgeliehen werden, wenn es die neueste Ausgabe ist.
        Implementieren der Überprüfung, ob das Magazin die aktuellste Ausgabe ist, und entsprechend Meldungen ausgeben.

    DVD
        Eine DVD darf nur von Personen ausgeliehen werden, die die Altersbeschränkung erfüllen.
        Implementieren der Altersüberprüfung und entsprechend Meldungen ausgeben.

3. Einführen einer rein virtuellen Funktion

Um die Klasse Medium abstrakt zu machen und somit zu verhindern, dass Instanzen von Medium erstellt werden, soll eine Funktion als rein virtuell definiert werden.
4. Operatorüberladung zur Ausgabe aller ausgeliehenen Medien

Der Ausgabeoperator der Klasse Medium soll überladen werden, um alle Informationen eines Mediums auszugeben. Zusätzlich soll ein neuer Menüpunkt implementiert werden, der alle ausgeliehenen Medien auflistet.
Wichtige Funktionen

    Medium
        virtual void ausgabe() const: Gibt Informationen zum Medium aus.
        virtual bool ausleihen(Person person, Datum ausleihdatum): Verleiht das Medium, wenn möglich.
        void zurueckgeben(): Gibt das Medium zurück.

    Person
        Speichert Name und Geburtsdatum einer Person.

    Datum
        Bearbeitung von Datumsobjekten und Überladen von Operatoren.

    Buch, Magazin, DVD (abgeleitet von Medium)
        Überladen die Funktion ausgabe(), um spezifische Informationen auszugeben.
        Überladen die Funktion ausleihen() (für Magazin und DVD), um spezielle Ausleihbeschränkungen zu berücksichtigen.

Beispielhafte Ausgaben

    Buch

    makefile

ID: 0
Titel: Tom Sawyers Abenteuer und Streiche
Status: Medium ist zurzeit nicht verliehen.
Autor: Mark Twain

Magazin

makefile

ID: 1
Titel: c’t - Magazin für Computertechnik
Status: Medium ist zurzeit nicht verliehen.
Ausgabe: 01/04/2018
Sparte: Computerzeitschrift

DVD

makefile

    ID: 2
    Titel: Der unsichtbare Dritte
    Status: Medium ist zurzeit nicht verliehen.
    FSK: ab 12 Jahre
    Genre: Action, Krimi

Diese Änderungen und Ergänzungen sollen sicherstellen, dass die Bücherei Bücherwurm ihr erweitertes Angebot effizient verwalten und anbieten kann.
