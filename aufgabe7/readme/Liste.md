Liste.cpp
- erstellt eine leere Liste => std:vector<Student> studenten
- Hinzufügen von Elementen
  - void Liste::pushFront(Student student)
  - void Liste::pushBack(Student student)
- Entfernen von Elementen
  - popFront
  - popBack
  - remove => ein bestimmtes Element an angegebener Position wird entfernt
- Einfügen von Ekementen
  - void Liste::insert(int index, Student student)
- Sortieren 
  - void Liste::sort()
Überprüfen, ob die Liste leer ist
- bool Liste::empty()

Abfragen von Elementen 
- dataFront
- dataBack

Ausgabe der Liste 
- ausgabeVorwaerts
- ausgabeRueckwaerts

Suchen Elements
- Liste::findElement(unsigned int matNr) 
