#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "INFOpersonnalities.h"

void ENFJ();
void ENTJ();
void ENFP();
void ENTP();
void ESFJ();
void ESTJ();
void ESFP();
void INTP();
void INFP();
void ISFP();
void ISTP();
void INTJ();
void INFJ();
void ISFJ();
void ISTJ();

int main()
{
    int  r; //r�ponse de l'utilisateur
    int  CptI=0, CptE=0, CptS=0, CptN=0, CptT=0, CptF=0, CptP=0, CptJ=0;
    char I[2]="I", E[2]="E", S[2]="S", N[2]="N", T[2]="T", F[2]="F", P[2]="P", J[2]="J", Result[6]="";

    //CptI Introverti
    //CptE Extraverti
    //CptS D�t�cteur
    //CptN Intuitif
    //CptT Penseur
    //CptF Sentimental
    //CptP Percepteur
    //CptJ Juger

    printf("Ceci est un quizz qui va vous permettre de savoir approximativement quelle genre de personnalite vous avez. \n");
    printf("Veuillez repondre aux questions en saisissant le nombre correspondant a votre reponse.\n");

    //D�but du quizz :

    //Question 1

    printf("1-Preferez-vous passer votre temps libre : \n"); //Question 1
    printf("1: Seul a la maison     2: Sortir avec les autres \n");
    scanf("%d",&r);
    do{
        switch(r){
            case 1:
                CptI=CptI+1 ;
                break ;
            case 2:
                CptE=CptE+1 ;
                break ;
            default:
                printf("Erreur, veuillez saisir le nombre correspondant a votre reponse \n");
                scanf("%d",&r);}
    }while(r!=1 && r!=2); //Boucle en cas d'erreur

    //Fin de question 1

    //Question 2

    printf("2-Les rassemblements sociaux et les rencontres avec de nouvelles personnes sont: \n"); //Question 2
    printf("1: Quelque chose a eviter 2: Quelque chose a apprecier \n");
    scanf("%d",&r);
    do{
        switch(r){
            case 1:
                CptI=CptI+1 ; //On ajoute un point au compteur "Introverti"
                break ;
            case 2:
                CptE=CptE+1 ; //On ajoute un point au compteur "Extraverti"
                break ;
            default: //On envoie un message d'erreur au cas o� l'utilisateur ne saisit pas une des lettres propos�es
                printf("Erreur, veuillez saisir le nombre correspondant a votre reponse \n");
                scanf("%d",&r);}
    }while(r!=1 && r!=2); //Boucle en cas d'erreur

   //Fin de question 2

   //Question 3

    printf("3-Vous considerez-vous comme: \n"); //Question 3
    printf("1: prive et reserve    2: sortant et social \n");
    scanf(" %d",&r);
    do{
        switch(r){
            case 1:
                CptI=CptI+1 ; //On ajoute un point au compteur "Introverti"
                break ;
            case 2:
                CptE=CptE+1 ; //On ajoute un point au compteur "Extraverti"
                break ;
            default: //On envoie un message d'erreur au cas o� l'utilisateur ne saisit pas une des lettres propos�es
                printf("Erreur, veuillez saisir le nombre correspondant a votre reponse \n");
                scanf("%d",&r);}
    }while(r!=1 && r!=2); //Boucle en cas d'erreur

    //Fin de question 3

    //Comparaion de I et E
    if (CptE>CptI){
        strcat(Result,E);
    }
    else {
        strcat(Result,I);
    }

    //Question 4

    printf("Preferez-vous vous concentrer sur: \n"); //Question 4
    printf("1: Les faits, les d�tails et y-aller etape par etape    2: Les concepts, les theories et la vue d'ensemble \n");
    scanf("%d",&r);
    do{
        switch(r){
            case 1:
                CptS=CptS+1 ; //On ajoute un point au compteur "D�t�cteur"
                break ;
            case 2:
                CptN=CptN+1 ; //On ajoute un point au compteur "Intuitif"
                break ;
            default: //On envoie un message d'erreur au cas o� l'utilisateur ne saisit pas une des lettres propos�es
                    printf("Erreur, veuillez saisir le nombre correspondant a votre reponse \n");
                    scanf("%d",&r);}
    }while(r!=1 && r!=2);//Boucle en cas d'erreur

    //Fin de question 4

    //Question 5

    printf("5-Avez-vous tendance a penser et a apprecier: \n"); //Question 5
    printf("1: Des choses reelles et pratiques      2: Ce qui peut etre imagine\n");
    scanf("%d",&r);
    do{
        switch(r){
            case 1:
                CptS=CptS+1 ; //On ajoute un point au compteur "D�t�cteur"
                break ;
            case 2:
                CptN=CptN+1 ; //On ajoute un point au compteur "Intuitif"
                break ;
            default: //On envoie un message d'erreur au cas o� l'utilisateur ne saisit pas une des lettres propos�es
                printf("Erreur, veuillez saisir le nombre correspondant a votre reponse \n");
                scanf("%d",&r);}
    }while(r!=1 && r!=2);//Boucle en cas d'erreur

    //Fin de question 5


    //Question 6

    printf("6-Preferez-vous etre: \n"); //Question 6
    printf("1: Realiste et se reposer sur le bon sens     2: Imaginatif et faire les choses a votre facon \n");
    scanf("%d",&r);
    do{
        switch(r){
            case 1:
                CptS=CptS+1 ; //On ajoute un point au compteur "D�t�cteur"
                break ;
            case 2:
                CptN=CptN+1 ; //On ajoute un point au compteur "Intuitif"
                break ;
            default: //On envoie un message d'erreur au cas o� l'utilisateur ne saisit pas une des lettres propos�es
                printf("Erreur, veuillez saisir le nombre correspondant a votre reponse \n");
                scanf("%d",&r);}
    }while(r!=1 && r!=2); //Boucle en cas d'erreur

    //Fin de question 6

    //Comparaion de S et N
    if (CptS>CptN){
        strcat(Result,S);
    }
    else {
        strcat(Result,N);
    }

    //Question 7

    printf("7-Avez-vous tendance a prendre des decisions en fonction de votre: \n"); //Question 7
    printf("1: Tete, raisonnement et logique     2: C�ur, sentiments et emotions \n");
    scanf("%d",&r);
    do{
        switch(r){
            case 1:
                CptT=CptT+1 ; //On ajoute un point au compteur "Penseur"
                break ;
            case 2:
                CptF=CptF+1 ; //On ajoute un point au compteur "Sentimental"
                break ;
            default: //On envoie un message d'erreur au cas o� l'utilisateur ne saisit pas une des lettres propos�es
                printf("Erreur, veuillez saisir le nombre correspondant a votre reponse \n");
                scanf("%d",&r);}
    }while(r!=1 && r!=2); //Boucle en cas d'erreur

    //Fin de question 7

    //Question 8

    printf("8-Preferez-vous vous engager avec les autres d'une maniere: \n"); //Question 8
    printf("1: Distante et objective    2: Proche et personnelle \n");
    scanf("%d",&r);
    do{
        switch(r){
            case 1:
                CptT=CptT+1 ; //On ajoute un point au compteur "Penseur"
                break ;
            case 2:
                CptF=CptF+1 ; //On ajoute un point au compteur "Sentimental"
                break ;
            default: //On envoie un message d'erreur au cas o� l'utilisateur ne saisit pas une des lettres propos�es
                printf("Erreur, veuillez saisir le nombre correspondant a votre reponse \n");
                scanf("%d",&r);}
    }while(r!=1 && r!=2); //Boucle en cas d'erreur

    //Fin de question 8

    //Question 9

    printf("9- On vous a souvent accus� d'etre: \n"); //Question 9
    printf("1: Trop froid     2: Trop emotif \n");
    scanf("%d",&r);
    do{
        switch(r){
            case 1:
                CptT=CptT+1 ; //On ajoute un point au compteur "Penseur"
                break ;
            case 2:
                CptF=CptF+1 ; //On ajoute un point au compteur "Sentimental"
                break ;
            default: //On envoie un message d'erreur au cas o� l'utilisateur ne saisit pas une des lettres propos�es
                printf("Erreur, veuillez saisir le nombre correspondant a votre reponse \n");
                scanf("%d",&r);}
    }while(r!=1 && r!=2); //Boucle en cas d'erreur

    //Fin de question 9

    //Comparaion de T et F
    if (CptT>CptF){
        strcat(Result,T);
    }
    else {
        strcat(Result,F);
    }

     //Question 10

    printf("10-Voyez-vous la structure et l'organisation comme: \n"); //Question 10
    printf("1: Contrainte    2: Liberation \n");
    scanf("%d",&r);
    do{
        switch(r){
            case 1:
                CptP=CptP+1 ; //On ajoute un point au compteur "Percepteur"
                break ;
            case 2:
                CptJ=CptJ+1 ; //On ajoute un point au compteur "Juger"
                break ;
            default: //On envoie un message d'erreur au cas o� l'utilisateur ne saisit pas une des lettres propos�es
                printf("Erreur, veuillez saisir le nombre correspondant a votre reponse \n");
                scanf("%d",&r);}
    }while(r!=1 && r!=2); //Boucle en cas d'erreur

    //Fin de question 10

    //Question 11

    printf("11-Preferez-vous que vos activites soient : \n"); //Question 11
    printf("1: non structurees et spontanees   2: Structur�es et planifiees \n");
    scanf("%d",&r);
    do{
        switch(r){
            case 1:
                CptP=CptP+1 ; //On ajoute un point au compteur "Percepteur"
                break ;
            case 2:
                CptJ=CptJ+1 ; //On ajoute un point au compteur "Juger"
                break ;
            default: //On envoie un message d'erreur au cas o� l'utilisateur ne saisit pas une des lettres propos�es
                printf("Erreur, veuillez saisir le nombre correspondant a votre reponse \n");
                scanf("%d",&r);}
    }while(r!=1 && r!=2); //Boucle en cas d'erreur

    //Fin de question 11

    //Question 12

    printf("12-Preferez-vous: \n"); //Question 12
    printf("1: Suivre le courant    2: Controler votre environnement \n");
    scanf("%d",&r);
    do{
        switch(r){
            case 1:
                CptP=CptP+1 ; //On ajoute un point au compteur "Percepteur"
                break ;
            case 2:
                CptJ=CptJ+1 ; //On ajoute un point au compteur "Juger"
                break ;
            default: //On envoie un message d'erreur au cas o� l'utilisateur ne saisit pas une des lettres propos�es
                printf("Erreur, veuillez saisir le nombre correspondant a votre reponse \n");
                scanf("%d",&r);}
    }while(r!=1 && r!=2); //Boucle en cas d'erreur

    //Fin de question 12

    //Comparaion de P et J
    if (CptP>CptJ){
        strcat(Result,P);
    }
    else {
        strcat(Result,J);
    }

    // Affichage du type MBTI avec les infos
    if (strcmp(Result,"ENFJ")==0){ENFJ();}
    if (strcmp(Result,"ENFP")==0){ENFP();}
    if (strcmp(Result,"ENTJ")==0){ENTJ();}
    if (strcmp(Result,"ENTP")==0){ENTP();}
    if (strcmp(Result,"ESFJ")==0){ESFJ();}
    if (strcmp(Result,"ESFP")==0){ESFP();}
    if (strcmp(Result,"ESTJ")==0){ESTJ();}
    if (strcmp(Result,"ESTP")==0){ESTP();}
    if (strcmp(Result,"INFJ")==0){INFJ();}
    if (strcmp(Result,"INFP")==0){INFP();}
    if (strcmp(Result,"INTJ")==0){INTJ();}
    if (strcmp(Result,"INTP")==0){INTP();}
    if (strcmp(Result,"ISFJ")==0){ISFJ();}
    if (strcmp(Result,"ISFP")==0){ISFP();}
    if (strcmp(Result,"ISTJ")==0){ISTJ();}
    if (strcmp(Result,"ISTP")==0){ISTP();}
    return 0;
}
