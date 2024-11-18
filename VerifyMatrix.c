#include <stdio.h> 

int H[30][30];

void identidade(int H[30][30], int N, int *id){
  int i, j;
  *id = 1;

  for(i=0; i<N; i++){
    for(j=0; j<N; j++){
      if(i==j){
        if(H[i][j] != 1){
        *id = 0;
        }
      }
      else{
        if(H[i][j] != 0){
          *id = 0;
        }
      }
    }
  }
}

void diagonal(int H[30][30], int N, int *dg){
  int i, j;
  *dg = 1;

  for(i=0; i<N; i++){
    for(j=0; j<N; j++){
      if(i!=j && H[i][j] != 0){
        *dg = 0;
      }
    }
  }
}

void tsup(int H[30][30], int N, int *sup){
  int i, j;
  *sup = 1;
  for(i=1; i<N; i++){
    for(j=0; j<i; j++){
      if(i!=j && H[i][j] != 0){
        *sup = 0;
      }
    }
  }
}

void tinf(int H[30][30], int N, int *inf){
  int i, j;
  *inf = 1;
  for(i=0; i<N; i++){
    for(j=i+1; j<N; j++){
      if(i!=j && H[i][j] != 0){
        *inf = 0;
      }
    }
  }
}


void ehnula(int H[30][30], int N, int *nula){
  int i, j;
  *nula = 1;

  for(i=0; i<N; i++){
    for(j=0; j<N; j++){
      if(H[i][j] != 0){
        *nula = 0;
      }
    }
  }
}

int main(){
  int N, i, j;
  int id, dg;
  int nula;
  int sup, inf;
  
  scanf("%d", &N);
  
  for(i=0; i<N; i++){
    for(j=0; j<N; j++){
      scanf("%d", &H[i][j]);
    }
  }

  identidade(H, N, &id);
  diagonal(H, N, &dg);
  ehnula(H, N, &nula);
  tsup(H, N, &sup);
  tinf(H, N, &inf);

  if(nula){
    printf("\nMatrix %dX%d\n", N, N);
    for(i=0; i<N; i++){
      for(j=0; j<N; j++){
        printf("%d ", H[i][j]);
      }
      printf("\n");
    }
    printf("Nula");
    
  }else if(id){
    printf("\nMatrix %dX%d\n", N, N);
    for(i=0; i<N; i++){
      for(j=0; j<N; j++){
        printf("%d ", H[i][j]);
      }
      printf("\n");
    }
    printf("Identidade");
  }else if(dg){
    printf("\nMatrix %dX%d\n", N, N);
    for(i=0; i<N; i++){
      for(j=0; j<N; j++){
        printf("%d ", H[i][j]);
      }
      printf("\n");
    }
    printf("Diagonal");
  }else if(sup){
    printf("\nMatrix %dX%d\n", N, N);
    for(i=0; i<N; i++){
      for(j=0; j<N; j++){
        printf("%d ", H[i][j]);
      }
      printf("\n");
    }
    printf("Triangular Superior");
    
  }else if(inf){
    printf("\nMatrix %dX%d\n", N, N);
    for(i=0; i<N; i++){
      for(j=0; j<N; j++){
        printf("%d ", H[i][j]);
      }
      printf("\n");
    }
    printf("Triangular Inferior");
  }
  else{
    printf("\nMatrix %dX%d\n", N, N);
    for(i=0; i<N; i++){
      for(j=0; j<N; j++){
        printf("%d ", H[i][j]);
      }
      printf("\n");
    }
    printf("Normal");
  }
  
  return 0;
}
