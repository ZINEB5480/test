#include <iostream>

class Point {
private:
    double x; // Abscisse
    double y; // Ordonnée

public:
    // Constructeur avec initialisation des attributs
    Point(double abscisse, double ordonnee) : x(abscisse), y(ordonnee) {}

    // Constructeur par défaut
    Point() : x(0.0), y(0.0) {}

    // Constructeur de copie
    Point(const Point& other) : x(other.x), y(other.y) {}

    // Méthode pour afficher les coordonnées du point
    void afficher()  ;
    // Accesseur pour l'abscisse x
    double getX() const { return x; }

    // Manipulateur pour l'abscisse x
    void setX(double nouvelleAbscisse) { x = nouvelleAbscisse; }

    // Accesseur pour l'ordonnée y
    double getY() const { return y; }

    // Manipulateur pour l'ordonnée y
    void setY(double nouvelleOrdonnee) { y = nouvelleOrdonnee; }
};
void afficher()  {
        std::cout << "Coordonnées du point : (" << x << ", " << y << ")\n";
    }

int main() {

    Point p1(3.5, 2.8);

    p1.afficher();

    // Accès et modification de l'abscisse x
    double abscisse = p1.getX();
    std::cout << "Abscisse avant modification : " << abscisse << std::endl;

    p1.setX(5.0);
    std::cout << "Abscisse après modification : " << p1.getX() << std::endl;

    return 0;
}

