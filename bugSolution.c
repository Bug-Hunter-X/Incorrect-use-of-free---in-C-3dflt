int main() { int x = 10; int *ptr = (int *) malloc(sizeof(int)); *ptr = 20; // ... use the allocated memory ... free(ptr); return 0; }