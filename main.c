#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

// Constantes
#define MAX_MATIERES 10
#define MAX_QUESTIONS 50
#define MAX_USERS 10
#define TAILLE_NOM 50
#define TAILLE_MDP 50

// Structures
typedef struct {
    char question[100];
    char reponse[50];
} Question;

typedef struct {
    char nom[TAILLE_NOM];
    Question questions[MAX_QUESTIONS];
    int nombreQuestions;
} Matiere;

typedef struct {
    char nom[TAILLE_NOM];
    char mdp[TAILLE_MDP];
    int scores[MAX_MATIERES];
} Utilisateur;

// Variables globales
Matiere matieres[MAX_MATIERES];
int nombreMatieres = 0;
Utilisateur utilisateurs[MAX_USERS];
int nombreUtilisateurs = 0;
Utilisateur *utilisateurActuel = NULL;

// Fonctions
void afficherMenu() {
    printf("\n--- Menu Principal ---\n");
    printf("1. Se connecter\n");
    printf("2. S'inscrire\n");
    printf("3. Voir les matières\n");
    printf("4. Faire un quiz\n");
    printf("5. Gérer le temps de révision (Pomodoro)\n");
    printf("6. Voir les progrès\n");
    printf("7. Quitter\n");
    printf("Choix : ");
}

void chargerMatieres() {
    // Exemple de matières et questions
    strcpy(matieres[0].nom, "Mathématiques");
    strcpy(matieres[0].questions[0].question, "2 + 2 = ?");
    strcpy(matieres[0].questions[0].reponse, "4");
    strcpy(matieres[0].questions[1].question, "3 * 5 = ?");
    strcpy(matieres[0].questions[1].reponse, "15");
    matieres[0].nombreQuestions = 2;

    strcpy(matieres[1].nom, "Physique");
    strcpy(matieres[1].questions[0].question, "Quelle est l'unité de la force ?");
    strcpy(matieres[1].questions[0].reponse, "Newton");
    strcpy(matieres[1].questions[1].question, "Quelle est l'unité de la force ?");
    strcpy(matieres[1].questions[1].reponse, "Newton");
    strcpy(matieres[1].questions[2].question, "Quelle est l'unité de la force ?");
    strcpy(matieres[1].questions[02].reponse, "Newton");
    strcpy(matieres[1].questions[03].question, "Quelle est l'unité de la force ?");
    strcpy(matieres[1].questions[03].reponse, "Newton");
    strcpy(matieres[1].questions[04].question, "Quelle est l'unité de la force ?");
    strcpy(matieres[1].questions[04].reponse, "#include <gtk/gtk.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Constantes
#define MAX_MATIERES 5
#define MAX_QUESTIONS 50
#define TAILLE_NOM 50

// Structures
typedef struct {
    char question[100];
    char reponse[50];
} Question;

typedef struct {
    char nom[TAILLE_NOM];
    Question questions[MAX_QUESTIONS];
    int nombreQuestions;
} Matiere;

// Variables globales
Matiere matieres[MAX_MATIERES];
int nombreMatieres = 0;

// Fonctions
void chargerMatieres() {
    // Mathématiques
    strcpy(matieres[0].nom, "Mathématiques");
    strcpy(matieres[0].questions[0].question, "2 + 2 = ?");
    strcpy(matieres[0].questions[0].reponse, "4");
    strcpy(matieres[0].questions[1].question, "3 * 5 = ?");
    strcpy(matieres[0].questions[1].reponse, "15");
    strcpy(matieres[0].questions[2].question, "10 / 2 = ?");
    strcpy(matieres[0].questions[2].reponse, "5");
    matieres[0].nombreQuestions = 3;

    // Physique
    strcpy(matieres[1].nom, "Physique");
    strcpy(matieres[1].questions[0].question, "Quelle est l'unité de la force ?");
    strcpy(matieres[1].questions[0].reponse, "Newton");
    strcpy(matieres[1].questions[1].question, "Quelle est la vitesse de la lumière ?");
    strcpy(matieres[1].questions[1].reponse, "3e8 m/s");
    matieres[1].nombreQuestions = 2;

    // Chimie
    strcpy(matieres[2].nom, "Chimie");
    strcpy(matieres[2].questions[0].question, "Quel est le symbole chimique de l'eau ?");
    strcpy(matieres[2].questions[0].reponse, "H2O");
    matieres[2].nombreQuestions = 1;

    // Économie
    strcpy(matieres[3].nom, "Économie");
    strcpy(matieres[3].questions[0].question, "Qu'est-ce que le PIB ?");
    strcpy(matieres[3].questions[0].reponse, "Produit Intérieur Brut");
    matieres[3].nombreQuestions = 1;

    // Informatique
    strcpy(matieres[4].nom, "Informatique");
    strcpy(matieres[4].questions[0].question, "Quel langage utilise GTK ?");
    strcpy(matieres[4].questions[0].reponse, "C");
    matieres[4].nombreQuestions = 1;

    nombreMatieres = 5;
}

// Fonction pour afficher le dashboard
void afficherDashboard(GtkWidget *widget, gpointer data) {
    GtkWidget *dialog;
    dialog = gtk_message_dialog_new(NULL, GTK_DIALOG_DESTROY_WITH_PARENT, GTK_MESSAGE_INFO, GTK_BUTTONS_OK, "Dashboard\n\nScores :\n- Mathématiques : 8/10\n- Physique : 6/10\n\nRecommandations :\n- Revisez la physique !");
    gtk_dialog_run(GTK_DIALOG(dialog));
    gtk_widget_destroy(dialog);
}

// Fonction pour démarrer un quiz
void demarrerQuiz(GtkWidget *widget, gpointer data) {
    GtkWidget *dialog;
    dialog = gtk_message_dialog_new(NULL, GTK_DIALOG_DESTROY_WITH_PARENT, GTK_MESSAGE_INFO, GTK_BUTTONS_OK, "Quiz démarré !\n\nQuestion 1 : 2 + 2 = ?\nRéponse : 4");
    gtk_dialog_run(GTK_DIALOG(dialog));
    gtk_widget_destroy(dialog);
}

// Fonction principale
int main(int argc, char *argv[]) {
    GtkWidget *window;
    GtkWidget *grid;
    GtkWidget *button;

    // Initialiser GTK
    gtk_init(&argc, &argv);

    // Charger les matières
    chargerMatieres();

    // Créer la fenêtre principale
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Application de Révision BTS");
    gtk_window_set_default_size(GTK_WINDOW(window), 400, 300);
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    // Créer une grille pour organiser les boutons
    grid = gtk_grid_new();
    gtk_container_add(GTK_CONTAINER(window), grid);

    // Bouton pour afficher le dashboard
    button = gtk_button_new_with_label("Dashboard");
    g_signal_connect(button, "clicked", G_CALLBACK(afficherDashboard), NULL);
    gtk_grid_attach(GTK_GRID(grid), button, 0, 0, 1, 1);

    // Bouton pour démarrer un quiz
    button = gtk_button_new_with_label("Démarrer un Quiz");
    g_signal_connect(button, "clicked", G_CALLBACK(demarrerQuiz), NULL);
    gtk_grid_attach(GTK_GRID(grid), button, 1, 0, 1, 1);

    // Afficher la fenêtre
    gtk_widget_show_all(window);

    // Lancer la boucle principale de GTK
    gtk_main();

    return 0;
}Newton");
    matieres[1].nombreQuestions = 5;

    nombreMatieres = 2;
}

void afficherMatieres() {
    printf("\n--- Matières Disponibles ---\n");
    for (int i = 0; i < nombreMatieres; i++) {
        printf("%d. %s\n", i + 1, matieres[i].nom);
    }
}

void faireQuiz() {
    int choixMatiere;
    afficherMatieres();
    printf("Choisissez une matière : ");
    scanf("%d", &choixMatiere);
    choixMatiere--;

    if (choixMatiere < 0 || choixMatiere >= nombreMatieres) {
        printf("Choix invalide.\n");
        return;
    }

    Matiere *matiere = &matieres[choixMatiere];
    int score = 0;
    char reponseUtilisateur[50];

    for (int i = 0; i < matiere->nombreQuestions; i++) {
        printf("\nQuestion %d: %s\n", i + 1, matiere->questions[i].question);
        printf("Votre réponse : ");
        scanf("%s", reponseUtilisateur);

        if (strcmp(reponseUtilisateur, matiere->questions[i].reponse) == 0) {
            printf("Correct !\n");
            score++;
        } else {
            printf("Faux. La bonne réponse était : %s\n", matiere->questions[i].reponse);
        }
    }

    printf("\nVotre score : %d/%d\n", score, matiere->nombreQuestions);
    if (utilisateurActuel) {
        utilisateurActuel->scores[choixMatiere] = score;
    }
}

void pomodoro() {
    int travail = 25 * 60; // 25 minutes en secondes
    int pause = 5 * 60;    // 5 minutes en secondes

    printf("\nDébut de la session de travail (25 minutes).\n");
    while (travail > 0) {
        printf("\rTemps restant : %02d:%02d", travail / 60, travail % 60);
        fflush(stdout);
        sleep(1);
        travail--;
    }
    printf("\nTemps de travail écoulé ! Prenez une pause de 5 minutes.\n");

    while (pause > 0) {
        printf("\rTemps de pause restant : %02d:%02d", pause / 60, pause % 60);
        fflush(stdout);
        sleep(1);
        pause--;
    }
    printf("\nPause terminée !\n");
}

void voirProgres() {
    if (!utilisateurActuel) {
        printf("Aucun utilisateur connecté.\n");
        return;
    }

    printf("\n--- Progrès de %s ---\n", utilisateurActuel->nom);
    for (int i = 0; i < nombreMatieres; i++) {
        printf("%s : %d/%d\n", matieres[i].nom, utilisateurActuel->scores[i], matieres[i].nombreQuestions);
    }
}

void seConnecter() {
    char nom[TAILLE_NOM], mdp[TAILLE_MDP];
    printf("\nEntrez votre nom : ");
    scanf("%s", nom);
    printf("Entrez votre mot de passe : ");
    scanf("%s", mdp);

    for (int i = 0; i < nombreUtilisateurs; i++) {
        if (strcmp(utilisateurs[i].nom, nom) == 0 && strcmp(utilisateurs[i].mdp, mdp) == 0) {
            utilisateurActuel = &utilisateurs[i];
            printf("Bienvenue, %s !\n", nom);
            return;
        }
    }
    printf("Nom d'utilisateur ou mot de passe incorrect.\n");
}

void sinscrire() {
    if (nombreUtilisateurs >= MAX_USERS) {
        printf("Nombre maximum d'utilisateurs atteint.\n");
        return;
    }

    char nom[TAILLE_NOM], mdp[TAILLE_MDP];
    printf("\nEntrez votre nom : ");
    scanf("%s", nom);
    printf("Entrez votre mot de passe : ");
    scanf("%s", mdp);

    strcpy(utilisateurs[nombreUtilisateurs].nom, nom);
    strcpy(utilisateurs[nombreUtilisateurs].mdp, mdp);
    for (int i = 0; i < MAX_MATIERES; i++) {
        utilisateurs[nombreUtilisateurs].scores[i] = 0;
    }
    utilisateurActuel = &utilisateurs[nombreUtilisateurs];
    nombreUtilisateurs++;
    printf("Inscription réussie. Bienvenue, %s !\n", nom);
}

int main() {
    chargerMatieres();
    int choix;

    do {
        afficherMenu();
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                seConnecter();
                break;
            case 2:
                sinscrire();
                break;
            case 3:
                afficherMatieres();
                break;
            case 4:
                faireQuiz();
                break;
            case 5:
                pomodoro();
                break;
            case 6:
                voirProgres();
                break;
            case 7:
                printf("Au revoir !\n");
                break;
            default:
                printf("Choix invalide. Veuillez réessayer.\n");
        }
    } while (choix != 7);

    return 0;
}
