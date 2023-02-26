#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure pour stocker les informations d'un employé
struct Employee {
    char name[50];
    int age;
    float salary;
};

int main() {
    int n; // Nombre d'employés
    struct Employee employees[100]; // Tableau pour stocker les employés

    // Demander à l'utilisateur de saisir le nombre d'employés
    printf("Entrez le nombre d'employés : ");
    scanf("%d", &n);

    // Saisir les informations de chaque employé
    for (int i = 0; i < n; i++) {
        printf("\nInformation de l'employé %d :\n", i+1);
        printf("Nom : ");
        scanf("%s", employees[i].name);
        printf("Age : ");
        scanf("%d", &employees[i].age);
        printf("Salaire : ");
        scanf("%f", &employees[i].salary);
    }

    // Afficher les informations de tous les employés
    printf("\nInformation de tous les employés :\n");
    for (int i = 0; i < n; i++) {
        printf("Nom : %s\n", employees[i].name);
        printf("Age : %d\n", employees[i].age);
        printf("Salaire : %.2f\n", employees[i].salary);
    }

    // Envoyer toutes les tâches au directeur
    printf("\nToutes les tâches ont été envoyées au directeur.\n");

    return 0;
}
