int main() {
  int x = 10;
  int *ptr = &x; 
  *ptr = 20; 
  int y = *ptr; 
  printf("%d\n", y); 
  // No need to free ptr because it points to a local variable
  return 0;
}