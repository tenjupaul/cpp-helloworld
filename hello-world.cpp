#include <iostream>

int main() {

         // Program code here

         std::cout << "Hello world!";

         return 0;

}

int leak_example(int c) {
  void *p = malloc(10);
  if(c)
    return -1;   // "p" is leaked
  /* ... */
  free(p);
  return 0;
}


// Dead Code example
int handle_error(){
    return 0;
}

int use_p(int p){
    return 0;
}

// int deadcode_example1(int *p) {
//     if( p == NULL ) {
//         return -1;
//     }

//     use_p( *p );
//     if ( p == NULL ) {      // p cannot be null.
//         handle_error();     // Defect: dead code
//         return -1;         
//     }
//     return 0;
// }
