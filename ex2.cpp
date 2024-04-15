#include <iostream>
#include <string>

class Dessin {
private:
    int n; // Nombre de répétitions
    string motif; // Motif à reproduire
    static int total; // Nombre total d'instances partagé

public:
    // Constructeur normal à deux paramètres
    Dessin(int repetitions, const std::string& motif) : n(repetitions), motif(motif) {
        total++; // Incrémentation du nombre total d'instances
    }

    // Méthode pour afficher le dessin
    void afficher() const {
        for (int i = 0; i < n; i++) {
            std::cout << "-";
        }
        std::cout << motif << std::endl;
    }

    // Accesseur pour le nombre total d'instances
    static int getTotalInstances() {
        return total;
    }
};

// Initialisation de l'attribut partagé total à zéro
int Dessin::total = 0;


