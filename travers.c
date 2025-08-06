// Data structure
#include<stdio.h>
  


void display(int arr[], int n) {
for (int i = 0; i < n; i++)
{
    printf("%d ", arr[i]);
}
    printf("\n");
}
int main() {
    int arr[10]={2,3,7,6};
    display(arr,4);
    return  0;
}
// gcc --version
// cd C:\Users\anike\OneDrive\Desktop\mynewfolder
// gcc -Wall -Wextra -Wpedantic -Wshadow -Wformat=2 -Wcast-align -Wconversion -Wsign-conversion -Wnull-dereference -g3 -O0 -c travers.c -o .\build\Debug\travers.o && gcc -Wall -Wextra -Wpedantic -Wshadow -Wformat=2 -Wcast-align -Wconversion -Wsign-conversion -Wnull-dereference -g3 -O0 .\build\Debug\travers.o -o .\build\Debug\outDebug.exe
// .\build\Debug\outDebug.exe