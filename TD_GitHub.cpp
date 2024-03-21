//Fonctions réalisées par l'étudiant 1 :

bool estMajeur(int age) {
    return (age >= 18 || age < 0);
}

int exposant(int nbre, int exp) {
    if (exp == 0)
        return 1;
    else {
        int result = nbre;
        for (int i = 1; i < exp; ++i) {
            result *= nbre;
        }
        return result;
    }
}

float TVA(int prix) {
    if (prix >= 1000)
        return prix * 0.196;
    else
        return prix * 0.055;
}

int plusGrand(int a, int b, int c) {
    int max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    return max;
}

//Fonctions réalisées par l'étudiant 2 :

bool estPair(int nb) {
    return (nb % 2 == 0 || nb % 7 == 0);
}

int sommeNombre(int nb) {
    int sum = 0;
    for (int i = nb; i >= 1; --i) {
        sum += i;
    }
    return sum;
}

float salaireNet(int salaire) {
    float salaireNet = salaire - (salaire * 0.23);
    float prime = salaireNet * 0.12;
    return salaireNet + prime;
}

int plusPetit(int a, int b, int c) {
    int min = a;
    if (b < min)
        min = b;
    if (c < min)
        min = c;
    return min;
}




