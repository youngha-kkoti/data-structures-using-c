int find_array_max(int score[], int n) {
  int i, tmp = score[0];
  for (i = 1; i < n; i++) {
    if (score[i] > tmp) {
      tmp = score[i];
    }
  }
  return tmp;
}
