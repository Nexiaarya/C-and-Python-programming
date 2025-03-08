#include <stdio.h>
float calculateBill(char wardType, int days);

int main() {
    char name[100], wardType;
    int days;
    float totalBill, discount = 0, finalBill;

    printf("Enter Patient Name: ");
    scanf("%s", name);

    printf("Enter Ward Type (G for General, S for Semi-Private, P for Private): ");
    scanf(" %c", &wardType);  

    printf("Enter Number of Days: ");
    scanf("%d", &days);

    totalBill = calculateBill(wardType, days);
    if (days > 7) {
        discount = totalBill * 0.05;  
    }
    finalBill = totalBill - discount;
    printf("\nPatient Name: %s\n", name);
    printf("Total Bill Before Discount: ₹%.2f\n", totalBill);
    printf("Discount Applied: ₹%.2f\n", discount);
    printf("Final Bill Amount: ₹%.2f\n", finalBill);

    return 0;
}
float calculateBill(char wardType, int days) {
    float ratePerDay;
    if (wardType == 'G' || wardType == 'g') {
        ratePerDay = 1000;
    } else if (wardType == 'S' || wardType == 's') {
        ratePerDay = 2000;
    } else if (wardType == 'P' || wardType == 'p') {
        ratePerDay = 5000;
    } else {
        printf("Invalid ward type.\n");
        return 0;
    }
    return ratePerDay * days;
}
