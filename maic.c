#include <stdio.h>

void glaslatin(char arr[], *res[], int size);


int main(int argc, char const *argv[])
{
    char arr[] = "abcdefghijklmnopqrstuvwxyz";
    int size = sizeof(arr);
    char res[size] = {};
    glaslatin(arr, *res, size);
    for (int i = 0; i < size; i++)
    {
        printf("%c ", res[i]);
    }
    
    return 0;
}

void glaslatin(char arr[], char *res[], int size){
    for (int i = 0, j = 0; i < size; i++)
    {
        if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u' || arr[i] == 'y'){
            *res[j] = arr[i];
            j++;
        }
    }
}