#include <stdio.h>

void glaslatin(char arr[], char res[], int size);


int main()
{
    char arr[] = "fijajnsdilf;ouqiuhwfiuonb 3123iufbaspdifu";
    int size = sizeof(arr);
    char res[size] = {};
    glaslatin(arr, res, size);
    for (int i = 0; i < size; i++)
    {   
        if (res[i] != 0){
            printf("%c ", res[i]);
        }
    }
    printf("\n");
    return 0;
}

void glaslatin(char arr[], char res[], int size){
    for (int i = 0, j = 0; i < size; i++)
    {
        if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u' || arr[i] == 'y'){
            res[j] = arr[i];
            j++;
        }
    }
}