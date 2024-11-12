#include <stdio.h>

void concatene(char *dest, const char *source) {
    int i = 0; // Index pour dest
    int j = 0; // Index pour source

    // Trouver la fin de dest
    while (dest[i] != '\0') {
        i++; // Avancer jusqu'à la fin de la chaîne dest
    }

    // Ajouter chaque caractère de source à la fin de dest
    while (source[j] != '\0') {
        dest[i] = source[j]; // Copier le caractère courant de source dans dest
        i++; // Passer au prochain index dans dest
        j++; // Passer au prochain caractère dans source
    }

    // Ajouter le caractère nul '\0' pour terminer la chaîne dest
    dest[i] = '\0';
}

int main() {
    char dest[30] = "Bonjour "; // Chaîne de destination
    const char *source = "le monde!"; // Chaîne source à ajouter
    concatene(dest, source); // Appeler la fonction de concaténation
    printf("Résultat de la concaténation : %s\n", dest); // Afficher le résultat
    return 0;
}
