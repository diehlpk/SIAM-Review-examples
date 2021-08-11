#include <iostream>
#include <vector>
#include <numeric>


int main(void){

    size_t n = 10000;
    // Generate the vector with the length
    std::vector<int> v = std::vector<int>(n);
    // Initilaize the vector with -1
    std::fill(v.begin(),v.end(),-1); 
    // Compute the sum of all elements
    int s = std::accumulate(v.begin(),v.end(),0.0); 
    // Output the result
    std::cout << "Result= " << s << std::endl;

    return EXIT_SUCCESS;

 }
