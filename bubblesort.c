void bubblesort_crescente(int v[], int n) {
  int i,k;
  int temp;
  for(i = 0; i<n-1; i++) {
    for(k = 0; k<n-1-i; k++) {
        if(v[k] > v[k+1]) {
        temp = v[k];
        v[k] = v[k+1];
        v[k+1] = temp;
      }
    }
  }
}

void bubblesort_decrescente(int v[], int n) {
  int i,k;
  int temp;
  for(i = 0; i<n-1; i++) {
    for(k = 0; k<n-1-i; k++) {
      if(v[k] < v[k+1]) {
        temp = v[k];
        v[k] = v[k+1];
        v[k+1] = temp;
      }
    }
  }
}
