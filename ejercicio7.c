#include <stdio.h>
#include <string.h>

int main() 
{ 
    char palabra[20]; 
    int i = 0; 
    
    printf("Ingrese una palabra: "); 
    scanf("%s", palabra); 
    
    printf("La palabra ingresada es: %s\n", palabra); 
    
    for (i = 0; i < strlen(palabra); i++) 
    { 
        printf("%c\n", palabra[i]); 
    } 
    
    return 0; 
}
