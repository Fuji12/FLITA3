#include <stdio.h>

int main()
{
    int matrix[15][2];// для создания матрицы
    int i,j;//для персчёта эл-тов
    int m, l;//счётчики вершин
    int n = 1, e = 0;//итоговый счётчик вершин и рёбер
    int max=0;
    FILE *file = fopen("input.txt", "r");//работа с файлом
    for (i = 0; i < 6 && !feof(file); i++){
    for (j = 0; j < 2 && !feof(file); j++){
      fscanf(file, "%d", &matrix[i][j]);
      printf("%d ", matrix[i][j]);
    }
    putchar('\n');
  }
  for (i = 0; i < 6; i++) {//подсчёт вершин

    if(matrix[i][0] > max){
        max = matrix[i][0];
    }

    if(matrix[i][1] > max){
        max = matrix[i][1];
    }
    
  } 
  max++;
  n=i;
  printf("%i\n", max);
  if (n > ((max - 1) * (max - 2) / 2)) {//формула для вычисление связности графа
        printf("This is a connected graph");
    }
    else {
        printf("This is a disconnected graph");
    }
    fclose(file);
    return 0;    
}
