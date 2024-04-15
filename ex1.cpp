#include <iostream>

class Point {
private:
    double x; // Abscisse
    double y; // Ordonn�e

public:
    // Constructeur avec initialisation des attributs
    Point(double abscisse, double ordonnee) : x(abscisse), y(ordonnee) {}

    // Constructeur par d�faut
    Point() : x(0.0), y(0.0) {}

    // Constructeur de copie
    Point(const Point& other) : x(other.x), y(other.y) {}

    // M�thode pour afficher les coordonn�es du point
    void afficher()  ;
    // Accesseur pour l'abscisse x
    double getX() const { return x; }

    // Manipulateur pour l'abscisse x
    void setX(double nouvelleAbscisse) { x = nouvelleAbscisse; }

    // Accesseur pour l'ordonn�e y
    double getY() const { return y; }

    // Manipulateur pour l'ordonn�e y
    void setY(double nouvelleOrdonnee) { y = nouvelleOrdonnee; }
};
void afficher()  {
        std::cout << "Coordonn�es du point : (" << x << ", " << y << ")\n";
    }

int main() {

    Point p1(3.5, 2.8);

    p1.afficher();

    // Acc�s et modification de l'abscisse x
    double abscisse = p1.getX();
    std::cout << "Abscisse avant modification : " << abscisse << std::endl;

    p1.setX(5.0);
    std::cout << "Abscisse apr�s modification : " << p1.getX() << std::endl;

    return 0;
}

