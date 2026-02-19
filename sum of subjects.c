#include<stdio.h>
int main(){
    int chemistry_marks , hindi_marks , english_marks , total_marks;
    printf("Enter marks for Chemistry: ");
    scanf("%d", &chemistry_marks);
    printf("Enter marks for Hindi: ");
    scanf("%d", &hindi_marks);
    printf("Enter marks for English: ");
    scanf("%d", &english_marks);
    total_marks = chemistry_marks + hindi_marks + english_marks;
    printf("Total Marks = %d\n", total_marks);
    return 0;
}