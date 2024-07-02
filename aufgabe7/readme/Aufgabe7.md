Operatorenüberladung und STL-Funktionalität
> - Student Klasse muss um die Überladung verschiedener Operatoren erweitert werden, damit die STL genutzt werden kann
> - die STL wird dazu genutzt um Studentenobjekte zu vergleichen, auszugeben und zu erweitern 



Operatorenüberladung
>- Überladen der Operatoren<, >, == für die Studentenklasse
>- Änderung der Ausgabe Funktion der Student Klasse
>- Überladen des Ausgabeoperators << außerhalb der Student Klasse

STL-Funktionalität
>- Impelemtierung einer Sortierfunktion mit std::sort
>- suchen eines Studenten std::find

Operatorenüberladung 
>- Benutzerdefinierte Ausgabe 
>- Verwendung der STL 


Folgende Funktionalitäten werden nun bereitsgestellt: 
>- Operatorenüberladung: Studentenobjekte können effizient verglichen werden 
>- Benutzerdefinierte Ausgabe: Anpassung Ausgabe Funktion, Überladen des Ausgabeoperators erlauben eine benutzerfreundliche und flexible Ausgabe >- von Studentenobjekten, was die Iteroperabilität mit STL-Algorithmen verbessert 
>- Verwendung der STL:
>- Nutzung von std::sort und std::find demonstrieren Effizienz der STL-Algorithmen

Die Überladung (englisch: "Overloading") in C++ bezieht sich auf die Möglichkeit, mehrere Funktionen oder Operatoren desselben Namens innerhalb desselben Gültigkeitsbereichs zu definieren, solange sie sich in ihrer Signatur unterscheiden. Die Signatur einer Funktion wird durch den Funktionsnamen und die Parameterliste bestimmt. Durch Überladung kann eine Funktion verschiedene Versionen haben, die je nach den Typen und Anzahlen ihrer Argumente unterschiedliche Aufgaben erfüllen können. => funktionen haben denselben namen, aber unterscheiden sich in den Datentypen, welche den Funktionen mitgeben 


=> 
Operatorenüberladung
1. (>,<,==, sollen überladen werden) => Student Klasse
2. &onstream muss noch geändert werden
3. Überladen Ausgabe Operator << => außerhalb der Studenten Klasse

STL-Funktionalität 
1. Erweitern von Programm um eine Sortierfunktion
2. Datenelement loeschen mittels der FUnktion find()
