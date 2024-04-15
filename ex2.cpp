#include <iostream>
#include <string>

class Dessin {
private:
    int n; // Nombre de r�p�titions
    string motif; // Motif � reproduire
    static int total; // Nombre total d'instances partag�

public:
    // Constructeur normal � deux param�tres
    Dessin(int repetitions, const std::string& motif) : n(repetitions), motif(motif) {
        total++; // Incr�mentation du nombre total d'instances
    }

    // M�thode pour afficher le dessin
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

// Initialisation de l'attribut partag� total � z�ro
int Dessin::total = 0;


