#include <stdio.h>

int main() {
    float mass_number , proton , neutron , electron , atomic_weight;
    int n;
    float AN , MN , P , E ,N;
    
    printf("You are required to Enter following elements before starting any calculation");
    printf("\nMass number > ");
    scanf("%f",&mass_number);
    printf("Numbr of Proton > ");
    scanf("%f",&proton);
    printf("Number of Neutron > ");
    scanf("%f",&neutron);
    printf("Numbe of electron > ");
    scanf("%f",&electron);
    printf("Atomic Weight > ");
    scanf("%f",&atomic_weight);
    
    (proton==electron)?
    (printf("Valid Atomic values Entered")):
    (printf("Invalid Atomic Vlaues entered Restart the programe (Number of Protons and Electrons are not same)"));
    
    printf("\nChoose your operation >\n\t1.Atomic number\n\t2.Mass_number\n\t3.No. of Proton\n\t4.No. of Electron\n\t5.No. of Neutron\n\t6.Atomic Weight\n\tType > ");
    scanf("%d",&n);
 
    if(n==1) {
        AN = atomic_weight/2;
        printf("Atomic number is near to %f",AN);
    }
    if(n==2) {
        MN = proton + neutron;
        printf("\nMass number is %f",MN);
    }
    if(n==3) {
        P = mass_number - neutron;
        printf("\nAccording to your Initially entered data %f",P);
    }
    if(n==4) {
        AN = atomic_weight/2;
        E = AN;
        printf("Number of Electron %f",E);
    }
    if(n==5) {
        N = mass_number - proton;
        printf("Numner of Nuetrons is %f",N);
    }
    return 0;
}