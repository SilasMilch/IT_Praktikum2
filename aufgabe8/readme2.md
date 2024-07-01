Die Klassen: Buch, Magazin, DVD erben von der Klasse Medium 
Beschreibung => 
Buch: speichert zusätzlich zum Titel einen Autor
Magazin: Speichert das Erscheinungsdatum und die Sparte => Funktion ausgabe() wird überladen
DVD: besitzt Altersfreigabe und ein Genre
Konstruktor: initTitel, initAltersfreigabe, initGenre, überladen der Funktion ausgabe()

Ausleihbeschränkungen: 
virtual bool ausleihen() => wird überladen
Magazin: darf nicht ausgeliehen werden wenn es die neuste Ausgabe ist
=> Überprüfung ob das Magazin die aktuellste Ausgabe ist 
DVD: darf nur von Personen ausgeliehen werden, die die Altersbeschränkung erfüllen,
Implementieren der Altersüberprüfung und entsprechend Meldungen ausgeben


Medium soll abstrakt gemacht werden um zu verhindern, dass Instanzen von Medium erstellt werden:
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
Überladen die Funktion ausleihen() (für Magazin und DVD), um spezielle     Ausleihbeschränkungen zu berücksichtigen.
=> die Überlagerung der Funktion ausgabe soll einer effizienteren Verwaltung dienen



















Buch
cpp=>
Konstruktor Buch::Buch 
Der Konstruktor Buch nimmt zwei Argumente: initTitel und initAutor, beides Strings.
    • Der Konstruktor der Basisklasse Medium wird mit initTitel aufgerufen, um das titel-Mitglied von Medium zu initialisieren.
    • Das autor-Mitglied der Buch-Klasse wird mit initAutor initialisiert.
Ausgabe Methode => void Buch::ausgabe()
Die Methode ausgabe ist als const deklariert, was bedeutet, dass sie den Zustand des Objekts nicht ändern darf.
    • Medium::ausgabe() wird aufgerufen, um die ausgabe-Methode der Basisklasse auszuführen. Dies gibt wahrscheinlich den Titel des Mediums aus.
    • Danach gibt die Buch-Klasse spezifische Informationen aus, in diesem Fall den Autor
Zusammenfassend: 
Die Buch-Klasse erbt von Medium und erweitert diese, indem sie ein zusätzliches Attribut (autor) hinzufügt.
    • Der Konstruktor von Buch initialisiert sowohl das titel-Attribut der Basisklasse als auch das autor-Attribut der Buch-Klasse.
    • Die ausgabe-Methode von Buch ruft zunächst die ausgabe-Methode der Basisklasse auf, um den Titel auszugeben, und gibt dann den Autor aus.

























Buecherei (main function)
Zusammenfassung
    • Vererbung: Die Buch-Klasse erbt von Medium und erweitert diese durch das Hinzufügen eines neuen Attributs (autor).
    • Konstruktor: Der Konstruktor von Buch initialisiert sowohl das titel-Attribut der Basisklasse als auch das autor-Attribut der Buch-Klasse.
    • Methodenüberschreibung: Die ausgabe-Methode der Buch-Klasse überschreibt die ausgabe-Methode der Basisklasse. Sie ruft zunächst die ausgabe-Methode der Basisklasse auf und fügt dann zusätzliche Funktionalität hinzu, um den Autor auszugeben
Inhalt =>
 fuelleDatenbank: Fills the database with sample data.
    • mediumHinzufuegen: Adds a new medium (book, magazine, DVD) based on user input.
    • mediumEntfernen: Removes a medium from the database by ID.
    • mediumAusleihen: Lends out a medium to a person.
    • mediumZurueckgeben: Returns a lent-out medium to the library.
    • alleMedienAusgeben: Displays all media in the library.


Person: Inhalt
> konstruktor des Objekts Person
> Destruktor
Methoden: 
Get-Methoden: 
getGeburtsdatum
getName



Medium (Oberklasse)
	DVD
	Datum
	Magazin

