int main() {
  int x = 10;
  int *ptr = &x; 
  *ptr = 20; 
  int y = *ptr; 
  printf("%d\n", y); 
  free(ptr); //Error: free()ing a pointer that was not allocated using malloc(), calloc(), or similar.
  return 0;
}