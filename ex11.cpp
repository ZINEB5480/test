#include <iostream>
using namespace std;
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
    Point(const Point &other) : x(other.x), y(other.y) {}
    // afficher les coordonnées du point
    void afficher() const {
        cout << "Coordonnées du point : (" << x << ", " << y << ")\n";
    }

    // Accesseur pour l'abscisse x
    double getX() const { return x; }

    // Manipulateur pour l'abscisse x
    void setX(double nouvelleAbscisse) { x = nouvelleAbscisse; }

    // Accesseur pour l'ordonnée y
    double getY() const { return y; }

    // Manipulateur pour l'ordonnée y
    void setY(double nouvelleOrdonnee) { y = nouvelleOrdonnee; }
};
int main() {
    // Création d'un point avec les coordonnées (3.5, 2.8)
    Point p1(3.5, 2.8);
     cout<<"p1=";
    p1.afficher();
     Point p2=p1;
     cout<<"p2=";
     p2.afficher();
    // Affichage des coordonnées du point


    // Accès et modification de l'abscisse x
    double abscisse = p1.getX();
    cout << "Abscisse avant modification : " << abscisse << endl;

    p1.setX(6);
    cout << "Abscisse après modification : " << p1.getX() << endl;


    return 0;
}
