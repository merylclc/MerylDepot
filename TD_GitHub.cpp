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





